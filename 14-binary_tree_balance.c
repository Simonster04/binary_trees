#include "binary_trees.h"

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
	const binary_tree_t *aux;

	aux = tree;
	if (!tree)
	{
		return (0);
	}

	while (aux->left)
	{
		h_left++;
		aux = aux->left;
	}

	while (tree->right)
	{
		h_right++;
		tree = tree->right;
	}

	return (h_left - h_right);
}
