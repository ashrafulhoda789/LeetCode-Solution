#include<iostream>
#include<cmath>
using namespace std;

bool isHappy(int n) {
        
        int sum = 0;
        
        while(n!=1 && n!=4){  
            sum = 0;          
            while(n>0){
                int r = n%10;
                sum += r*r;
                n = n/10; 
            }
            n = sum;
        }
        return (n==1) ;
}

int main(){
    int num = 19;

    cout << boolalpha;
    cout << summation(num) << endl;
}