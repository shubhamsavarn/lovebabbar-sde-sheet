#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int low,int high,int x){
    if(high < low){
        return 0;
    }else{
        int mid = (low+high)/2;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid] > x){
            binarysearch(arr,n,0,mid-1,x);
        }else{
            binarysearch(arr,n,mid+1,high,x);
        }
    }
};
int main(){
    int arr[] = {1,3,5,7,9,10};
    int n = 6;
    int low = 0;
    int high = n-1;
    cout << binarysearch(arr,n,low,high,9);
    return 0;
}
