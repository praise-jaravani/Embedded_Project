#include "CHeterodyning.h"
#include <stdio.h>

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

extern DATA_TYPE data[SAMPLE_COUNT];
extern DATA_TYPE carrier[SAMPLE_COUNT];

DATA_TYPE result[SAMPLE_COUNT];

int main(int argc, char**argv) {
    printf("Running Unthreaded Test\n");
    printf("Data Type: %s\n", TOSTRING(DATA_TYPE));
    printf("Size of data type: %zu bits\n", sizeof(DATA_TYPE) * 8);
    printf("Total amount of samples: %d\n", SAMPLE_COUNT);

    tic(); // start the timer
    for (int i = 0; i < SAMPLE_COUNT; i++) {
        result[i] = data[i] * carrier[i];
    }
    double t = toc();
    
    printf("Time: %lf ms\n", t/1e-3);
    
    /* // Optional: Print a few results to verify correctness
    printf("First few results:\n");
    for (int i = 0; i < 5 && i < SAMPLE_COUNT; i++) {
        printf("result[%d] = %f\n", i, (double)result[i]);
    } */
    
    printf("End Unthreaded Test\n");
    return 0;
}