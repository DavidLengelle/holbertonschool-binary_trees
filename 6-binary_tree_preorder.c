#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Si l'arbre est vide ou pas de fonction, on arrete */
	if (tree == NULL || func == NULL)
		return;

	/* Pre-order = Racine -> Gauche -> Droit */

	 /* Root : on appelle func sur la valeur du noeud */
	func(tree->n);

	 /* On descend a gauche */
	binary_tree_preorder(tree->left, func);

	 /* On descend a droite */
	binary_tree_preorder(tree->right, func);
}
