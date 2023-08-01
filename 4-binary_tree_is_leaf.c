#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: pointer to  node to be checked
 * Return: 1 if node is  leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}
