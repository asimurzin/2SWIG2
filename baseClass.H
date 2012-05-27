#ifndef baseClass_H
#define baseClass_H

#include "boost/shared_ptr.hpp"

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

  static boost::shared_ptr< baseClass > create()
  {
    return boost::shared_ptr< baseClass >( new baseClass() );
  }
};


#endif
