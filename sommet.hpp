#ifndef Sommet_hpp
#define Sommet_hpp

#include <stdio.h>
#include <string.h>

using namespace std;

class Sommet {
  protected:
    
  public:
    int valeur;  /* on initialise une valeur pour notre sommet que l'on place a droite ou a gauche  */
    Sommet* gauche;  
    Sommet* droite;
    
      
    ~Sommet() {  
      if (gauche)   /* destructeur du sommet */
        delete gauche;
      if (droite)
        delete droite;
    }
  };






#endif /* Sommet_hpp */
