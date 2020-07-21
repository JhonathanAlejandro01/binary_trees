#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the \
right-child of another node
 * @parent: is a pointer to the node to insert the right-child in.
 * @value: is the value to store in the new node.
 * Return: A pointer to the created node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	if (!parent)
		return (NULL);
	bt = calloc(1, sizeof(binary_tree_t));
	if (!bt)
		return (NULL);

	bt->n = value;
	bt->parent = parent;

	if (parent->right)
	{
		bt->right = parent->right;
		bt->right->parent = bt;
	}
	parent->right = bt;
	return (bt);
}
