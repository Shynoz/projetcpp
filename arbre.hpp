#ifndef ArbreB_hpp
#define ArbreB_hpp

#include <iostream>
#include "sommet.hpp"
class ArbreB {
private:
  Sommet * root;
protected:
    Sommet* Insertion(Sommet* s, int val); /* insertion d'un sommet */
    Sommet* Suppression(Sommet*s, int val);  /* suppression d'un sommet */
    Sommet* Fusion(Sommet* s1, Sommet * s2); /* Fusion de deux sommet entre eux */
    void print(Sommet * s);   /* affichage du sommet */
    Sommet* Recherche(Sommet *s,int val); /* recherche du sommet */
public:

  ArbreB();

  void Insertion(int Valeur);
  void Suppression(int valeur);
  void print();
  bool Recherche(int Valeur);


};




#endif
