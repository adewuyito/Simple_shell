#include "shell.h"

/**
 * print_prompt1 - prints the prompt string
 */
void print_prompt1(void)
{
	struct symtab_entry_s *entry = get_symtab_entry("PS1");

	if (entry && entry->val)
	{
		char *p = entry->val;

		print(p, STDOUT_FILENO);
	}
	else
	{
		print("$ ", STDOUT_FILENO);
	}
}
