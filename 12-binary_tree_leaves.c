#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: if tree is NULL returns 0, otherwise amount of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left  && !tree->right)
		return (1);
	leave = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (leave);
}
