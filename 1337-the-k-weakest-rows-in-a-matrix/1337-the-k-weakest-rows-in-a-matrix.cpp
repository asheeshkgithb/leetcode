class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> arr;

        for(int i = 0; i < mat.size(); i++) 
        {
            int count = 0;
            for(int j = 0;j<mat[i].size();j++) 
            {
                if(mat[i][j]==1)
                    count++;
            }
            arr.push_back({count,i});
        }
        sort(arr.begin(),arr.end());
       vector<int> ans;
        for(int i = 0;i<k;i++) {
            ans.push_back(arr[i].second);
        }
       return ans;
    }
};