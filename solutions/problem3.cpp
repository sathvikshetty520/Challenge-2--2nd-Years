#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream in("inputs/states.txt");
    string state;
    int count = 0;

    // Count how many state names start and end with the same letter
    while (in >> state) {
        if (!state.empty()) {
            char first = tolower(state.front());
            char last  = tolower(state.back());
            if (first == last) count++;
        }
    }

    cout << count << endl; // Clue 3
    return 0;
}