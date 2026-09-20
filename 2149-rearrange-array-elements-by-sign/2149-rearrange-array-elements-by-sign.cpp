class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    { 
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) 
        {
            if(nums[i] > 0)
                ans.push_back(nums[i]);
        }
        int j = 0;

        for(int i = 0; i < nums.size(); i++) 
        {
            if(nums[i] < 0) {
                ans.insert(ans.begin() + j + 1, nums[i]);
                j += 2;
            }
        }
        return ans;
    }
};