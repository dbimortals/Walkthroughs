#include <iostream>
#include <fstream>
#include <set>
#include <string>

using namespace std;

int main() {
 ifstream file("q-1.txt");

 string input;
 int x = 0;
 int y = 0;

 set<pair<int , int >> houses;

 houses.insert({0, 0});

while (file >> input) {
   for (char direction : input) {
      switch (direction) {
        case '^':
                y++;
                break;

       case 'v':
                y--;
                break;

       case '>':
               x++;
               break;

       case '<':
               x--;
               break;
      }
       houses.insert({x, y});
    }
  }

  cout << houses.size();

 return 0;
}
