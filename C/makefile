.RECIPEPREFIX +=
CC = arm-linux-gnueabihf-g++
CFLAGS = -lm -lrt
INCLUDE = -ITools
PROG = bin/*
OBJS = obj/*

DATA_TYPE ?= float

default: heterodyning

heterodyning:
    mkdir -p bin obj
    $(CC) $(INCLUDE) $(CFLAGS) -DDATA_TYPE=$(DATA_TYPE) -c src/CHeterodyning.c -o obj/CHeterodyning.o
    $(CC) $(INCLUDE) $(CFLAGS) -DDATA_TYPE=$(DATA_TYPE) -c src/globals.c -o obj/globals.o
    $(CC) $(INCLUDE) $(CFLAGS) -c Tools/Timer.cpp -o obj/Timer.o
    $(CC) -o bin/CHeterodyning obj/CHeterodyning.o obj/globals.o obj/Timer.o $(CFLAGS)

run:
    bin/CHeterodyning

float: DATA_TYPE = float
float: heterodyning

double: DATA_TYPE = double
double: heterodyning

long_double: DATA_TYPE = "long double"
long_double: heterodyning

fp16: DATA_TYPE = __fp16
fp16: CFLAGS += -mfp16-format=ieee
fp16: heterodyning

float128: DATA_TYPE = __float128
float128: CFLAGS += -mfloat128
float128: heterodyning

clean:
    rm -rf $(PROG) $(OBJS)