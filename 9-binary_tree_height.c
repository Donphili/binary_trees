#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - sees if a node is a leaf
 * @node: Pointer to node to be checked
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the binary tree to be measured
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}
