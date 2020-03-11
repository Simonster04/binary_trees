#include "binary_trees.h"

/**
 * binary_tree_nodes- counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: amount of nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right_node = 0;
	size_t left_node = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left || tree->right)
	{
		if (tree->parent)
		{
			return (1);
		}
		left_node++;
	}

	left_node = left_node + binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);

	return (right_node + left_node);
}
