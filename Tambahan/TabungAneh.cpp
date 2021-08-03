#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<char> s;
    string Kata;
    int panjang;

    cin >> Kata;

    panjang = Kata.size();

    if(s.empty()) {
        s.push(Kata.at(0));
    }

    for (int i = 1; i < panjang; i++) {
        if(s.top()==Kata.at(i)) {
            s.pop();
        }
        else {
            s.push(Kata.at(i));
        }
    }

    if(s.empty()) {
        cout << "Tabung Kosong";
    }
    
    while (!s.empty()) {
        cout << s.top() << "\n";
        s.pop();
    }
    
    return 0;
}