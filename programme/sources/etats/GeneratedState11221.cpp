

/*************************************************************************

 GeneratedState11221  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState11221> (fichier GeneratedState11221.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState11221.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState11221::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState11221::Transition (Automate & automate, Symbole *s)
{
	// Generated code :
	switch (*s) {
		case MOINS:
			automate.Reduction(3);
			break;
		case OUVRE_PAR:
			break;
		case FERME_PAR:
			automate.Reduction(3);
			break;
		case MULTIPLIE:
			automate.Reduction(3);
			break;
		case DIVISE:
			automate.Reduction(3);
			break;
		case PLUS:
			automate.Reduction(3);
			break;
		case EGAL:
			break;
		case FIN:
			break;
		case CONST:
			break;
		case CONSTp:
			break;
		case EXPRESSION:
			break;
		case ECRIRE:
			break;
		case F:
			break;
		case POINT_VIRGULE:
			automate.Reduction(3);
			break;
		case IDENTIFIANT:
			break;
		case LIRE:
			break;
		case PDECL:
			break;
		case PIN:
			break;
		case TERME:
			break;
		case VAL:
			break;
		case VAR:
			break;
		case VARp:
			break;
		case VIRGULE:
			break;
	}
	return false;

}

Symbole* GeneratedState11221::Reduction (vector<Symbole*> s)
{
// This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState11221::GeneratedState11221 ( const string name ) : Etat(name)

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState11221>" << endl;

#endif

    } //----- Fin de GeneratedState11221 (constructeur de copie)
        

    GeneratedState11221::~GeneratedState11221 ( )

    // Algorithme :

    //

    {

#ifdef MAP

        cout << "Appel au destructeur de <GeneratedState11221>" << endl;

#endif

    } //----- Fin de ~GeneratedState11221

    

    

    //------------------------------------------------------------------ PRIVE

    

    //----------------------------------------------------- Méthodes protégées

    

    //------------------------------------------------------- Méthodes privées
