#include<iostream>
using namespace std;

int unique(string s){
    int len = s.length();
    int count;
    for(int i=0; i<len; i++){
        count = 0;
        for(int j=0; j<len; j++){
            if(s[j] == s[i] && i!=j){
                count++;
            }
        }
        if(count==0){
            return i;
        }
    }
    return -1;
}

int main(){
    string s = "aabb";

    cout << unique(s) << endl;
}