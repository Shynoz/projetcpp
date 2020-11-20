#include "arbre.hpp"

ArbreB::ArbreB(){
    root=NULL;
}

Sommet* ArbreB::Insertion(Sommet* s,int n){  /* fonction permettant d'inserer une valeur dans l'arbre */
    if(s == NULL) {
        s = new Sommet;  /* on créer un nouveau sommet */
        s->valeur=n;  /* on lui associe la valeur n */
        s->gauche =NULL;
        s->droite=NULL;
    }
    if(n < s->valeur) {  /* n va a gauche */
        s->gauche  = Insertion(s->gauche, n);
    }
    if(n > s->valeur) { /* n va a droite */
        s->droite = Insertion(s->droite, n);
    }
    return s;  /* on retourne notre sommet */
}
void ArbreB::Insertion(int Valeur)
{
    root = Insertion(root, Valeur);
}

Sommet * ArbreB::Suppression(Sommet * s,int Valeur) /* fonction pour supprimer un sommet */
{
    if (s == NULL)   /* si il n'y as rien on ne supprime rien */
        return NULL;

    if (s->valeur == Valeur)  /* si la valeur que l'on veut supprimer est presente on la supprime */
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
        s->droite = Suppression(s->droite, Valeur); /* on supprime la valeur a droite */
    else
        s->gauche  = Suppression(s->gauche , Valeur); /* on supprime la valeur a gauche */
    return s;
}

Sommet * ArbreB::Fusion(Sommet* s1, Sommet* s2){ /* fonction permettant de fusionner deux sommets */
    if (!s1) /* si s1 n'existe pas on ne peut pas fusionner et on retourne s2 */
        return s2; 
    if (!s2)  /* si s2 n'existe pas on ne peut pas fusionner et on retourne s1 */
        return s1; 
    s1->valeur += s2->valeur;  /* on additionne la valeur des deux sommets */
    s1->gauche = Fusion(s1->gauche, s2->gauche);  /* on fusionne a gauche */
    s1->droite = Fusion(s1->droite, s2->droite);  /* on fusionne a droite */
    return s1; 
}
void ArbreB::Suppression(int Valeur)
{
    root = Suppression(root, Valeur);
}

Sommet * ArbreB::Recherche(Sommet *s,int val) /* fonction pour rechercher une valeur */
{
  if(s!=NULL) 
  {
    if(val==s->valeur)  
      return s;
    if(val<s->valeur) /* on recherche la valeur a gauche si elle n'y est pas on fait pareil a droite de notre arbre */
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

void ArbreB::print(Sommet* s){ /* fonction permettant d'afficher les valeurs presents dans notre arbre */
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

