#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_rotate_right - acts as a right-rotation on a binary tree
 * @tree: Pointer to  root node
 * Return: A pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *nroot;

	if (!tree)
		return (NULL);

	tree->parent = tree->left;
	nroot = tree->parent;
	tree->left = nroot->right;
	nroot->right = tree;
	nroot->parent = NULL;
	if (tree->left)
		tree->left->parent = tree;
	return (nroot);
}
