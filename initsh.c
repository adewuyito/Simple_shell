#include <string.h>
#include "shell.h"
#include "symtab.h"

/**
 * initsh - initialize the symbol table
 */
void initsh(void)
{
	ST_entry *entry;
	char **p2;

	init_symtab();
	p2 = environ;
	while (*p2)
	{
		char *eq = _strchr(*p2, '=');

		if (eq)
		{
			int len = eq - (*p2);
			char *name = malloc(len + 1);

			strncpy(name, *p2, len);
			name[len] = '\0';
			entry = add_to_symtab(name);

			if (entry)
			{
				symtab_entry_setval(entry, eq + 1);
				entry->flags |= FLAG_EXPORT;
			}
			free(name);
		}
		else
		{
			entry = add_to_symtab(*p2);
		}
		p2++;
	}

	entry = add_to_symtab("PS1");
	symtab_entry_setval(entry, "$ ");

	entry = add_to_symtab("PS2");
	symtab_entry_setval(entry, "> ");
}

/**
 * _memset - fills memory with a constant byte
 * @ptr: pointer to the memory area to be filled
 * @value: the value to be set
 * @size: the size of the memory to be filled
 */
void _memset(void *ptr, int value, size_t size)
{
	size_t i;
	unsigned char *byte_ptr = (unsigned char *)ptr;

	for (i = 0; i < size; i++)
	{
		byte_ptr[i] = (unsigned char)value;
	}
}
