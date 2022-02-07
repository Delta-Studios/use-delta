#include "delta.h"
#include <iostream>
#include <stdio.h>
#include <stdarg.h>
#include <string>

class delta::Console {
    public:
    static int println(std::string args, ...) {
        va_list arg;
        int done;
        va_start (arg, args.c_str());
        done = vfprintf (stdout, args.c_str(), arg);
        va_end (arg);
        return 0;
    }
};

class delta::str {
    public:
    std::string name;
    std::string value;

    std::string getName() {
        return name;
    }
    std::string getValue() {
        return value;
    }
};
class delta::bin {
    public:
    std::string name;
    bool value;

    std::string getName() {
        return name;
    }
    bool getValue() {
        return value;
    }
};
class delta::num {
    public:
    std::string name;
    int value;

    std::string getName() {
        return name;
    }
    int getValue() {
        return value;
    }
};
