#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root.
 * @node: is a pointer to the node to check.
 * Return: 1 if node is a root, otherwise 0.
 */

int check_root(const binary_tree_t *node)
{

	if (node->left)
		check_root(node->left);
	if (node->right)
		check_root(node->right);
	if (node->left && node->right)
		return (1);
	else
		return (0);
}

int binary_tree_is_root(const binary_tree_t *node)
{
	int root = 0;
	if (node)
		root = check_root(node);
	return (root);
}
