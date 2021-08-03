#include <bits/stdc++.h>
using namespace std;

int main(){
    set <int> susunan;
    int N;
    cout << "Masukkan banyaknya angka: ";
    cin>>N;
    cout <<"Masukkan susunan angkanya: ";
    while (N--){
        int X;
        cin >> X;
        susunan.insert(X);
    }
    cout <<"Jumlah susunan angka: ";
    int sumAngka = 0;
    for (auto &Angka : susunan){
        sumAngka += Angka;
    }
    cout <<sumAngka ;
    return 0;
}