#ifndef ArbreB_hpp
#define ArbreB_hpp

#include <iostream>
#include "sommet.hpp"
class ArbreB {
private:
  Sommet * root;
protected:
    Sommet* Insertion(Sommet* s, int val);
    Sommet* Suppression(Sommet*s, int val);
    Sommet* Fusion(Sommet* s1, Sommet * s2);
    void print(Sommet * s);
    Sommet* Recherche(Sommet *s,int val);
public:

  ArbreB();

  void Insertion(int Valeur);
  void Suppression(int valeur);
  void print();
  bool Recherche(int Valeur);


};




#endif