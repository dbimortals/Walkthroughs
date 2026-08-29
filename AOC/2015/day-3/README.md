# Advent of Code 2015 - Day 3

## Part 1

Santa delivers presents to houses on an infinite two-dimensional grid.

* Santa starts at position `(0, 0)`.
* `^` moves Santa north.
* `v` moves Santa south.
* `>` moves Santa east.
* `<` moves Santa west.
* Every house Santa visits receives at least one present.

The solution tracks Santa's coordinates and stores every visited house using a set of coordinate pairs. Since a set stores only unique positions, its size gives the total number of houses that receive at least one present.

## Part 2

Santa is joined by Robo-Santa.

* Both start at position `(0, 0)`.
* Santa follows the first, third, fifth, etc. directions.
* Robo-Santa follows the second, fourth, sixth, etc. directions.
* Both deliver presents to every house they visit.
* A house is counted only once, even if Santa or Robo-Santa visits it multiple times.

The solution tracks the positions of both Santa and Robo-Santa and stores all visited coordinates in a shared set.

## Language

* C++

## Files

* `day3-1.cpp` — Part 1 solution
* `day3-2.cpp` — Part 2 solution
* `README.md` — Problem and solution description
