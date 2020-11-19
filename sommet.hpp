#ifndef Sommet_hpp
#define Sommet_hpp

#include <stdio.h>
#include <string.h>

using namespace std;

class Sommet {
  protected:
    
  public:
    int valeur;
    Sommet* gauche;
    Sommet* droite;
    
      
    ~Sommet() {
      if (gauche)
        delete gauche;
      if (droite)
        delete droite;
    }
  };






#endif /* Sommet_hpp */