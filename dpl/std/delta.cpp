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
    //Eigene Funktionen z.B. trim oder so
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


/*
int delta::gets(const char *&args) {
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;
    while (1) {
        read = std::getline(&line, &len, stdin);
        if (read == -1)
            break;
        //printf("line = %s", line);
        //printf("line length = %zu\n", read);
        //puts("");
        args=("%s",line);
    }
    free(line);
    return 0;
}
*/