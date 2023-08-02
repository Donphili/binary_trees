#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - checks if  node is a leaf
 * @node: pointer to the node to be mornitored
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}
/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: binary tree
 * Return: 1 if a tree is full, otherwise 0
 */
size_t binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left == 1 && right == 1)
		return (1);
	return (0);
}
