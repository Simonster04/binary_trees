#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of binary tree (numerical)
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0;
	size_t size_right = 0;

	if (!tree)
	{
		return (0);
	}

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	return (1 + size_left + size_right);
}

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

	s_left = binary_tree_size(tree->left);
	s_right = binary_tree_size(tree->right);

	if (s_left != s_right)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
