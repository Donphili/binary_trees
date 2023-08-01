#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - checks if node is a leaf
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
 * binary_tree_height2 - weighs the height of a binary tree
 * @tree: pointer to binary tree to be weighed
 * Return: height of tree
 */
int binary_tree_height2(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_height2(tree->left);
	right = binary_tree_height2(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: poins at the tree to be measured
 * Return: balance factor of a tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = binary_tree_height2(tree->left);
	right = binary_tree_height2(tree->right);

	return (left - right);
}
