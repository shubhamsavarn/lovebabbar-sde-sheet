int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int,int> m;
        int frq = 0;
        int ans = 0;
        for(int i =0 ;i<n;i++){
            m[arr[i]]++;
            frq = max(frq,m[arr[i]]); 
        }
        for(int i =0;i<n;i++){
            if(frq == m[arr[i]]){
                ans = arr[i];
                break;
            }
        }
        // Write your code here
    return ans;
    //Write your code here
}
