#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: pointer to the node to be checked
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}
/**
 * binary_tree_nodes - numbers the nodes with at least
 * 1 child in a binary tree
 *
 * @tree: Binary tree
 * Return: The count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	return (1 + left + right);
}
