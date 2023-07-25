#!/bin/bash
wget -P /tmp https://github.com/Kelys3/alx-low_level_programming/raw/master/0x18-dynamic_libraries/file.so
export LD_PRELOAD=/tmp/file.so
