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
    Sommet* Modification(Sommet* s, int val, int newVal);
    
public:

  ArbreB();

  void Modification(int valeur);
  void Insertion(int Valeur);
  void Suppression(int valeur);
  void print();
  bool Recherche(int Valeur);
  void Modification(int val, int newVal);
  void Fusion(ArbreB* s);

};




#endif