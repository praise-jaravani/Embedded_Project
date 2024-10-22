.RECIPEPREFIX +=
CC = arm-linux-gnueabihf-g++
CFLAGS = -lm -lrt
INCLUDE = -ITools
PROG = bin/*
OBJS = obj/*

# Default optimization flag
OPTFLAGS ?= -O0

# Targets for different optimization combinations
combination_a: OPTFLAGS = -Os
combination_a:
    mkdir -p bin obj
    $(CC) $(INCLUDE) $(CFLAGS) $(OPTFLAGS) -c src/CHeterodyning_threaded.c -o obj/CHeterodyning_threaded.o
    $(CC) $(INCLUDE) $(CFLAGS) $(OPTFLAGS) -c Tools/Timer.cpp -o obj/Timer.o
    $(CC) -o bin/CHeterodyning_threaded obj/CHeterodyning_threaded.o obj/Timer.o $(CFLAGS) $(OPTFLAGS) -pthread

combination_b: OPTFLAGS = -O2
combination_b:
    mkdir -p bin obj
    $(CC) $(INCLUDE) $(CFLAGS) $(OPTFLAGS) -c src/CHeterodyning_threaded.c -o obj/CHeterodyning_threaded.o
    $(CC) $(INCLUDE) $(CFLAGS) $(OPTFLAGS) -c Tools/Timer.cpp -o obj/Timer.o
    $(CC) -o bin/CHeterodyning_threaded obj/CHeterodyning_threaded.o obj/Timer.o $(CFLAGS) $(OPTFLAGS) -pthread

combination_c: OPTFLAGS = -O1
combination_c:
    mkdir -p bin obj
    $(CC) $(INCLUDE) $(CFLAGS) $(OPTFLAGS) -c src/CHeterodyning_threaded.c -o obj/CHeterodyning_threaded.o
    $(CC) $(INCLUDE) $(CFLAGS) $(OPTFLAGS) -c Tools/Timer.cpp -o obj/Timer.o
    $(CC) -o bin/CHeterodyning_threaded obj/CHeterodyning_threaded.o obj/Timer.o $(CFLAGS) $(OPTFLAGS) -pthread

default:
    mkdir -p bin obj
    $(CC) $(INCLUDE) $(CFLAGS) $(OPTFLAGS) -c src/CHeterodyning.c -o obj/CHeterodyning.o
    $(CC) $(INCLUDE) $(CFLAGS) $(OPTFLAGS) -c Tools/Timer.cpp -o obj/Timer.o
    $(CC) -o bin/CHeterodyning obj/CHeterodyning.o obj/Timer.o $(CFLAGS) $(OPTFLAGS)

threaded:
    mkdir -p bin obj
    $(CC) $(INCLUDE) $(CFLAGS) $(OPTFLAGS) -c src/CHeterodyning_threaded.c -o obj/CHeterodyning_threaded.o
    $(CC) $(INCLUDE) $(CFLAGS) $(OPTFLAGS) -c Tools/Timer.cpp -o obj/Timer.o
    $(CC) -o bin/CHeterodyning_threaded obj/CHeterodyning_threaded.o obj/Timer.o $(CFLAGS) $(OPTFLAGS) -pthread

run:
    bin/CHeterodyning

run_threaded:
    bin/CHeterodyning_threaded
   
clean:
    rm -rf $(PROG) $(OBJS)