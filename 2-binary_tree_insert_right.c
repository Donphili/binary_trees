#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right -  inputs a node as the
 * right-child of another node
 *
 * @parent: Parent of the node
 * @value: Value of node
 * Return: A pointer to a newly created node or NULL during failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(NULL, value);
	if (new_node == NULL)
		return (NULL);

	new_node->right = parent->right;
	if (new_node->right != NULL)
		new_node->right->parent = new_node;
	parent->right = new_node;
	new_node->parent = parent;
	return (new_node);
}
