#ifndef baseClass_H
#define baseClass_H

#include <iostream>

struct baseClass
{
  baseClass()
  {
    std::cout << "create TbaseClass\n";
  }
  
  void baseClass_print()
  {
    std::cout << "TbaseClass\n";
  }
};


#endif
