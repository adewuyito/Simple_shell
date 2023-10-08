#ifndef SYMBTREE_H
#define SYMBTREE_H

#include "node.h"
#include "shell.h"
#define MAX_SYMTAB 256

/**
 * enum symbol_type_e - symbol table entry value type
 *
 * @SYM_STR: string value
 * @SYM_FUNC: function value
 */
enum symbol_type_e /* the type of a symbol table entry's value */
{
	SYM_STR,
	SYM_FUNC
};

/**
 * struct symtab_entry_s - symbol table entry structure
 *
 * @cmd_count: The command count
 * @name: The name of the symbol
 * @val_type: The type of the symbol's value
 * @val: The value of the symbol
 * @flags: Flags for the symbol
 * @next: Pointer to the next entry in the symbol table
 * @func_body: Pointer to the function body
 */
typedef struct symtab_entry_s /* the symbol table entry structure */
{
	int cmd_count;
	char *name;
	enum symbol_type_e val_type;
	char *val;
	unsigned int flags;
	struct symtab_entry_s *next;
	struct node_s *func_body;
} ST_entry;

/**
 * struct symtab_str - symbol table structure
 *
 * @level: The level of the symbol table
 * @first: The first entry in the symbol table
 * @last: The last entry in the symbol table
 */
typedef struct symtab_str /* the symbol table structure */
{
	int level;
	ST_entry *first, *last;
} ST_strc;

/* values for the flags field of struct symtab_entry_s */
#define FLAG_EXPORT (1 << 0) /* export entry to forked commands */


/**
 * struct symtab_stack_s - symbol table stack structure
 *
 * @symtab_count: number of symbol tables on the stack
 * @symtab_list: array of symbol tables
 * @global_symtab: pointer to the global symbol table
 * @local_symtab: pointer to the local symbol table
 */
typedef struct symtab_stack_s /* the symbol table stack structure */
{
	int symtab_count;
	ST_strc * symtab_list[MAX_SYMTAB];
	ST_strc *global_symtab, *local_symtab;
} ST_S_strc;

ST_strc *new_symtab(int level);
ST_strc *symtab_stack_push(void);
ST_strc *get_local_symtab(void);
ST_strc *get_global_symtab(void);
ST_strc *symtab_stack_pop(void);
ST_entry *add_to_symtab(char *symbol);
ST_entry *do_lookup(char *str, ST_strc *symtable);
ST_entry *get_symtab_entry(char *str);
ST_S_strc *get_symtab_stack(void);
char *get_symtab_path(void);
int rem_from_symtab(ST_entry *entry, ST_strc *symtab);
void init_symtab(void);
void dump_local_symtab(void);
void free_symtab(ST_strc *symtab);
void free_symtab2(ST_strc *symtab);
void symtab_entry_setval(ST_entry *entry, char *val);

extern ST_S_strc symtab_stack;
extern int symtab_level;

#endif
