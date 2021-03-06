/**
 * \file TAD_Coup.h
 * \brief Implantation du TAD Coup
 * \author Groupe 1.5
 * \version 1.0
 * \date 02/12/15
 *
 */

 #ifndef __TAD_COUP__
 #define __TAD_COUP__
 #include "TAD_Position.h"
 #include "TAD_Pion.h"

/**
 * \struct Coup
 * \brief Le type Coup permet de représenter le coup d'un joueur, en regroupant une position (sur le plateau) et un pion
 *
 */
typedef struct {
  Position position; /**< la largeur de la grille */
  Pion pion; /**< la hauteur de la grille */
} Coup;

/**
 * \fn Coup CP_creerCoup(Position position, Pion pion)
 * \brief Fonction qui retourne un coup à partir d'une position et d'un pion
 *
 * \param Position position : la position à affecter au Coup
 * \param Pion pion : le Pion à affecter au Coup
 * \return Coup
 */
Coup CP_creerCoup(Position position, Pion pion);

/**
 * \fn Position CP_obtenirPositionCoup(Coup coup)
 * \brief Fonction qui retourne la position d'un coup
 *
 * \param Coup coup : le coup dont on veut la position
 * \return Coup
 */
Position CP_obtenirPositionCoup(Coup coup);

/**
 * \fn Position CP_obtenirPionCoup(Coup coup)
 * \brief Fonction qui retourne le pion d'un coup
 *
 * \param Coup coup : le coup dont on veut le pion
 * \return Coup
 */
Pion CP_obtenirPionCoup(Coup coup);

/**
 * \fn CP_sontEgaux
 * \brief Fonction testant l'égalité de deux coups (type Coup)
 *
 * \param Coup coup1
 * \param Coup coup2
 * \return int (Booleen)
 */
 int CP_sontEgaux(Coup coup1, Coup coup2);

 #endif
