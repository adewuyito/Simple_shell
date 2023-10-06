#ifndef NODE_H
#define NODE_H

/**
 * enum node_type_e - node type
 *
 * @NODE_COMMAND: command node
 * @NODE_VAR: variable node
 */
enum node_type_e
{
	NODE_COMMAND, /* simple command */
	NODE_VAR	  /* variable name (or simply, a word) */
};

/**
 * enum val_type_e - value type
 *
 * @VAL_SINT: signed int
 * @VAL_UINT: unsigned int
 * @VAL_SLLONG: signed long long
 * @VAL_ULLONG: unsigned long long
 * @VAL_FLOAT: floating point
 * @VAL_LDOUBLE: long double
 * @VAL_CHR: char
 * @VAL_STR: str (char pointer)
 */
enum val_type_e
{
	VAL_SINT = 1, /* signed int */
	VAL_UINT,	  /* unsigned int */
	VAL_SLLONG,	  /* signed long long */
	VAL_ULLONG,	  /* unsigned long long */
	VAL_FLOAT,	  /* floating point */
	VAL_LDOUBLE,  /* long double */
	VAL_CHR,	  /* char */
	VAL_STR		  /* str (char pointer) */
};

/**
 * union symval_u - symbol value
 *
 * @sint: signed int
 * @uint: unsigned int
 * @sllong: signed long long
 * @ullong: unsigned long long
 * @sfloat: floating point
 * @chr: char
 * @str: str (char pointer)
 */
union symval_u
{
	long sint;
	unsigned long uint;
	long sllong;
	unsigned long ullong;
	double sfloat;
	char chr;
	char *str;
};

/**
 * struct node_s -  node structure
 *
 * @type: node type
 * @val_type: value type
 * @val: value
 * @children: node child
 * @first_child: first child
 * @next_sibling: next sibling
 * @prev_sibling: previous sibling
 */
typedef struct node_s
{
	enum node_type_e type;
	enum val_type_e val_type;
	union symval_u val;
	int children;
	struct node_s *first_child;
	struct node_s *next_sibling, *prev_sibling;
} Node_s;

struct node_s *new_node(enum node_type_e type);
void add_child_node(struct node_s *parent, struct node_s *child);
void free_node_tree(struct node_s *node);
void set_node_val_str(struct node_s *node, char *val);

#endif
