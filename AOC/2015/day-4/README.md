# Advent of Code 2015 - Day 4

## Part 1

Santa needs to mine AdventCoins by finding an integer that produces an MD5 hash with at least five leading zeroes.

The puzzle input is used as a secret key. Numbers starting from `1` are appended to the secret key, and the resulting string is hashed using MD5.

The solution:

* Starts searching from the lowest positive integer.
* Appends each number to the secret key.
* Calculates the MD5 hash.
* Converts the hash to hexadecimal.
* Checks whether the hash starts with `00000`.
* Stops when the first valid number is found.

## Part 2

Part 2 increases the mining difficulty by requiring the MD5 hash to start with **six zeroes**.

The solution uses the same brute-force approach as Part 1, but changes the hash condition from:

```text
00000
```

to:

```text
000000
```

The first number satisfying the condition is the answer.

## Language

* C++

## Concepts

* MD5 hashing
* Brute-force search
* String concatenation
* Hexadecimal representation
* Hash prefix validation

## Files

* `day4-1.cpp` — Part 1 solution
* `day4-2.cpp` — Part 2 solution
* `README.md` — Problem and solution description
