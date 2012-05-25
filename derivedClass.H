#ifndef derivedClass_H
#define derivedClass_H

#include <iostream>
#include "baseClass.H"

struct derivedClass
  : public baseClass
{
  derivedClass()
    : baseClass()
  {
    std::cout << "create derivedClass\n";
  }
  
  void derivedClass_print()
  {
    std::cout << "derivedClass\n";
  }
};


#endif
