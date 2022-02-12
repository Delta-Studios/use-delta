#include <stdio.h>
#include <stdbool.h>

bool env() {
    if(getenv("_DELTA_")) {
        return true;
    } else {
        return false;
    }
};


int main() {
    if(env()==0) {
        printf("[DELTA] Delta environment variable not found!");
        return -1;
    }
}