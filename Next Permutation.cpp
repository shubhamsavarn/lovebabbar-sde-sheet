class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        int idx = -1;//taking idx is negative firstly
        for(int i=N-1;i>0;i--){//iterate the array from right
            if(arr[i]>arr[i-1]){//compare the last and second last index
                idx = i;//idx is updated with index number
                break;//we break the loop
            }
        }
        if(idx == -1){//array is already sorted in reverse order
            sort(arr.begin(),arr.end());//ascending order
        }else{
            int prev = idx;
            for(int i = idx+1;i<N;i++){
                if(arr[i]<=arr[prev] and arr[i]>arr[idx-1]){
                    prev = i;
                }
            }
            swap(arr[idx-1],arr[prev]);
            reverse(arr.begin()+idx,arr.end());
        }
        return arr;
        // code here
    }
};
