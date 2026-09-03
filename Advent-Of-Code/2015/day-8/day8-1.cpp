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
        int memory = 0;

        for (int i = 1; i < line.length() - 1; i++) {

            if (line[i] == '\\') {

                memory++;

                if (line[i + 1] == 'x') {
                    i += 3;
                }
                else {
                    i++;
                }

            }
            else {
                memory++;
            }
        }

        total += code - memory;
    }

    cout << total << endl;

    return 0;
}
