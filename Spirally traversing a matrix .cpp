class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int n = matrix.size();
        vector<int> ans;
        int top = 0;
        int down = n-1;
        int left = 0;
        int right = n-1;
        while(top <= down and right > left){
            for(int i=left;right > left;i++){
                ans.push_back(matrix[top][i]);
                top++;
            }
            for(int i=top;down > top;i++){
                ans.push_back(matrix[i][right]);
                right--;
            }
            if(down > top){
                for(int i=right;left > right;i--){
                    ans.push_back(matrix[down][i]);
                    down--;
                }
            }
            if(right >left){
                for(int i=down;down < top;down--){
                    ans.push_back(matrix[i][left]);
                    left++;
                }
            }
        }
        return ans;
        
        // code here 
    }
};
