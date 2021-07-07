#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << "What is your name?" << endl;
    string s;
    cin >> s;
    cout << "Hello, " << s << "!" << endl;

    cout << "Rolling the dice..." << endl;
    random_device rnd;
    int a = rnd()%6 + 1;
    int b = rnd()%6 + 1;
    cout << "Die 1: " << a << endl;
    cout << "Die 2: " << b << endl;
    cout << "Total value: " << a + b << endl;

    if((a+b)>7)cout << s << " won!" << endl;
    else cout << s << " lost!" << endl;
}