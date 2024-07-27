#include<iostream>
#include<cmath>
using namespace std;

int find(int x){

    long double r = sqrt(x);
    return floor(r);
}

int main(){
    int n = 2147395599;

    cout << find(n) << endl;
}