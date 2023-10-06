#include "shell.h"
#include "node.h"
#include "symtab.h"

/**
 * add_to_symtab - Add a symbol table entry
 * @symbol: The symbol table entry's name
 *
 * Return: The symbol table entry
 */
ST_entry *add_to_symtab(char *symbol)
{
	ST_strc *st;
	ST_entry *entry = NULL;

	if (!symbol || symbol[0] == '\0')
		return (NULL);

	st = symtab_stack.local_symtab;
	entry = do_lookup(symbol, st);
	if (entry)
		return (entry);

	entry = malloc(sizeof(ST_entry));
	if (!entry)
	{
		print("fatal error: no memory for new symbol table entry\n", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}

	_memset(entry, 0, sizeof(ST_entry));
	entry->name = malloc(strlen(symbol) + 1);
	if (!entry->name)
	{
		print("fatal error: no memory for new symbol table entry\n", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
	strcpy(entry->name, symbol);
	if (!st->first)
	{
		st->first = entry;
		st->last = entry;
	}
	else
	{
		st->last->next = entry;
		st->last = entry;
	}

	return (entry);
}

/**
 * rem_from_symtab - Remove a symbol table entry
 * @entry: The symbol table entry
 * @symtab: The symbol table
 *
 * Return: 1 if the entry was removed, 0 otherwise
 */
int rem_from_symtab(ST_entry *entry, ST_strc *symtab)
{
	int res = 0;

	if (entry->val)
		free(entry->val);

	if (entry->func_body)
		free_node_tree(entry->func_body);

	free(entry->name);

	if (symtab->first == entry)
	{
		symtab->first = symtab->first->next;

		if (symtab->last == entry)
			symtab->last = NULL;
		res = 1;
	}
	else
	{
		ST_entry *e = symtab->first;
		ST_entry *p = NULL;

		while (e && e != entry)
		{
			p = e;
			e = e->next;
		}

		if (e == entry)
		{
			p->next = entry->next;
			res = 1;
		}
	}

	free(entry);
	return (res);
}

/**
 * do_lookup - Look up a symbol table entry
 * @str: The symbol table entry's name
 * @symtable: The symbol table
 *
 * Return: The symbol table entry
 */
ST_entry *do_lookup(char *str, ST_strc *symtable)
{
	ST_entry *entry;

	if (!str || !symtable)
		return (NULL);

	entry = symtable->first;
	while (entry)
	{
		if (strcmp(entry->name, str) == 0)
		{
			return (entry);
		}
		entry = entry->next;
	}

	return (NULL);
}

/**
 * get_symtab_entry - Get a symbol table entry
 * @str: The symbol table entry's name
 *
 * Return: The symbol table entry
 */
ST_entry *get_symtab_entry(char *str)
{
	int i = symtab_stack.symtab_count - 1;

	do {
		ST_strc *symtab = symtab_stack.symtab_list[i];
		ST_entry *entry = do_lookup(str, symtab);

		if (entry)
			return (entry);

	} while (--i >= 0);

	return (NULL);
}

/**
 * symtab_entry_setval - Set the value of a symbol table entry
 * @entry: The symbol table entry
 * @val: The value to set
 */
void symtab_entry_setval(ST_entry *entry, char *val)
{
	if (entry->val)
		free(entry->val);
	if (!val)
	{
		entry->val = NULL;
	}
	else
	{
		char *val2 = malloc(strlen(val) + 1);

		if (val2)
			strcpy(val2, val);
		else
			print("error: no memory for symbol table entry's value\n", STDERR_FILENO);

		entry->val = val2;
	}
}
