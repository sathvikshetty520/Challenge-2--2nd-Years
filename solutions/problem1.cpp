#include <bits/stdc++.h>
using namespace std;

vector<char> rotateLeft(const vector<char>& row) {
    vector<char> out(row.size());
    for (size_t i = 0; i < row.size(); i++) out[i] = row[(i+1) % row.size()];
    return out;
}
vector<char> rotateRight(const vector<char>& row) {
    vector<char> out(row.size());
    for (size_t i = 0; i < row.size(); i++) out[i] = row[(i+row.size()-1) % row.size()];
    return out;
}

int main() {
    ifstream gridFile("inputs/grid.txt");
    ifstream dirFile("inputs/directions.txt");
    vector<vector<char>> grid;
    string line;

    while (getline(gridFile, line)) {
        vector<char> row(line.begin(), line.end());
        grid.push_back(row);
    }

    vector<char> directions;
    while (dirFile >> line) {
        for (char c : line) if (c=='L' || c=='R') directions.push_back(c);
    }

    for (size_t i = 0; i < grid.size(); i++) {
        grid[i] = (directions[i] == 'L') ? rotateLeft(grid[i]) : rotateRight(grid[i]);
    }

    int mid = grid.size()/2;
    int asciiSum = 0;
    for (char c : grid[mid]) asciiSum += int(c);

    cout << asciiSum << endl; // Clue 1
    return 0;
}