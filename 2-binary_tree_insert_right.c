#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the right of the parent
 *
 * @parent: ptr to the node to insert right-child in
 * @value: value for new node
 *
 * Return: ptr to new node or NULL if failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (parent && new_node)
	{
		new_node->right = parent->right;

		if (new_node->right)
			new_node->right->parent = new_node;

		parent->right = new_node;
	}

	return (new_node);
}
