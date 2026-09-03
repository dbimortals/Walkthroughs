#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file("q-1.txt");

    string line;
    int total = 0;

    while (getline(file, line)) {

        int code = line.length();
        int encoded = 2;

        for (int i = 0; i < line.length(); i++) {

            if (line[i] == '"' || line[i] == '\\') {
                encoded += 2;
            }
            else {
                encoded++;
            }
        }

        total += encoded - code;
    }

    cout << total << endl;

    return 0;
}
