#include <iostream>
#include <fstream>
#include <set>
#include <string>

using namespace std;

int main() {
 ifstream file("q-1.txt");

 string input;
 int santax = 0;
 int santay = 0;

 int robox = 0;
 int roboy = 0;
 set<pair<int , int >> houses;

 houses.insert({0, 0});

while (file >> input) {
   for (int i = 0; i < input.length(); i++) {
      
      char direction = input[i];
      
      if (i % 2 == 0) {
        if (direction == '^')
            santay++;
        
        else if (direction == 'v')
                 santay--;
                 
        else if (direction == '>')
                santax++;
                
        else if (direction == '<')
                santax--;
                
        houses.insert({santax, santay});
      }
      
      else {
         if (direction == '^')
             roboy++;
         else if (direction == 'v')
                 roboy--;
         else if (direction == '>')
                 robox++;
         else if (direction == '<')
                 robox--;
                 
         houses.insert({robox, roboy});
      }
    }
  }

  cout << houses.size() << endl;

 return 0;
}
