#include "binary_trees.h"

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
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	/* Parfait seulement si les deux sous-arbres sont aussi parfaits */
		return (binary_tree_is_perfect(tree->left)
		&& binary_tree_is_perfect(tree->right));

}
