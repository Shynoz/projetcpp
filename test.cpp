#include "arbre.hpp"
#include "sommet.hpp"
#include "operation.cpp"

int main()
{
    ArbreB* tree= new ArbreB;  /* creation d'un nouvel arbre */
    int vals[] = {2, 13, 15, 7, 1, 72, 27, 17, 31}; 
    for(const int& val : vals)
        tree->Insertion(val);    /* on insere les valeurs dans l'arbre que l'on vient de creer */

    cout << "Valeur de l'arbre :";  
    tree->print(); /* on affiche notre arbre */

    cout << "Rcherche de la valeur 31: ";
    bool b = tree->Recherche(31);   /* on recherche la valeur 31 dans notre arbre */
    if(b)
        cout << "Trouvé"; /* on affiche si on as trouve la valeur chercher */
    else
        cout << "Pas Trouvé"; /* on affiche si la valeur que l'on recherche n'est pas dans l'arbre */
    cout << endl;

    cout << "Rcherche de la valeur 18: "; /* on recherche la valeur 18 dans l'arbre */
    b = tree->Recherche(18);
    if(b)
        cout << "Trouvé"; /*  on affiche si on as trouve la valeur chercher */
    else
        cout << "Pas Trouvé"; /* on affiche si la valeur que l'on recherche n'est pas dans l'arbre */
    cout << endl;

    cout << "Suppression de la valeur 15" << endl;  /* on supprime la valeur 15 de notre arbre */
    tree->Suppression(15);

    cout << "Valeur de l'arbre : ";
    tree->print();

  return 0;
}
