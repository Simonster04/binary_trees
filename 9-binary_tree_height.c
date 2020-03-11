#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree (numerical)
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of a binary tree (numerical)
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (!tree || (tree && !tree->left && !tree->right))
	{
		return (0);
	}

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left >= h_right)
	{
		return (1 + h_left);
	}
	return (1 + h_right);
}
