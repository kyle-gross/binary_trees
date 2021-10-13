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
	if (!tree)
		return (0);

	else
	{
		size_t rHeight = binary_tree_height(tree->right);
		size_t lHeight = binary_tree_height(tree->left);

		if (rHeight > lHeight)
			return (rHeight + 1);
		return (lHeight + 1);
	}
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: ptr to root node of tree
 *
 * Return: balance, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lHeight, rHeight;

	if (!tree)
		return (0);

	lHeight = binary_tree_height(tree->left);
	rHeight = binary_tree_height(tree->right);

	return (lHeight - rHeight);
}
