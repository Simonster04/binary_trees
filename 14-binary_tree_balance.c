#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree (numeric$
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of a binary tree (numerical)
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (!tree)
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

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor of the tree (numerical)
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left = 0;
	int h_right = 0;

	if (!tree)
	{
		return (0);
	}

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	return (h_left - h_right);
}
