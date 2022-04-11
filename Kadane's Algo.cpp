#include <bits/stdc++.h>
using namespace std;
int maxsum(int arr[],int n){
    int sum = 0;
    int maxsum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        if(sum > maxsum){
            maxsum = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return maxsum;
}
int main(){
    int arr[] = {4,1,-4,2,5,12,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxsum(arr,n);
    return 0;
}
