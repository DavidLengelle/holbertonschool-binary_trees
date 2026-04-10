#include "binary_trees.h"

/**
 * height - Helper: copie de binary_tree_height
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */

static size_t height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	/* Arbre vide = hauteur 0 */
	if (tree == NULL)
		return (0);

	/* Une feuille = hauteur 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* On calcule la hauteur de chaque cote */
	left_h = height(tree->left);
	right_h = height(tree->right);

	/* On retourne 1 + la plus grande des deux */
	if (left_h > right_h)
		return (1 + left_h);
	else
		return (1 + right_h);
}

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
		left_h = 1 + (int)height(tree->left);
	else
		left_h = 0;

	/* Hauteur droite : pareil */
	if (tree->right != NULL)
		right_h = 1 + (int)height(tree->right);
	else
		right_h = 0;

	/* Balance = hauteur gauche - hauteur droite */
	return (left_h - right_h);
}
