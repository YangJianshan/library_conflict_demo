#include <stdio.h>
float foo();

float wfoo(){
    // printf("wrapper: %p \n", foo);
    return foo();
}
