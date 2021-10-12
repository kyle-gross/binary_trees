#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: the node to measure from
 *
 * Return: length of tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	else
	{
		size_t rHeight = binary_tree_height(tree->right);
		size_t lHeight = binary_tree_height(tree->left);

		if (rHeight > lHeight)
			return (rHeight + 1);
		else
			return (lHeight + 1);
	}
}