#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a node is a leaf
 * @node: pointer to the node for being check
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return ((node->parent == NULL) ? 1 : 0);
}
