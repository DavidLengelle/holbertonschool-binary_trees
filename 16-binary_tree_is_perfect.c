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
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise or if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* Arbre vide = pas parfait */
	if (tree == NULL)
		return (0);

	/* Une feuille seule est parfaite */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Si les hauteurs gauche et droite sont differentes, pas parfait */
	if (height(tree->left) != height(tree->right))
		return (0);

	/* Parfait seulement si les deux sous-arbres sont aussi parfaits */
	return (binary_tree_is_perfect(tree->left)
		&& binary_tree_is_perfect(tree->right));
}
