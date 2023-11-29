#include "binary_trees.h"
/**
 * binary_tree_insert_left - func that inserts a node
 * as the left-child of another node
 * @parent: parent of the node
 * @value: value of node
 * Return: NULL if fails else the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child_node;

	if (parent == NULL)
		return (NULL);

	child_node = binary_tree_node(parent, value);

	if (child_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		child_node->left = parent->left;
		parent->left->parent = child_node;
	}

	parent->left = child_node;
	return (child_node);
}

