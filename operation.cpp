#include "arbre.hpp"

ArbreB::ArbreB(){
    root=NULL;
}

Sommet* ArbreB::Insertion(Sommet* s,int n){
    if(s == NULL) {
        s = new Sommet;
        s->valeur=n;
        s->gauche =NULL;
        s->droite=NULL;
    }
    if(n < s->valeur) {
        s->gauche  = Insertion(s->gauche, n);
    }
    if(n > s->valeur) {
        s->droite = Insertion(s->droite, n);
    }
    return s;
}
void ArbreB::Insertion(int Valeur)
{
    root = Insertion(root, Valeur);
}

Sommet * ArbreB::Suppression(Sommet * s,int Valeur)
{
    if (s == NULL)
        return NULL;

    if (s->valeur == Valeur)
    {
        if (s->gauche  == NULL && s->droite == NULL)
            s = NULL;
        else if (s->gauche == NULL && s->droite != NULL)
        {
            s = s->droite;
        }
        else if (s->gauche != NULL && s->droite == NULL)
        {
            s = s->gauche ;
        }
    }
    else if (s->valeur < Valeur)
        s->droite = Suppression(s->droite, Valeur); 
    else
        s->gauche  = Suppression(s->gauche , Valeur);
    return s;
}

Sommet * ArbreB::Fusion(Sommet* s1, Sommet* s2){
    if (!s1) 
        return s2; 
    if (!s2) 
        return s1; 
    s1->valeur += s2->valeur; 
    s1->gauche = Fusion(s1->gauche, s2->gauche); 
    s1->droite = Fusion(s1->droite, s2->droite); 
    return s1; 
}
void ArbreB::Suppression(int Valeur)
{
    root = Suppression(root, Valeur);
}

Sommet * ArbreB::Recherche(Sommet *s,int val)
{
  if(s!=NULL)
  {
    if(val==s->valeur)
      return s;
    if(val<s->valeur)
      return Recherche(s->gauche, val);
    else
      return Recherche(s->droite,val);
  }
  else return NULL;
}

bool ArbreB::Recherche(int Valeur)
{
    Sommet * result = Recherche(root, Valeur);
    return result == NULL ?
        false :
        true;
}

void ArbreB::print(Sommet* s){
  if(s==NULL){
    return ;
  }
  std::cout<<s->valeur<<" ";
  print(s->gauche);
  print(s->droite);
}

void ArbreB::print()
{
    print(root);
    std::cout << std::endl;
}

