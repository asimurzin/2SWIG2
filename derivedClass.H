#ifndef derivedClass_H
#define derivedClass_H

#include <iostream>
#include "baseClass.H"

template< class Type > 
struct derivedClass
  : public baseClass< Type >
{
  derivedClass()
    : baseClass< Type >()
  {
    std::cout << "create derivedClass\n";
  }
  
  void derivedClass_print()
  {
    std::cout << "derivedClass\n";
  }
};


#endif
