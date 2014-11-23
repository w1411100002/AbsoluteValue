#include <stdio.h>

float absoluteValueMain(float N) {
    if (N > 0)
        return N;
    else
        return -N;
} 

#ifndef __CXX_TEST_MAIN__

int main(int argc, char** argv){
    printf("%f\n", absoluteValueMain(-23.309));
    return 0;
}

#endif