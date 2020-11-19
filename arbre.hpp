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
    void print(Sommet * s);
public:

  ArbreB();

  void Insertion(int Valeur);

  void print();


};




#endif