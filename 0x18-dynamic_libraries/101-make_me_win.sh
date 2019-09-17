#!/bin/bash
wget -P ../ https://github.com/johnconnor77/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/0x17.c/jackpot.so 
export LD_PRELOAD=../mwk.so
