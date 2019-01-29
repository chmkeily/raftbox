#!/bin/bash

cmake ..
if [ 0 -ne $? ]; then
    exit 1
fi

make
