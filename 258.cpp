#include<iostream>
using namespace std;

int check(int num){

    while(num>10){
        int sum = 0;
        while(num!=0){
            int r = num%10;
            sum += r;

            num = num/10;
        }
        num = sum;
    }
    return num;
}

int main(){
    int num = 38;

    cout << check(num) << endl;
}
