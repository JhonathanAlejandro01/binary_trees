#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the \
left-child of another node
 * @parent: is a pointer to the node to insert the left-child in.
 * @value: is the value to store in the new node.
 * Return: A pointer to the created node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	if (!parent)
	{
		return (NULL);
	}
	bt = calloc(1, sizeof(binary_tree_t));
	if (!bt)
	{
		return (NULL);
	}

	bt->n = value;
	bt->parent = parent;

	if (parent->left)
	{
		bt->left = parent->left;
		bt->left->parent = bt;
	}
	parent->left = bt;
	return (bt);
}
