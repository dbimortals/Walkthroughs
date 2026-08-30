# Advent of Code 2015 - Day 5

## Part 1

The task is to determine which strings are **nice** according to three rules:

1. The string contains at least **three vowels** (`a`, `e`, `i`, `o`, `u`).
2. The string contains at least one letter that appears **twice consecutively**, such as `xx`, `dd`, or `aa`.
3. The string does **not** contain any of the forbidden pairs:

   * `ab`
   * `cd`
   * `pq`
   * `xy`

The solution processes each string from the input file and checks all three conditions. A string is counted as nice only when all three conditions are satisfied.

## Part 2

Part 2 replaces all of the Part 1 rules with two new rules.

A string is **nice** if:

1. It contains a pair of two letters that appears at least twice without overlapping.

   Examples:

   ```text
   xyxy      → xy appears twice
   aabcdefgaa → aa appears twice
   ```

2. It contains at least one letter that repeats with exactly one letter between them.

   Examples:

   ```text
   xyx
   efe
   aaa
   ```

The solution checks for both conditions independently and counts the string only when both are satisfied.

## Language

* C++

## Concepts

* File input
* Strings
* Loops
* String indexing
* `substr()`
* `find()`
* Boolean conditions
* Pattern matching

## How to Run

### Part 1

Compile:

```bash
g++ day5-1.cpp -o day5-1
```

Run:

```bash
./day5-1
```

### Part 2

Compile:

```bash
g++ day5-2.cpp -o day5-2
```

Run:

```bash
./day5-2
```

### General Format

```bash
g++ <input-filename>.cpp -o <output-name>
./<output-name>
```

## Files

* `day5-1.cpp` — Part 1 solution
* `day5-2.cpp` — Part 2 solution
* `q-1.txt` — Puzzle input
* `README.md` — Problem and solution description
