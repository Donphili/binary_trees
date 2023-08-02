#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_root - Checks if  given node is a root
 * @node: pointer node to be mornitored
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
