#include "binary_trees.h"
/**
 * binary_tree_size - gets size of binary tree.
 * @tree: pointer to root.
 * Return: 0 if tree is null, or size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lvalue, rvalue, retval;

	if (tree == NULL)
	{
		return (0);
	}
	lvalue = binary_tree_size(tree->left);
	rvalue = binary_tree_size(tree->right);
	retval = lvalue + rvalue + 1;
	return (retval);
}
