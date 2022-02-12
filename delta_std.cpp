#include "delta_std.h"
#include <iostream>
#include <stdio.h>
#include <stdarg.h>
#include <string>

class delta::console {
    public:
    static int log(std::string args, ...) {
        va_list arg;
        int done;
        va_start (arg, args.c_str());
        done = vfprintf (stdout, args.c_str(), arg);
        va_end (arg);
        return 0;
    }
};

static int put(std::string args, ...) {
    delta::console::log((args+"\n").c_str());
    return 0;
};

class delta::str {
    public:
    std::string value;

    std::string getValue() {
        return value;
    }
};
class delta::bin {
    public:
    bool value;

    bool getValue() {
        return value;
    }
};
class delta::num {
    public:
    int value;

    int getValue() {
        return value;
    }
};
