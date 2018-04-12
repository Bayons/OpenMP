#!/bin/bash

echo Compilando iniArraysBucles...
gcc -fopenmp ./1_iniArraysBucles.c -o ./0_exec1

echo Compilando iniArraysSecciones...
gcc -fopenmp ./2_iniArraysSecciones.c -o ./0_exec2
