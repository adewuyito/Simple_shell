#include "shell.h"
#include "symtab.h"

/**
 * dump_local_symtab - dump local symbol tab
 */
void dump_local_symtab(void)
{
	struct ST_strc symtab_stack;
	struct ST_entry *entry;
	int i = 0;
	int indent;

	/* Initialize symtab_stack members */
	symtab_stack.level = 1;
	symtab_stack.first = NULL;
	/* Calc indentation based on the level */
	indent = symtab_stack.level * 4;

	fprintf(stderr, "%*sSymbol table [Level %d]:\r\n",
			indent, " ",
			symtab_stack.level);
	fprintf(stderr, "%*s===========================\r\n",
			indent, " ");
	fprintf(stderr, "%*s  No      Symbol      Val\r\n",
			indent, " ");
	fprintf(stderr, "%*s------ ------------- ------------\r\n",
			indent, " ");

	entry = symtab_stack.first;
	while (entry)
	{
		fprintf(stderr, "%*s[%04d] %-32s '%s'\r\n",
				indent, " ",
				i++, entry->name, entry->val);
		entry = entry->next;
	}
	fprintf(stderr, "%*s------ ------------- ------------\r\n",
			indent, " ");
	entry = symtab_stack.first;
	while (entry)
	{
		struct ST_entry *temp = entry;

		entry = entry->next;
		free(temp);
	}
}
