/*************************************************************************
             Programme  -  Représente un Programme du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Programme> (fichier programme.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "programme.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Programme::Print() const
{

} //----- Fin de Print

void Programme::Execute(map<string, int> &values)
{
    vector<PDECL*>::iterator itDecl;

    for(itDecl = declarations.begin(); itDecl != declarations.end(); ++itDecl)
    {
		PDECL* currDecl = *itDecl;
		currDecl->Execute(values);
    }

    vector<PIN*>::iterator itInstr;

    for(itInstr = instructions.begin(); itInstr != instructions.end(); ++itInstr)
    {
		PIN* currInstr = *itInstr;
		currInstr->Execute(values);
    }
} //----- Fin de Execute

//-------------------------------------------- Constructeurs - destructeur

Programme::Programme(vector<PDECL*>& declarations, vector<PIN*>& instructions) : Symbole(PROGRAMME), declarations(declarations), instructions(instructions)
{

} //----- Fin de Programme


Programme::~Programme()
{

} //----- Fin de ~Programme


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
