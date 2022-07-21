#include <bits/stdc++.h>
using namespace std;
bool cmp(pair <int,int> a,pair <int,int> b){
    double c1 = (double)a.second/a.first;
    double c2 = (double)b.second/b.first;
    return c1>c2;
}
int knapsack(pair <int,int> a[],int w,int n){
    sort(a,a+n,cmp);
    double res = 0.0;
    for(int i =0;i<n;i++){
        if(a[i].first <= w){
            res = res + a[i].second;
            w = w - a[i].first;
        }else{
            res = res + a[i].second * ((double)w/a[i].first);
            break;
        }
    }
    return res;
}
int main(){
    pair <int, int> arr[] = {make_pair(30,120),make_pair(20,100),make_pair(10,60)};
    int w = 50;
    int n = 3;
    cout << knapsack(arr,w,n);
    return 0;
}
