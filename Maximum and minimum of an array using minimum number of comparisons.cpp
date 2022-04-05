#include <bits/stdc++.h>
using namespace std;
void minmax(int arr[],int n){
    int min;
    int max;
    if(n==1){
        arr[0] = max;
        arr[0] = min;
    }else{
        if(arr[0]>arr[1]){
            max=arr[0];
            min=arr[1];
        }else{
            max=arr[1];
            min=arr[0];
        }
        for(int i=2;i<n-1;i++){
            if(max<arr[i]){
                max=arr[i];
            }
            if(min > arr[i]){
                min = arr[i];
            }
        }
    }
    cout << "min number is " << min <<endl;
    cout << "max number is " << max;
}
int main(){
    int arr[] = {6,7,8,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    minmax(arr,n);
    return 0;
}
