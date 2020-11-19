#ifndef Sommet_hpp
#define Sommet_hpp

#include <stdio.h>
#include <string.h>

using namespace std;

class Sommet {
  private:
    int valeur;
    Sommet* gauche;
    Sommet* droite;

  public:


     ~Sommet() {
      if (gauche)
        delete gauche;
      if (droite)
        delete droite;
    }
  };






#endif /* Sommet_hpp */