#ifndef DELTA_STD_H
#define DELTA_STD_H
#include <iostream>
#include <string>

namespace delta {
   class console;

   static int put(std::string args, ...);

   class str;
   class bin;
   class num;
}

#endif