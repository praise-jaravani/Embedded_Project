.RECIPEPREFIX +=
CC = arm-linux-gnueabihf-g++
CFLAGS = -lm -lrt
INCLUDE = -ITools
PROG = bin/*
OBJS = obj/*
OPTFLAGS = -O0

# Default to float if not specified
DATA_TYPE ?= FLOAT

ifeq ($(DATA_TYPE),FLOAT)
    TYPE_FLAG = -DUSE_FLOAT
else ifeq ($(DATA_TYPE),DOUBLE)
    TYPE_FLAG = -DUSE_DOUBLE
else ifeq ($(DATA_TYPE),LONG_DOUBLE)
    TYPE_FLAG = -DUSE_LONG_DOUBLE
else ifeq ($(DATA_TYPE),FP16)
    TYPE_FLAG = -DUSE_FP16 -mfp16-format=ieee
else ifeq ($(DATA_TYPE),FLOAT128)
    TYPE_FLAG = -DUSE_FLOAT128 -lquadmath
endif

default:
    mkdir -p bin obj
    $(CC) $(INCLUDE) $(CFLAGS) $(OPTFLAGS) $(TYPE_FLAG) -c src/CHeterodyning.c -o obj/CHeterodyning.o
    $(CC) $(INCLUDE) $(CFLAGS) $(OPTFLAGS) -c Tools/Timer.cpp -o obj/Timer.o
    $(CC) -o bin/CHeterodyning obj/CHeterodyning.o obj/Timer.o $(CFLAGS) $(OPTFLAGS) $(TYPE_FLAG)

threaded:
    mkdir -p bin obj
    $(CC) $(INCLUDE) $(CFLAGS) $(OPTFLAGS) $(TYPE_FLAG) -c src/CHeterodyning_threaded.c -o obj/CHeterodyning_threaded.o
    $(CC) $(INCLUDE) $(CFLAGS) $(OPTFLAGS) -c Tools/Timer.cpp -o obj/Timer.o
    $(CC) -o bin/CHeterodyning_threaded obj/CHeterodyning_threaded.o obj/Timer.o $(CFLAGS) $(OPTFLAGS) $(TYPE_FLAG) -pthread

run:
    bin/CHeterodyning

run_threaded:
    bin/CHeterodyning_threaded

clean:
    rm -rf $(PROG) $(OBJS)
