#ifndef baseClass_H
#define baseClass_H

#include <iostream>

#include "baseBaseClass.H"
template< class Type >
struct baseClass
  : public baseBaseClass< Type >
{
  baseClass()
    : baseBaseClass< Type >()
  {
    std::cout << "create TbaseClass\n";
  }
  
  void baseClass_print()
  {
    std::cout << "TbaseClass\n";
  }
};


#endif
