#include <bits/stdc++.h>
using namespace std;
bool cmp(pair <int, int> a, pair <int, int> b){
    return (a.second < b.second);
}
int maxArray(pair <int,int> a[],int n){
    sort(a, a + n, cmp);
    int prev = 0;
    int res = 1;
    for(int curr = 1;curr<n;curr++){
        if(a[curr].first >= a[prev].second){
          res++;
          prev = curr;
        }
    }
    return res;
}
int main(){
    pair <int,int> array[] = {make_pair(12, 25), make_pair(10, 20), make_pair(20, 30)};
    int n = 3;
    cout << maxArray(array,n);
    return 0;
}
