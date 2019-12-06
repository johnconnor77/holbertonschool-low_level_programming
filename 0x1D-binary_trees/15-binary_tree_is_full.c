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
	return ((!tree) ? 0 :
			(1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left)));
}
/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: pointer to the root address of bin tree
 * Return: 1 if binary tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_nodes = 0, right_nodes = 0;
	int nodes_subtrees = 0;

	if (!tree)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	left_nodes += 1;
	right_nodes += 1;


	nodes_subtrees = left_nodes + right_nodes;


	return ((nodes_subtrees % 2 == 0) ? 1 : 0);
}
