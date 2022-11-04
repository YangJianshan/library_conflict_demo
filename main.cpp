#include <stdio.h>
#include <functional>
float foo();
float wfoo();

int main(){
    float f = foo();
    float wf = wfoo();
    // printf("fpr: %p; wfpr: %p \n", foo, wfoo);
    printf("f: %f; wf: %f\n", f, wf);

    return 0;
}