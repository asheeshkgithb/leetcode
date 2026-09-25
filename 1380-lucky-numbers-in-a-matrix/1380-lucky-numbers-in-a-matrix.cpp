class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& a) {
        
        vector<int> ans;

        for (int i = 0; i < a.size(); i++) {
            
            int min = a[i][0];
            int col = 0;

            for (int j = 1; j < a[0].size(); j++) {
                if (a[i][j] < min) {
                    min = a[i][j];
                    col = j;
                }
            }

            bool lucky = true;

            for (int j = 0; j < a.size(); j++) {
                if (a[j][col] > min) {
                    lucky = false;
                    break;
                }
            }

            if (lucky) {
                ans.push_back(min);
            }
        }

        return ans;
    }
};