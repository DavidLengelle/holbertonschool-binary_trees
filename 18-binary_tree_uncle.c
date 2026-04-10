#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Node for which we want to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if none exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent;

	/* impossible d'avoir un oncle sans node, parent ou grand-parent */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* on récupère le grand-parent du node */
	grand_parent = node->parent->parent;

	/*
	 * si le parent est l'enfant gauche du grand-parent,
	 * alors l'oncle est l'enfant droit
	 */
	if (grand_parent->left == node->parent)
		return (grand_parent->right);

	/* sinon l'oncle est l'enfant gauche */
	return (grand_parent->left);
}
