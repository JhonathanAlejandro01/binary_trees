#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root.
 * @node: is a pointer to the node to check.
 * Return: 1 if node is a root, otherwise 0.
 */

_Bool check_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left)
		check_root(node->left);
	if (node->right)
		check_root(node->right);
	if (node->left && node->right)
		return (1);
	else if (node != node->parent)
		return (0);
	else
		return (0);
}

int binary_tree_is_root(const binary_tree_t *node)
{

	return (check_root(node));
}
