#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

int main() {

    ifstream file("q-1.txt");

    int lights[1000][1000] = {};

    string line;

    while (getline(file, line)) {

        int startX, startY, endX, endY;

        if (line.find("turn on") == 0) {

            sscanf(line.c_str(),
                   "turn on %d,%d through %d,%d",
                   &startX, &startY, &endX, &endY);

            for (int x = startX; x <= endX; x++) {
                for (int y = startY; y <= endY; y++) {
                    lights[x][y]++;
                }
            }
        }

        else if (line.find("turn off") == 0) {

            sscanf(line.c_str(),
                   "turn off %d,%d through %d,%d",
                   &startX, &startY, &endX, &endY);

            for (int x = startX; x <= endX; x++) {
                for (int y = startY; y <= endY; y++) {

                    if (lights[x][y] > 0) {
                        lights[x][y]--;
                    }
                }
            }
        }

        else if (line.find("toggle") == 0) {

            sscanf(line.c_str(),
                   "toggle %d,%d through %d,%d",
                   &startX, &startY, &endX, &endY);

            for (int x = startX; x <= endX; x++) {
                for (int y = startY; y <= endY; y++) {
                    lights[x][y] += 2;
                }
            }
        }
    }

    long long totalBrightness = 0;

    for (int x = 0; x < 1000; x++) {
        for (int y = 0; y < 1000; y++) {
            totalBrightness += lights[x][y];
        }
    }

    cout << totalBrightness << endl;

    return 0;
}
