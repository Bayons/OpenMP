#!/bin/bash

echo Compilando...
gcc -fopenmp ./matrixMult.c -o chicha

echo Ejecutando...
./chicha
