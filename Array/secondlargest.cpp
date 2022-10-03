#include <bits/stdc++.h>
using namespace std;
int largest(int arr[],int n){
    int max = 0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int second(int arr[],int n){
    int sec = largest(arr,n);
    int res = -1;
    for(int i = 0;i<n;i++){
        if(arr[i] != sec){
            if(res == -1){
                res = arr[i];
            }
            if(arr[i] > res){
                res = arr[i];
            }
        }
    }
    return res;
}
int main(){
    int arr[] = {2,3,1,45,16,7};
    int n = 6;
    cout << second(arr,n);
    return 0;
}
