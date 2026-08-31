# Advent of Code 2015 - Day 6

## Part 1

The challenge uses a `1000 × 1000` grid containing one million lights.

All lights initially start **turned off**.

Each instruction operates on an inclusive rectangular range and performs one of three actions:

1. `turn on` — turns all selected lights on.
2. `turn off` — turns all selected lights off.
3. `toggle` — switches each selected light between on and off.

The solution represents the lights using a two-dimensional boolean array. Each instruction is parsed to obtain the starting and ending coordinates, and nested loops are used to apply the required operation to every light within the specified range.

After all instructions are processed, the solution counts the number of lights that are turned on.

## Part 2

Part 2 changes the behavior of the lights. Instead of simply being **on or off**, each light now has a **brightness level** starting at `0`.

The instructions now work as follows:

1. `turn on` — increases brightness by `1`.
2. `turn off` — decreases brightness by `1`, but never below `0`.
3. `toggle` — increases brightness by `2`.

The solution uses a two-dimensional integer array to store the brightness of each light.

The same coordinate parsing and nested-loop approach is used to process each instruction.

After all instructions are processed, the brightness of every light is added together to calculate the total brightness.

## Language

- C++

## Concepts

- Two-dimensional arrays
- File input
- Strings
- Nested loops
- String parsing
- Coordinate ranges
- Boolean values
- Integer values
- `sscanf()`

## Files

- `day6-1.cpp` — Part 1 solution
- `day6-2.cpp` — Part 2 solution
- `q-1.txt` — Puzzle input
- `README.md` — Problem and solution description
