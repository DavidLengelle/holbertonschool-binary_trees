#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* si le node n'existe pas, il ne peut pas être une racine */
	if (node == NULL)
		return (0);

	/* une racine est un nœud qui n'a pas de parent */
	if (node->parent == NULL)
		return (1);

	/* sinon ce n'est pas une racine */
	return (0);
}
