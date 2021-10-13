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
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: ptr to root node
 *
 * Return: 1 if full, 0 if not full or tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
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
	if (!tree)
		return (0);
	
	if (binary_tree_balance(tree))
		return (0);

	if (binary_tree_is_full(tree))
		return (1);

	return (binary_tree_is_perfect(tree->left) * binary_tree_is_perfect(tree->right));
}
