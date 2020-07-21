#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: is a pointer to the parent node of the node to create.
 * @value: is the value to put in the new node.
 * Return: A pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	bt = calloc(1, sizeof(binary_tree_t));
	if (!bt)
		return (NULL);
	bt->parent = parent;
	bt->n = value;
	return (bt);
}
