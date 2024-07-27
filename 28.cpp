#include<iostream>
using namespace std;

int findIndex(string s1, string s2){
    int n1 = s1.length();
    int n2 = s2.length();

    if(n1<n2){
        return -1;
    }

    int j=0;
    for(int i=0; i<n1; i++){
        if(s1[i]==s2[j]){
            j++;
        }else{
            i=i-j;
            j=0;
        }

        if(j == n2){
            return i-n2+1;
        }
    }

    return -1;

}

int main(){
    string str1 = "leetcode";
    string str2 = "leeto";

    cout << findIndex(str1,str2) << endl;
}
