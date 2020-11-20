#ifndef ArbreB_hpp
#define ArbreB_hpp

#include <iostream>
#include "sommet.hpp"
class ArbreB {
private:
  Sommet * root;
protected:
    Sommet* Insertion(Sommet* s, int val); /* insertion d'un Sommet */
    Sommet* Suppression(Sommet*s, int val); /* Supression d'un Sommet*/
    Sommet* Fusion(Sommet* s1, Sommet * s2); /* Fusion de deux Sommet entre eux */
    void print(Sommet * s);  /* affichage du Sommet */
    Sommet* Recherche(Sommet *s,int val); /* Recherche du Sommet*/
public:

  ArbreB();

  void Insertion(int Valeur);   
  void Suppression(int valeur);
  void print();
  bool Recherche(int Valeur);


};




#endif
