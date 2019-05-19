#!/bin/bash

# Count number of lines in the file
num_lines=$(wc -l < file.txt)

# Print empty if less than 10 but if more pick the tenth
if [ ${lines} -ge 10 ]; then
    head -n 10 | tail -n 1
else
    echo ""
fi
