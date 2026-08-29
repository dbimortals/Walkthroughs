# Advent of Code 2015 - Day 2

## Part 1

The elves need to calculate how much wrapping paper is required for each present.

For each present with dimensions `l x w x h`:

* Calculate the surface area: `2*l*w + 2*w*h + 2*h*l`
* Find the area of the smallest side.
* Add the smallest side area as extra slack.

The solution calculates the total amount of wrapping paper required for all presents.

## Part 2

The elves also need ribbon for each present.

For each present:

* Calculate the perimeter of each face.
* Use the smallest perimeter as the ribbon required to wrap the present.
* Calculate the volume: `l*w*h`
* Add the volume as the ribbon required for the bow.

The solution calculates the total amount of ribbon required for all presents.

## Language

* C++

## Files

* `day2-1.cpp` — Part 1 solution
* `day2-2.cpp` — Part 2 solution
* `README.md` — Problem and solution description
