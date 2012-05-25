#ifndef baseBaseClass_H
#define baseBaseClass_H

#include <iostream>

template< class Type >
struct baseBaseClass
{
  baseBaseClass()
  {
    std::cout << "create TbaseBaseClass\n";
  }
  
  void baseBaseClass_print()
  {
    std::cout << "TbaseBaseClass\n";
  }
};


#endif
