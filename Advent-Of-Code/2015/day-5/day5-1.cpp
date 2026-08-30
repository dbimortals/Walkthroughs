#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
 ifstream file ("q-1.txt");

 string str;
 int niceCount = 0;

 while (file >> str) {

   int vowelCount = 0;
   bool doubleletter = false;
   bool badPair = false;

   for (int i = 0; i < str.length(); i++) {

     if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )  {

        vowelCount++;
     }
   }

    for (int i = 1; i < str.length(); i++) {

    if (str[i] == str[i - 1]) {

     doubleletter = true;
      break;
   }
  }

   if (str.find("ab") != string::npos || str.find("cd") != string::npos || str.find("pq") != string::npos || str.find("xy") != string::npos) {

       badPair = true;
   }

     if (vowelCount >= 3 && doubleletter && !badPair)   {

      niceCount++;
   }
 }

    cout << niceCount << endl;

    return 0;
}
