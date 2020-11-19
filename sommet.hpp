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
    Sommet(): valeur(NULL),gauche(NULL),droite(NULL){}
    Sommet(const Sommet& s):valeur(s.valeur),gauche(s.gauche),droite(s.droite){};
     ~Sommet() {
      if (gauche)
        delete gauche;
      if (droite)
        delete droite;
    }
  };






#endif /* Sommet_hpp */