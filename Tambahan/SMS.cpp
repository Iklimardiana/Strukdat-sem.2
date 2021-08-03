#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<pair<string, string>> pesan;
    int n, max;
    cin >> max >> n;
    string order, name, msg;
    int stop;
    int i, j;
    for(i=0; i<n; i++){
        cin >> order >> name;
        if(order == "del"){
            j = 0;
            stop = 0;
            while(j != pesan.size() && stop == 0){
                if(pesan[j].first == name){
                    pesan.erase(pesan.begin()+j);
                    stop = 1;
                }
                j++;
            }
        }
        else{
            j = 0;
            stop = 0;
            while(j != pesan.size() && stop == 0){
                if(pesan[j].first == name){
                    pesan.erase(pesan.begin()+j);
                    stop = 1;
                }
                j++;
            }
            cin >> msg;
            pesan.push_back(make_pair(name, msg));
            if(j==max){
                pesan.erase(pesan.begin());
            }

        }
    }
    j = 0;
    i = pesan.size()-1;
    while(i >=0 && j<max){
        cout << pesan[i].first << ": " << pesan[i].second << endl;
        i--;
        j++;
    }
    return 0;
}