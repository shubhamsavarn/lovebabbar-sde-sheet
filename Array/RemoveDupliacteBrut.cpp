#include <bits/stdc++.h>
using namespace std;
int removeDuplicate(int arr[],int n){
    int temp[n];
    temp[0] = arr[0];
    int res= 1;
    for(int i =1;i<n;i++){
        if(temp[res-1]!= arr[i]){
            temp[res] = arr[i];
            res++;
        }
    }
    for(int i=0;res>i;i++){
        arr[i] = temp[i];
        
    }
    return res;
}
int main(){
    int arr[] = {1,1,2,2,4,4,6,7};
    int n = 8;
    cout << removeDuplicate(arr,n);
    return 0;
}
