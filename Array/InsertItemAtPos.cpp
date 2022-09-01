#include <bits/stdc++.h>
using namespace std;
int insert(int arr[], int n, int x, int cap, int pos)
{
	if(n == cap)
		return n;

	int idx = pos - 1;

	for(int i = n - 1; i >= idx; i--)
	{
		arr[i + 1] = arr[i];
	}

	arr[idx] = x;

	return n + 1;
} 
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    int capity = 9;
    int posi = 3;
    int ele = 11;
    size =  insert(arr,size,ele,capity,posi);
    cout << "Array after insertion"<<endl;
    for(int i =0;i<size;i++){
        cout << arr[i]<<endl;
    }
    
}
