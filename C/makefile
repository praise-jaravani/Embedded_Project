.RECIPEPREFIX +=
CC = arm-linux-gnueabihf-g++
CFLAGS = -lm -lrt
INCLUDE = -ITools
OPTFLAGS = -Os

PROG = bin/*
OBJS = obj/*

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
