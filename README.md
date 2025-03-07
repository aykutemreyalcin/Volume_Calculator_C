# Volume Calculator in C

## Overview
This simple C program calculates the volume of a rectangular prism by taking three dimensions as input.

## How It Works
1. The program prompts the user to enter three dimensions (`x`, `y`, and `z`).
2. It checks if any dimension is negative:
   - If any value is negative, it displays an error message.
   - Otherwise, it calculates the volume as `x * y * z` and prints the result.

## Compilation & Usage

### Requirements
- A C compiler (e.g., GCC, Clang, MSVC)

### Compiling the Program
```sh
gcc volume_calculator.c -o volume_calculator
```

### Running the Program
```sh
./volume_calculator
```

### Expected Output
```
Enter all dimensions to calculate the volume
x: 5
y: 4
z: 3

volume: 60.00
```