#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include "shell.h"
#include "node.h"

/**
 * new_node - create a new node
 * @type: type of node
 *
 * Return: pointer to new node, or NULL on failure
 */
Node_s *new_node(enum node_type_e type)
{
	Node_s *node = malloc(sizeof(Node_s));

	if (!node)
		return (NULL);

	memset(node, 0, sizeof(Node_s));
	node->type = type;

	return (node);
}

/**
 * add_child_node - add a child node to a parent node
 * @parent: parent node
 * @child: child node
 */
void add_child_node(Node_s *parent, Node_s *child)
{
	if (!parent || !child)
	{
		return;
	}

	if (!parent->first_child)
	{
		parent->first_child = child;
	}
	else
	{
		Node_s *sibling = parent->first_child;

		while (sibling->next_sibling)
		{
			sibling = sibling->next_sibling;
		}

		sibling->next_sibling = child;
		child->prev_sibling = sibling;
	}
	parent->children++;
}

/**
 * set_node_val_str - set the value of a node to a string
 * @node: node
 * @val: value
 */
void set_node_val_str(Node_s *node, char *val)
{
	node->val_type = VAL_STR;

	if (!val)
	{
		node->val.str = NULL;
	}
	else
	{
		char *val2 = malloc(strlen(val) + 1);

		if (!val2)
		{
			node->val.str = NULL;
		}
		else
		{
			strcpy(val2, val);
			node->val.str = val2;
		}
	}
}

/**
 * free_node_tree - free a node tree
 * @node: node
 */
void free_node_tree(Node_s *node)
{
	Node_s *child;

	if (!node)
		return;

	child = node->first_child;
	while (child)
	{
		Node_s *next = child->next_sibling;

		free_node_tree(child);
		child = next;
	}

	if (node->val_type == VAL_STR)
	{
		if (node->val.str)
		{
			free(node->val.str);
		}
	}
	free(node);
}
