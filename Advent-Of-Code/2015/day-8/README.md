# Advent of Code 2015 - Day 8

## Part 1

The challenge compares the number of characters in a string's **code representation** with the number of characters stored in **memory**.

The input contains string literals that may use escape sequences such as:

- `\\` — represents one backslash.
- `\"` — represents one double quote.
- `\x` followed by two hexadecimal characters — represents one character.

The goal is to calculate the total difference between the number of characters in the code representation and the number of characters in memory for all strings.

The solution reads each string from the input file and counts its code characters using the length of the line.

It then traverses the string while ignoring the surrounding quotes and treats each escape sequence as a single character in memory.

The difference between the code length and memory length is calculated for each line and added to the total.

## Part 2

Part 2 requires calculating the additional characters needed to **encode each string again**.

When encoding a string:

- Each `"` must be escaped as `\"`.
- Each `\` must be escaped as `\\`.
- Two new surrounding quotes are added.

The solution traverses each original string and calculates the length of its encoded representation without actually creating the encoded string.

The difference between the encoded length and the original code length is calculated for each line and added to the total.

## Language

- C++

## Concepts

- File input
- Strings
- String traversal
- Character indexing
- Escape sequences
- Character counting
- Loops
- Conditional statements
- `length()`

## Files

- `day8-1.cpp` — Part 1 solution
- `day8-2.cpp` — Part 2 solution
