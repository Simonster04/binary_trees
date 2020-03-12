#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 in success, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int s_left = 0;
	int s_right = 0;

	if (!tree)
	{
		return (0);
	}
	else if (!tree->right && !tree->left)
	{
		return (1);
	}

	s_left = binary_tree_is_full(tree->left);
	s_right = binary_tree_is_full(tree->right);

	if (s_left != s_right)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
