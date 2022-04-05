#include <bits/stdc++.h>
using namespace std;
class Main{
    public:
    static int findKelement(int arr[],int f,int l,int k){ //f=first,l=last,k=smallest integer
        sort(arr,arr+l);
        if(l>f)
        int ans = arr[k-1];
        return ans;
    }
};
int main(){
    Main sc;
    int arr[] = {3,2,4,1,7,8,0};
    int f = 0;
    int l = sizeof(arr)/sizeof(arr[0]) - 1;
    int k = 3;
    cout << sc.findKelement(arr,f,l,k);
    return 0;
}
