# Advent of Code 2015 - Day 7

## Part 1

The challenge describes a circuit made up of wires and bitwise logic gates.

Each wire carries a **16-bit signal**, with values ranging from `0` to `65535`.

The instructions describe how signals are connected between wires using:

- Direct values
- Wire-to-wire connections
- `AND`
- `OR`
- `LSHIFT`
- `RSHIFT`
- `NOT`

The goal is to determine the signal ultimately provided to wire `a`.

The solution reads all instructions from the input file and stores the instruction associated with each wire.

A recursive function is then used to resolve the signal for a wire by following its dependencies until the required values are available.

The calculated values are stored using a cache so that already-resolved wires do not need to be calculated again.

Bitwise operators are used to perform the required logic operations.

## Part 2

Part 2 requires the circuit to be evaluated again with one modification.

First, the signal calculated for wire `a` in Part 1 is obtained.

That value is then used to **override wire `b`**.

All other wires are reset, including the previously calculated value of wire `a`.

The circuit is then evaluated again using the modified value of wire `b`.

The solution clears the cached wire values before running the circuit again and replaces the instruction for wire `b` with the Part 1 result.

The new signal ultimately provided to wire `a` is then calculated.

## Language

- C++

## Concepts

- File input
- Strings
- Maps
- Recursion
- Caching
- Bitwise operations
- 16-bit integers
- Dependency resolution
- `AND`
- `OR`
- `LSHIFT`
- `RSHIFT`
- `NOT`

## Files

- `day7-1.cpp` — Part 1 solution
- `day7-2.cpp` — Part 2 solution
