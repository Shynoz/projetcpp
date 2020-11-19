#include "arbre.hpp"

ArbreB ArbreB::Insertion(ArbreB* a,Sommet* s){
    if (a->root==NULL){
        a->root=s;
    }
    if (a->root->droite==NULL){
        a->root->droite=s;
    }
    else
    {
        a->root->gauche=s;
    }
    

}
