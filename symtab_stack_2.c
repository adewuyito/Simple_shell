#include "symtab.h"

/**
 * symtab_stack_add - Add a symbol table to the stack
 * @symtab: The symbol table
 *
 */
void symtab_stack_add(ST_strc *symtab)
{
	symtab_stack.symtab_list[symtab_stack.symtab_count++] = symtab;
	symtab_stack.local_symtab = symtab;
}

/**
 * symtab_stack_push - Push a new symbol table onto the stack
 * Return: The new symbol table
 */
ST_strc *symtab_stack_push(void)
{
	ST_strc *st = new_symtab(++symtab_level);

	symtab_stack_add(st);
	return (st);
}

/**
 * symtab_stack_pop - Pop the top symbol table from the stack
 * Return: The popped symbol table
 */
ST_strc *symtab_stack_pop(void)
{
	ST_strc *st;

	if (symtab_stack.symtab_count == 0)
		return (NULL);

	st = symtab_stack.symtab_list[symtab_stack.symtab_count - 1];
	symtab_stack.symtab_list[--symtab_stack.symtab_count] = NULL;
	symtab_level--;

	if (symtab_stack.symtab_count == 0)
	{
		symtab_stack.local_symtab = NULL;
		symtab_stack.global_symtab = NULL;
	}
	else
	{
		symtab_stack.local_symtab =
			symtab_stack.symtab_list[symtab_stack.symtab_count - 1];
	}

	return (st);
}
