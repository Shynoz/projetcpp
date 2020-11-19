#ifndef ArbreB_hpp
#define ArbreB_hpp

#include <stdio.h>
#include "sommet.hpp"
class ArbreB {
public:

private:
    Sommet* root;
public:
  ArbreB(){
    root=new Sommet(0);
    };
  ArbreB Insertion(ArbreB *b,Sommet* s);
  ~ArbreB() {
    if (root)
      delete root;
  }
};




#endif