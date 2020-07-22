#include "binary_trees.h"

/**
 * isBalanced - check if a tree is balanced height or not.
 * @node: is a pointer to the root node.
 * Return: if failure 0 or height
 */

int isBalanced(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (1 + MAX(isBalanced(node->left), isBalanced(node->right)));
}


/**
 * binary_tree_balance - function that measures the balance \
factor of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure \
the balance factor.
 * Return: tree is NULL, return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight = 0;
	int rheight = 0;

	if (!tree)
		return (0);

	lheight = isBalanced(tree->left);
	rheight = isBalanced(tree->right);

	return (lheight - rheight);
}
