#include <iostream>
#include <string>
using namespace std;

int main()
    {
      string instructions;
      cin >> instructions;

      int floor = 0;

      for (char c : instructions){
           if (c == '('){
              floor++;
          }
           else if  (c == ')'){
                floor--;
           }
        }
      cout << floor << endl;
      return 0;
    }

