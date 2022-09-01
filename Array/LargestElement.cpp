#include <bits/stdc++.h>
using namespace std;
int largestelement(int arr[],int s){
    int i = 0;
    int max = arr[i];
    for(i = 1;i<s;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        
    }
    return max;
    
}
int main(){
    int arr[] = {1,2,3,4,5,9,6};
    int s = 7;
    int m = largestelement(arr,s);
    cout <<  m;
    
    
}
