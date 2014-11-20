#include <stdio.h>

float absoluteValueMain(float N) {
    if (N > 0)
        return N;
    else
        return -N;
} 

#ifndef __CXX_TEST_MAIN__

int main(int argc, char** argv){
    printf("%s\n", absoluteValueMain(argc, argv));
    return 0;
}

#endif