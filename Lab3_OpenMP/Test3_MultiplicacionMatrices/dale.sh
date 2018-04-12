#!/bin/bash

echo Compilando...
gcc -fopenmp ./matrixMult.c -o exe

echo Ejecutando...
./exe
