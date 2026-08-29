#include <iostream>
#include <string>
using namespace std;

int main()
   {
      string instructions;
      cin >> instructions;

      int floor = 0;

     for (int i = 0; 1 < instructions.length(); i++)
         {
           if (instructions[i] == '(')
              {
                  floor++;
              }
           else if (instructions[i] == ')')
              {
                   floor--;
              }

            if (floor == -1)
              {
                 cout << i + 1 << endl;
                 break;
              }
         }
            return 0;
   }
