#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

int main() {

    ifstream file("q-1.txt");

    bool lights[1000][1000] = {};

    string line;

    while (getline(file, line)) {

        int startX, startY, endX, endY;
        
        if (line.find("turn on") == 0) {

            sscanf(line.c_str(),
                   "turn on %d,%d through %d,%d",
                   &startX, &startY, &endX, &endY);

            for (int x = startX; x <= endX; x++) {
                for (int y = startY; y <= endY; y++) {
                    lights[x][y] = true;
                }
            }
        }

        else if (line.find("turn off") == 0) {

            sscanf(line.c_str(),
                   "turn off %d,%d through %d,%d",
                   &startX, &startY, &endX, &endY);

            for (int x = startX; x <= endX; x++) {
                for (int y = startY; y <= endY; y++) {
                    lights[x][y] = false;
                }
            }
        }

        else if (line.find("toggle") == 0) {

            sscanf(line.c_str(),
                   "toggle %d,%d through %d,%d",
                   &startX, &startY, &endX, &endY);

            for (int x = startX; x <= endX; x++) {
                for (int y = startY; y <= endY; y++) {
                    lights[x][y] = !lights[x][y];
                }
            }
        }
    }
ssssssssss
    int lit = 0;

    for (int x = 0; x < 1000; x++) {
        for (int y = 0; y < 1000; y++) {

            if (lights[x][y]) {
                lit++;
            }
        }
    }

    cout << lit << endl;

    return 0;
}
