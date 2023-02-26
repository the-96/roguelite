#!/bin/bash

# Loop through all cpp files in src directory and its subdirectories
for file in $(find src -type f -name '*.cpp' -or -name '*.c'); 
do
    # Get the name of the file without the directory or extension
    filename=$(basename "$file" .cpp)
    # Compile the file and place the resulting .o file in the obj directory
    g++ -c "$file" -o "obj/$filename.o"
done

# Create the executable
g++ obj/*.o -o game.exe