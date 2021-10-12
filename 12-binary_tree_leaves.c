#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: the node to check
 *
 * Return: 1 if node is leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->right && !node->left)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_leaves - counts leaves in a binary tree
 *
 * @tree: ptr to root node of tree
 *
 * Return: number of leaves, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree) == 1)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
