#!/bin/bash
wget -q --output-document=$HOME/libcracker.so https://github.com/holbertonschool/0x18.c/tree/master/libcracker.so
export LD_PRELOAD=$HOME/libcracker.so
