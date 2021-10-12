#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: ptr to the node to measure from
 *
 * Return: the depth, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	else
	{
        size_t depth = binary_tree_depth(tree->parent);

		return (depth + 1);
	}
}
