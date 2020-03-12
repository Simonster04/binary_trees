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

/**
 * binary_tree_height_1 - measures the height of a binary tree (numeric$
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of a binary tree (numerical)
 */

int binary_tree_height_1(const binary_tree_t *tree)
{
	int h_left = 0;
	int h_right = 0;

	if (!tree || (tree && !tree->left && !tree->right))
	{
		return (0);
	}

	h_left = binary_tree_height_1(tree->left);
	h_right = binary_tree_height_1(tree->right);

	if (h_left >= h_right)
	{
		return (1 + h_left);
	}
	return (1 + h_right);
}

/**
 * binary_tree_size_1 - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of binary tree (numerical)
 */

int binary_tree_size_1(const binary_tree_t *tree)
{
	int size_left = 0;
	int size_right = 0;

	if (!tree)
	{
		return (0);
	}

	size_left = binary_tree_size_1(tree->left);
	size_right = binary_tree_size_1(tree->right);

	return (1 + size_left + size_right);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 on success, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int full, hight_l, hight_r;
	int size_l, size_r;

	if (!tree)
	{
		return (0);
	}

	full = binary_tree_is_full(tree);
	if (full == 0)
	{
		return (0);
	}

	hight_l = binary_tree_height_1(tree->left);
	hight_r = binary_tree_height_1(tree->right);
	if (hight_l != hight_r)
	{
		return (0);
	}

	size_l = binary_tree_size_1(tree->left);
	size_r = binary_tree_size_1(tree->right);
	if (size_l != size_r)
	{
		return (0);
	}

	return (1);
}
