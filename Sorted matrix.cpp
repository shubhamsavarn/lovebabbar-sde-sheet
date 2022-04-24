class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<int> v;
        for(int i = 0; i < N; i++){
           for(int j = 0; j < N; j++){
               v.push_back(Mat[i][j]);
           }
        // code here
        }
        sort(v.begin(),v.end());
        int c = 0;
        for(int i=0;i<Mat.size();i++)
        {
            for(int j=0;j<Mat.size();j++)
            {
                Mat[i][j]=v[c];
                c++;
            }
        }
        return Mat;
    }
};
