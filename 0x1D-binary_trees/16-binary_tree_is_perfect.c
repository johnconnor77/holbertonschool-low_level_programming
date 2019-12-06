#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes in a binary tree
 * @tree: pointer with the address of root node
 * Return: amount of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return ((!tree) ? 0 :
		(1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left)));
}
/**
 * binary_tree_is_perfect - function that checks
 * if a binary tree is perfect
 * @tree: pointer to the root address of bin tree
 * Return: 1 if bin tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_nodes = 0, right_nodes = 0;

	if (!tree)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	return ((left_nodes == right_nodes) ? 1 : 0);
}
