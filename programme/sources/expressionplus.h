/*************************************************************************
        ExpressionPlus  -  Représente un ExpressionPlus du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <ExpressionPlus> (fichier expressionplus.h) ------
#if ! defined ( EXPRESSIONPLUS_H )
#define EXPRESSIONPLUS_H

//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <map>
#include "symbole.h"
#include "expression.h"
#include "terme.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <ExpressionPlus>
// Représente un ExpressionPlus du langage.
//
//------------------------------------------------------------------------
class ExpressionPlus : public Expression
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void Print() const;
    // Mode d'emploi :
    // Affiche le ExpressionPlus.

    int Evaluate(map<string, int>& variables);
    // Mode d'emploi :
    // Permet d'évaluer l'ExpressionPlus
    // L'entier retourné est la valeur de l'ExpressionPlus

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    ExpressionPlus(Expression* expression, Terme* terme);
    // Mode d'emploi :
    //

    virtual ~ExpressionPlus();
    // Mode d'emploi :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
    Expression* expression;
    Terme* terme;

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <ExpressionPlus>

#endif // EXPRESSIONPLUS_H