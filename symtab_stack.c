#include "shell.h"
#include "node.h"
#include "symtab.h"

/**
 * get_locl_symtab - Get the local symbol table
 * Return: The local symbol table
 */
ST_strc *get_local_symtab(void)
{
	return (symtab_stack.local_symtab);
}

/**
 * get_global_symtab - Get the global symbol table
 * Return: The global symbol table
 */
ST_strc *get_global_symtab(void)
{
	return (symtab_stack.global_symtab);
}

/**
 * get_symtab_stack - Get the symbol table stack
 * Return: The symbol table stack
 */
ST_S_strc *get_symtab_stack(void)
{
	return (&symtab_stack);
}
