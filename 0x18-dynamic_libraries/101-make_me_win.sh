#!/bin/bash
wget -P /tmp https://github.com/Sampul-CodeMine/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libcracker.so
export LD_PRELOAD=/tmp/libcracker.so
