#!/bin/bash

RED='\033[0;31m'
WHITE='\033[0;37m' 

echo ====================Compiling using GNU C Compiler====================

echo 

start=`date +%s%3N`

gcc $1 -o main && ./main && rm main

end=`date +%s%3N`

echo 

echo -e "${RED}Execution Time :- `expr $end - $start` ms."

echo -e "${WHITE}"