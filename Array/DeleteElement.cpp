#include <bits/stdc++.h>
using namespace std;
int delteelement(int arr[],int s,int ele){
    int i;
    for(i=0;i<s;i++){
        if(arr[i]==ele){
            break;
        }
    }
    if(i==s){
        return s;
    }
    for(int j=i;j<s-1;j++){
        arr[j]=arr[j+1];
    }
    return s-1;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int cap = 5;
    int element = 3;
    int m = delteelement(arr,cap,element);
    for(int i = 0;i<m;i++){
        cout << arr[i]<<endl;
    }
    
    
}
