#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
   ifstream file ("q-1.txt");

   string input;
   int total = 0;

   while (file >> input){
   int l,w,h;
   sscanf(input.c_str(), "%dx%dx%d", &l, &w, &h);
   int side1 = l*w;
   int side2 = w*h;
   int side3 = l*h;

   int smallest = min({side1, side2, side3});

   int result = 2 * side1 + 2 * side2 + 2 * side3 + smallest;
   total += result;
 }
  cout << total;
  return 0;
}
