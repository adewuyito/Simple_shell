#include "shell.h"
#include "node.h"
#include "symtab.h"

ST_S_strc symtab_stack;
int symtab_level;

/**
 * init_symtab - initialize symbol table
 */
void init_symtab(void) /* Don't touch this function */
{
	ST_strc *global_symtab;

	symtab_stack.symtab_count = 1;
	symtab_level = 0;

	global_symtab = malloc(sizeof(ST_strc));
	if (!global_symtab)
	{
		print("fatal error: no memory for global symbol table\n", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}

	_memset(global_symtab, 0, sizeof(ST_strc));
	symtab_stack.global_symtab = global_symtab;
	symtab_stack.local_symtab = global_symtab;
	symtab_stack.symtab_list[0] = global_symtab;
	global_symtab->level = 0;
}

/**
 * new_symtab - create a new symbol table
 * @level: The level of the symbol table
 *
 * Return: The new symbol table
 */
ST_strc *new_symtab(int level)
{
	ST_strc *symtab = malloc(sizeof(ST_strc));

	if (!symtab)
	{
		print("fatal error: no memory for new symbol table\n", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}

	memset(symtab, 0, sizeof(ST_strc));
	symtab->level = level;
	return (symtab);
}

/**
 * free_symtab - free a symbol table
 * @symtab: The symbol table
 *
 */
void free_symtab(ST_strc *symtab)
{
	ST_entry *entry;
	ST_entry *next;

	if (symtab == NULL)
		return;

	entry = symtab->first;
	while (entry)
	{
		if (entry->name)
		{
			free(entry->name);
		}

		if (entry->val)
		{
			free(entry->val);
		}

		if (entry->func_body)
		{
			free_node_tree(entry->func_body);
		}

		next = entry->next;
		free(entry);
		entry = next;
	}

	free(symtab);
}

/**
 * free_symtab2 - free a symbol table
 * @symtab: The symbol table
 *
 */
void free_symtab2(ST_strc *symtab)
{
	ST_entry *current = symtab->first;

	while (current != NULL)
	{
		ST_entry *temp = current;

		current = current->next;

		free(temp->name);
		free(temp->val);
		free(temp);
	}
	free(symtab);
}
