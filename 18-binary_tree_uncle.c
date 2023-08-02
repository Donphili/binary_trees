#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_uncle - locates the uncle of a node
 * @node: pointer to the node to locate it's uncle
 * Return: A pointer to the uncle of the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
