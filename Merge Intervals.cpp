class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
            if(v.empty()){
                v.push_back(intervals[i]);
            }else{
                
                vector<int>&v1 = v.back();
                int y = v1[1];
                if(intervals[i][0] <= y){
                    v1[1] = max(y,intervals[i][1]);
                }else{
                    v.push_back(intervals[i]);
                }
                 
            }
            
        }
        return v;
    }
};
