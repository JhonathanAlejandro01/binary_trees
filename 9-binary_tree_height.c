#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree.
 *@tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		return (count_height(tree) - 1);
	}
	else
	{
		return (0);
	}

}
/**
 * count_height - values positiv.
 *@tree: is a pointer to the root node of the tree to measure the height.
 * Return: return count.
 */
size_t count_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree != NULL)
	{
		left = count_height(tree->left);
	right = count_height(tree->right);
	if (left > right)
	{
		return (left + 1);
	}
	else
	{
		return (right + 1);
	}
	}
	else
	{
		return (0);
	}
}
