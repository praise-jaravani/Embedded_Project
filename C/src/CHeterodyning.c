/* #include "CHeterodyning.h"

extern float data [SAMPLE_COUNT];
extern float carrier[SAMPLE_COUNT];

float result [SAMPLE_COUNT];

int main(int argc, char**argv){
    printf("Running Unthreaded Test\n");
    printf("Precision sizeof %ld\n", sizeof(float));
    printf("Size of float: %zu bits\n", sizeof(float) * 8);
    

    printf("Total amount of samples: %ld\n", sizeof(data) / sizeof(data[0]));
    

    tic(); // start the timer
    for (int i = 0;i<SAMPLE_COUNT;i++ ){
        result[i] = data[i] * carrier[i];
    }
    double t = toc();
    printf("Time: %lf ms\n",t/1e-3);
    printf("End Unthreaded Test\n");
    return 0;
} */

// For Altered Data Types

#include "CHeterodyning.h"

extern DATA_TYPE data [SAMPLE_COUNT];
extern DATA_TYPE carrier[SAMPLE_COUNT];

DATA_TYPE result [SAMPLE_COUNT];

int main(int argc, char**argv){
    printf("Running Unthreaded Test\n");
    printf("Precision sizeof %zu\n", sizeof(DATA_TYPE));
    printf("Size of DATA_TYPE: %zu bits\n", sizeof(DATA_TYPE) * 8);
    
    printf("Total amount of samples: %zu\n", sizeof(data) / sizeof(data[0]));
    
    tic(); // start the timer
    for (int i = 0; i < SAMPLE_COUNT; i++ ){
        result[i] = data[i] * carrier[i];
    }
    double t = toc();
    printf("Time: %lf ms\n", t/1e-3);
    printf("End Unthreaded Test\n");
    return 0;
}
