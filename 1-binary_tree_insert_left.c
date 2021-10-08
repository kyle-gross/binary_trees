#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left of another
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in new node
 *
 * Return: pointer to new node or NULL if failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node)
	{
		new_node->left = parent->left;

		if (new_node->left)
			new_node->left->parent = new_node;

		parent->left = new_node;
	}

	return (new_node);
}
