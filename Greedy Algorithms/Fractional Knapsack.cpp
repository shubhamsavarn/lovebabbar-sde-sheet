#include <bits/stdc++.h>
using namespace std;
bool cmp(pair <int,int> a,pair <int,int> b){
    double c1 = (double)a.second/a.first;
    double c2 = (double)b.second/b.first;
    return c1>c2;
}
int knapsack(pair <int,int> a[],int w,int n){
    sort(a,a+n,cmp);
    int res = 0;
    for(int i =0;i<n;i++){
        if(a[i].second) =< w){
            res = res + a[i].second;
            w = w - a[i].first;
        }else{
            res = res + (a[i].second * (double)w/a[i].first);
        }
    }
    return res;
}
int main(){
    pair <int,int> array[] = {make_pair(50,600),{make_pair(20,500),make_pair(30,400)};
    int w = 70;
    int n = 3;
    cout << knapsack(array,w,n);
    return 0;
}
