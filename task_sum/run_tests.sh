#!/bin/bash

if g++ test.cpp -o tests; then
    ./tests; rm tests
fi
