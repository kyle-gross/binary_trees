#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: the node to check
 *
 * Return: 1 if node is leaf, otherwise 0. NULL if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (!node->right && !node->left)
		return (1);
	else
		return (0);
}
