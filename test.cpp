#include "arbre.hpp"
#include "sommet.hpp"
#include "operation.cpp"

int main()
{
    ArbreB* tree= new ArbreB;
    int vals[] = {2, 13, 15, 7, 1, 72, 27, 17, 31}; 
    for(const int& val : vals)
        tree->Insertion(val);

    cout << "Valeur de l'arbre :";
    tree->print();

    cout << "Rcherche de la valeur 31: ";
    bool b = tree->Recherche(31);
    if(b)
        cout << "Trouvé";
    else
        cout << "Pas Trouvé";
    cout << endl;

    cout << "Rcherche de la valeur 18: ";
    b = tree->Recherche(18);
    if(b)
        cout << "Trouvé";
    else
        cout << "Pas Trouvé";
    cout << endl;

    cout << "Suppression de la valeur 15" << endl;
    tree->Suppression(15);

    cout << "Valeur de l'arbre : ";
    tree->print();

  return 0;
}