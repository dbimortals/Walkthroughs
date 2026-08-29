#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
 ifstream file ("q-2.txt");

 string input;
 int total = 0;

 while (file >> input) {
  int l,w,h;
  sscanf(input.c_str(), "%dx%dx%d", &l, &w, &h);
  int perimeter1 = 2 * (l + w);
  int perimeter2 = 2 * (w + h);
  int perimeter3 = 2 * (l + h);

  int smallest = min({perimeter1, perimeter2, perimeter3});

  int volume = l*w*h;
  int result = smallest + volume;
  total += result;
 }
 cout << total;
 return 0;
}
