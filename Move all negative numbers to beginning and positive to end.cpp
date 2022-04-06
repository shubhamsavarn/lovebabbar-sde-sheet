#include <bits/stdc++.h>
using namespace std;
void arrange(int arr[],int n){
    int j =0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j){
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
}
int main(){
    int arr[] = {1,-2,-3,-6,3,11,-5};
    int len = sizeof(arr)/sizeof(arr[0]);
    arrange(arr,len);
    for(int i =0;i<len;i++){
        cout << arr[i]<<" ";
    }
    return 0;
    
}
