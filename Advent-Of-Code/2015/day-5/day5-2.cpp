#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
 ifstream file ("q-1.txt");

 string str;
 int niceCount = 0;

 while (file >> str) {

   //int vowelCount = 0;
   bool doublePair = false;
   bool doubleletter = false;

   for (int i = 0; i < str.length() - 1; i++) {

     string pair = str.substr(i, 2);
     
     for (int j = i + 2; j < str.length() - 1; j++) {
     
        if (pair == str.substr(j, 2)) {
        
          doublePair = true;
          break;
        }
     }
     
     if (doublePair) {
         break;
     }
   }

    for (int i = 0; i < str.length() - 2; i++) {

    if (str[i] == str[i + 2]) {

     doubleletter = true;
      break;
   }
  }

     if (doublePair && doubleletter )   {

      niceCount++;
   }
 }

    cout << niceCount << endl;

    return 0;
}
