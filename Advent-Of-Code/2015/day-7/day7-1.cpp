#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>
#include <cstdint>

using namespace std;

map<string, string> instructions;
map<string, uint16_t> memo;

uint16_t getSignal(const string& wire) {

    if (memo.find(wire) != memo.end()) {
        return memo[wire];
    }

    string instruction = instructions[wire];
    stringstream ss(instruction);

    string first, operation, second;

    ss >> first;

    if (!(ss >> operation)) {

        try {
            uint16_t value = stoi(first);
            memo[wire] = value;
            return value;
        }
        catch (...) {
            uint16_t value = getSignal(first);
            memo[wire] = value;
            return value;
        }
    }

    if (first == "NOT") {

        uint16_t value = getSignal(operation);
        uint16_t result = (~value) & 0xFFFF;

        memo[wire] = result;
        return result;
    }

    ss >> second;

    uint16_t left;
    uint16_t right;
    uint16_t result;

    try {
        left = stoi(first);
    }
    catch (...) {
        left = getSignal(first);
    }

    try {
        right = stoi(second);
    }
    catch (...) {
        right = getSignal(second);
    }

    if (operation == "AND") {
        result = left & right;
    }
    else if (operation == "OR") {
        result = left | right;
    }
    else if (operation == "LSHIFT") {
        result = left << right;
    }
    else if (operation == "RSHIFT") {
        result = left >> right;
    }

    memo[wire] = result;
    return result;
}

int main() {

    ifstream file("q-1.txt");

    string line;

    while (getline(file, line)) {

        stringstream ss(line);

        string part;
        string wire;

        size_t arrow = line.find(" -> ");

        string instruction = line.substr(0, arrow);
        wire = line.substr(arrow + 4);

        instructions[wire] = instruction;
    }

    cout << getSignal("a") << endl;

    return 0;
}
