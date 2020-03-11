#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: a pointer to the created node, NULL on failure or parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (!parent)
	{
		return (NULL);
	}

	left_node = binary_tree_node(parent, value);
	if (!left_node)
	{
		return (NULL);
	}

	left_node->left = parent->left;
	if (left_node->left)
	{
		left_node->left->parent = left_node;
	}

	parent->left = left_node;

	return (left_node);
}
