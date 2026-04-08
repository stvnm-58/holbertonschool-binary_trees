#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_root - Vérifie si un nœud donné est une racine.
 * @node: Pointeur vers le nœud à vérifier.
 *
 * Return: 1 si le nœud est une racine, sinon 0.
 * Si node est NULL, retourne 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

	if (node->parent == NULL)
	return (1);

return (0);

}
