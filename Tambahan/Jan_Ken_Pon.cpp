#include <bits/stdc++.h>
#include <vector>
using namespace std; 

int main(){
    vector <string> v;
    string Gon, Hisoka;
    cin >> Gon;
    cin >> Hisoka;
    v.push_back (Gon);
    v.push_back (Hisoka);

    if (v.front() == v.back()){
        cout << "SERI";
    }else{
        if ((v.front()== "gunting") && (v.back()=="kertas")){
            cout << "GON MENANG";
        }else if ((v.front()=="kertas") && (v.back()=="batu")){
            cout << "GON MENANG";
        }else if((v.front()=="batu") && (v.back()== "gunting")){
            cout << "GON MENANG";
        }else {
            cout << "HISOKA MENANG";
        }  
    }
    return 0;
}

/*
#include <bits/stdc++.h>
#include <vector>
using namespace std; 

int main(){
    vector <string> v;
    string Gon, Hisoka;
    cin >> Gon;
    cin >> Hisoka;
    v.push_back (Gon);
    v.push_back (Hisoka);

    if (v.front() == v.back()){
        cout << "SERI";
    }else{
        if ((v.front()=="kertas") && (v.back()=="batu")){
            cout << "GON MENANG";
        }else if ((v.front()== "gunting") && (v.back()=="kertas")){
            cout << "GON MENANG";
        }else if((v.front()=="batu") && (v.back()== "gunting")){
            cout << "GON MENANG";
        }else {
            cout << "HISOKA MENANG";
        }  
    }
    return 0;
}
*/