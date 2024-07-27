#include<iostream>
#include<vector>
using namespace std;

int peakIndex(vector<int> arr){
    int n = arr.size();

    int start = 0;
    int end = n - 1;

    while(start<end){
        int mid = start + (end-start)/2;

        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }else{
            end = mid;
        }
    }
    return start;
}

int main(){
    vector<int> arr = {0,10,5,2};

    cout << peakIndex(arr) << endl;
}