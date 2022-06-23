#!/bin/bash
gcc *.c
ar -rc liball.a *.o
runlib liball.a
