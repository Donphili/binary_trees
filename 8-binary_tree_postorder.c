#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - Goes through a binary tree
 * using post-order traversal
 *
 * @tree: binary tree
 * @func: function to be added to each node's value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
