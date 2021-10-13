#include "binary_trees.h"

/**
 * find_depth - fints depth of leftmost leaf
 *
 * @node: the node to measure from
 *
 * Return: depth of leftmost leaf
 */
int find_depth(const binary_tree_t *node)
{
	int d = 0;

	while (node)
	{
		d++;
		node = node->left;
	}

	return (d);
}

/**
 *
 */
int perfect(const binary_tree_t *tree, int d, int level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (d == (level + 1));

	if (!tree->left || !tree->right)
		return (0);

	return (perfect(tree->left, d, level + 1) &&
			perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: ptr to root node
 *
 * Return: 1 if perfect, 0 if not or NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (!tree)
		return (0);

	d = find_depth(tree);

	if (perfect(tree, d, 0))
		return (1);

	return (0);
}
