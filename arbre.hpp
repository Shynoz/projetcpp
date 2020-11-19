#ifndef ArbreB_hpp
#define ArbreB_hpp

#include <stdio.h>
#include "sommet.hpp"
class ArbreB {
public:

private:
    Sommet* root;
    

public:
  ArbreB();
  ArbreB Insertion(ArbreB *b,Sommet* s);
  ~ArbreB() {
    if (root)
      delete root;
  }
};




#endif