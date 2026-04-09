#include "binary_trees.h"
/**
 * depth - Mesure la profondeur d'un arbre (chemin gauche)
 * @tree: Pointeur vers la racine
 * Return: La profondeur
 */
int depth(const binary_tree_t *tree)
{
	size_t i = 0; /*profondeur de référence*/
	while (tree != NULL)
	{
		i++;
		tree = tree->left;
	}
	return (i);
}

/**
 * check_perfect - Fonction d'aide récursive
 * @tree: Nœud actuel
 * @i: Profondeur de référence
 * @lvl: Niveau actuel
 * Return: 1 si parfait, 0 sinon
 */
int check_perfect(const binary_tree_t *tree, size_t i, size_t lvl)
{
	if (tree->left == NULL && tree->right == NULL)
		return (i == lvl);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (check_perfect(tree->left, i, lvl + 1) &&
			check_perfect(tree->right, i, lvl + 1));
}

/**
 * binary_tree_is_perfect - Vérifie si un arbre est parfait
 * @tree: Racine de l'arbre
 * Return: 1 si parfait, 0 sinon
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t d;

	if (tree == NULL)
		return (0);

	d = depth(tree);

	return (check_perfect(tree, d, 1));
}
