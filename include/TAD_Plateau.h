/**
 * \file TAD_PLATEAU.h
 * \brief Implantation du TAD Plateau pour le jeu Othello
 * \author Groupe 1.5
 * \version 1.0
 * \date 2/12/2015
 *
 */

#ifndef __TAD_PLATEAU__
#define __TAD_PLATEAU__
#include "TAD_Position.h"
#include "TAD_Pion.h"
#include "TAD_Couleur.h"

/**
 * \struct Plateau
 * \brief Le type Plateau permet de représenter un plateau
 *
 */

 typedef struct {
  Pion pions[8][8]; /**< les pions du plateau */
  int presencePions[8][8]; /**< la case est remplie ou non : 0 si vide, 1 si remplie */
} Plateau;

/**
 * \fn Plateau PLATEAU_creerPlateau()
 * \brief Fonction de création d'un plateau de cases vides, sauf les 4 cases centrales
 *
* \return Plateau
 */
Plateau PL_creerPlateau();

/**
 * \fn Couleur estCaseVide(plateau : Plateau, position : Position)
 * \brief Fonction de création d'une grille de cellules mortes
 *
 * \param Plateau plateau, le plateau
 * \param Position position, la position de la case
 * \return int
 */
int PL_estCaseVide(Plateau plateau, Position position);

/**
 * \fn void viderCase(Plateau* plateau, Position position)
 * \brief Procédure permettant de vider une case
 *
 * \param Plateau* plateau, le plateau
 * \param Position position, la position de la case
 */
void PL_viderCase(Plateau* plateau, Position position);

/**
 * \fn void poserPion(Plateau* plateau, Position position, Pion pion)
 * \brief Procédure permettant de poser un pion sur le plateau
 *
 * \param Plateau* plateau, le plateau
 * \param Position position, la position de la case
 * \param Pion pion, le pion à poser
 */
void PL_poserPion(Plateau* plateau, Position position, Pion pion);

/**
 * \fn Pion obtenirPion(Plateau plateau, Position position)
 * \brief Fonction permettant d'obtenir un pion à une position
 *
 * \param Plateau plateau, le plateau
 * \param Position position, la position de la case
 * \return Pion
 */
Pion PL_obtenirPion(Plateau plateau, Position position);

/**
 * \fn  void inverserPion(Plateau* plateau, Position position)
 * \brief Procédure permettant d'inverser un pion, donc de chnger de joueur
 *
 * \param Plateau* plateau, le plateau
 * \param Position position, la position de la case
 */
void PL_inverserPion(Plateau* plateau, Position position);


#endif
