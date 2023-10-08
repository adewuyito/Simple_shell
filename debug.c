#include "shell.h"

void dump_local_symtab(void)
{
	ST_strc *symtab = symtab_stack.local_symtab;
	struct symtab_entry_s *entry;
	int i = 0;
	int indent = symtab->level * 4;
	char *name1 = "PATH";
	char *name2 = "LS_COLORS";

	fprintf(stderr,
			"%*sSymbol table [Level %d]:\r\n",
			indent, " ",
			symtab->level);
	fprintf(stderr, "%*s================\r\n",
			indent,
			" ");
	fprintf(stderr, "%*s  No   Symbol   Val\r\n", indent, " ");
	fprintf(stderr, "%*s------  ------------\r\n", indent, " ");

	entry = symtab->first;

	while (entry)
	{
		if (entry->name == name1 || entry->name == name2)
		{
			entry = entry->next;
			continue;
		}
		fprintf(stderr, "%*s[%04d] %-32s '%s'\r\n", indent, " ",
				i++, entry->name, entry->val);
		entry = entry->next;
	}

	fprintf(stderr, "%*s------ ------------\r\n", indent, " ");
}
