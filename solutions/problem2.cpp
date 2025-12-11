
#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

int main() {
    ifstream in("inputs/input2.txt");
    string s; in >> s;

    reverse(s.begin(), s.end());

    string filtered;
    for (int i = 0; i < (int)s.size(); i++) {
        if ((i+1) % 3 != 0) filtered.push_back(s[i]);
    }

    for (char &c : filtered) c = char(int(c)+2);

    int count = 0;
    for (char c : filtered) if (isVowel(c)) count++;

    cout << count << endl; // Clue 2
    return 0;
}