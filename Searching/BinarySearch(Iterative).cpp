#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    while(high > low){
        int mid = (high+low)/2;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid] > x){
            high = mid-1;
        }else{
            low = mid + 1;
        }
        
    }
    
};
int main(){
    int arr[] = {1,2,4,7,88,99,100};
    int n = 7;
    int x = 88;
    cout << binarysearch(arr,n,x);
    return 0;
    
}
