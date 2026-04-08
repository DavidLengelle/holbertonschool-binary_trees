#include "binary_trees.h"

/**
 * binary_tree_postorder -Goes through a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* si l'arbre est vide ou si la fonction est absente, on ne fait rien */
	if (tree == NULL || func == NULL)
		return;

	/* parcourir d'abord le sous-arbre gauche */
	binary_tree_postorder(tree->left, func);

	/* puis parcourir le sous-arbre droit */
	binary_tree_postorder(tree->right, func);

	/* enfin traiter le nœud courant */
	func(tree->n);
}
