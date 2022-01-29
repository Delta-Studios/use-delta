#include "delta.h"
#include <iostream>
#include <stdio.h>
#include <string>

int delta::put(std::string args) {
    printf ("%s\n", args);
    return 0;
}

int delta::get(std::string &args) {
    //args=std::cin.get();
    std::cin >> args;
    return 0;
}