#include <bits/stdc++.h>
using namespace std;
bool arraysorted(int arr[],int n){
    bool val = false;
    for(int i =0;i<n;i++){
        if(arr[i]<arr[i+1]){
            val = true;
        }else{
            val = false;
            break;
        }
    }
    return val;
}
int main(){
    int arr[] = {1,2,3,4,55,666};
    int n = 6;
    cout << arraysorted(arr,n);
    return 0;
}
