#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor of both nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *aux;

	if (!first || !second || !first->parent || !second->parent)
	{
		return (NULL);
	}

	if (first == second->parent)
	{
		return ((binary_tree_t *)first);
	}

	if (second == first->parent)
	{
		return ((binary_tree_t *)second);
	}

	aux = second;

	while (second)
	{
		if (first->parent == second)
		{
			return ((binary_tree_t *)first->parent);
		}
		second = second->parent;
	}
	while (first)
	{
		if (aux->parent == second)
		{
			return ((binary_tree_t *)aux->parent);
		}
		aux = aux->parent;
	}

	return (NULL);
}
