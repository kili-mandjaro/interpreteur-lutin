/*************************************************************************
             Const  -  Représente un Const du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Const> (fichier const.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "const.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Constiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Const::Print() const
{
    vector<pair<Identifiant*, Valeur*>>::const_iterator it;

    for(it = declarations.begin(); it != declarations.end(); ++it)
    {
        Identifiant* identifiantCourant = it->first;
        Valeur* valeurCourante = it->second;

        cout << "const ";
        //On affiche l'affectation de constante.
        identifiantCourant->Print();
        cout << "=";
        valeurCourante->Print();
        cout << ";" << endl;

        //Si on est a la fin de la liste.
        if (it == declarations.end())
        {
            cout << endl;
        }
    }
} //----- Fin de print

void Const::AddDeclaration(Identifiant* id, Valeur* val)
{
    declarations.push_back(make_pair(id,val));
} //----- Fin de AddDeclaration

void Const::Execute(map<string, int>& variables)
{
    vector<pair<Identifiant*, Valeur*>>::iterator it;

    for(it = declarations.begin(); it != declarations.end(); ++it)
    {
        Identifiant* identifiantCourant = it->first;
        Valeur* valeurCourante = it->second;
        variables[identifiantCourant->Nom()] = valeurCourante->Evaluate(variables);
    }
}

void Const::GetConstVars(map<string, int> & values) const{
    vector<pair<Identifiant*, Valeur*>>::const_iterator it;

    for(it = declarations.begin(); it != declarations.end(); ++it)
    {
        Identifiant* identifiantCourant = it->first;
        Valeur* valeurCourante = it->second;
        values[identifiantCourant->Nom()] = valeurCourante->Evaluate(values);
    }
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

Const::Const(Identifiant* id, Valeur* val) : PdeclInst(CONSTp)
{
    declarations.push_back(make_pair(id, val));
} //----- Fin de Const


Const::~Const()
{
    vector<pair<Identifiant*, Valeur*>>::iterator it;

    for(it = declarations.begin(); it != declarations.end(); ++it)
    {
        delete it->first;
        delete it->second;
    }

    declarations.clear();
} //----- Fin de ~Const


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
