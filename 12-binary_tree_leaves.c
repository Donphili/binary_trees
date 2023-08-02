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
 * binary_tree_leave - numbers the leaves in a binary tree
 * @tree: pointer to binary tree to be weighed
 * Return: Total  leaves in a tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}
