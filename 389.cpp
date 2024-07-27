#include<iostream>
using namespace std;

char diff(string s, string t){
    int sumS = 0;
    int sumT = 0;

    for(auto i: s){
        sumS += int(i); 
    }

    for(auto j: t){
        sumT += int(j);
    }

    int diff = sumT - sumS;
    return char(diff);
    
}

int main(){
    string s = "abcd";
    string t = "abcde";

    cout << diff(s, t) << endl;
    return 0;
}
