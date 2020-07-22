#include "binary_trees.h"

/**
 * check_depth - calculate the Depth.
 * @node: is a pointer to the root node of the tree to check.
 * Return: return the depth.
 */

int check_depth(const binary_tree_t *node)
{
	int count = 0;

	while (node)
	{
		count++;
		node = node->left;
	}

	return (count);
}


/**
 * is_perfect - Check if tree is perfect.
 * @node: is a pointer to the root node of the tree to check.
 * @depth: is the depth.
 * @level: are levels.
 * Return:  If tree is NULL, return 0 else return 1.
 */

int is_perfect(const binary_tree_t *node, int depth, int level)
{
	if (!node)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (depth == level + 1);
	if (node->left == NULL || node->right == NULL)
		return (0);

	return (is_perfect(node->left, depth, level + 1) &&
		is_perfect(node->right, depth, level + 1));
}


/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: is a pointer to the root node of the tree to check.
 * Return: If tree is NULL, return 0 else return 1.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = check_depth(tree);

	return (is_perfect(tree, depth, 0));
}
