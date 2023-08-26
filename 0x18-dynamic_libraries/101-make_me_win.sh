#!/bin/bash
wget -q --output-document=$HOME/lib101-makemewin.so https://github.com/Kboateng346/alx-low_level_programming/blob/main/0x18-dynamic_libraries/win.so
export LD_PRELOAD=$HOME/lib101-win.so