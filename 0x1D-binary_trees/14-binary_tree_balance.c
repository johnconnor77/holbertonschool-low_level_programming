#include "binary_trees.h"
/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 * @tree: pointer to the root node
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 1, right_size = 1;

	if (!tree)
		return (0);
	if (tree->left)
		left_size = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_size = binary_tree_height(tree->right) + 1;

	return ((left_size > right_size) ? left_size : right_size);
}
/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 * @tree: pointer with the root address
 * of binary tree
 * Return: measure the balance of binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 1, right_height = 1;

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
