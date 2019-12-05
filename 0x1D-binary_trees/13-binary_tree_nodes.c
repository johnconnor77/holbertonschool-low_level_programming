#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes in a binary tree
 * with at least one child
 * @tree: pointer with the address of root node
 * Return: amount of nodes with at least one child
 * into a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (!tree || (tree->right == NULL && tree->left == NULL) ? 0 :
	(1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left)));
}
