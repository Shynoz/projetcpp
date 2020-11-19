#include "arbre.hpp"

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


void ArbreB::print(Sommet* abr){
  if(abr==NULL){
    return ;
  }
  std::cout<<abr->valeur<<" ";
  print(abr->gauche);
  print(abr->droite);
}

void ArbreB::print()
{
    print(root);
    std::cout << std::endl;
}

int main()
{
    ArbreB* root= new ArbreB();
    int keys[] = {23, 12, 31, 3, 15, 7, 29, 88, 53}; 
    for(const int& key : keys)
        root->Insertion(key);
        root->print();
  return 0;
}