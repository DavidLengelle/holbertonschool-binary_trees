#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	/* Hauteur gauche : si l'enfant existe, 1 + sa hauteur, sinon 0 */
	if (tree->left != NULL)
		left_h = 1 + (int)binary_tree_height(tree->left);
	else
		left_h = 0;

	/* Hauteur droite : pareil */
	if (tree->right != NULL)
		right_h = 1 + (int)binary_tree_height(tree->right);
	else
		right_h = 0;

	/* Balance = hauteur gauche - hauteur droite */
	return (left_h - right_h);
}
