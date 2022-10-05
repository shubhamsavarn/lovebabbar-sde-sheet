#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){
    int high = n-1;
    int low = 0;
    while(high> low){
        int temp = arr[high];
        arr[high] = arr[low];
        arr[low] = temp;
        high--;
        low++;
    }
}
void print(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout << arr[i]<<endl;
    }
}
int main(){
    int arr[] = {2,3,4,5,6};
    int n = 5;
    reverse(arr,n);
    print(arr,n);
    
    
}
