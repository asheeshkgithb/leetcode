class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int hight = nums.size()-1;
        while (low <= hight) 
        {
            int mid = low+ (hight - low)/2;
            if (nums[mid]==target) 
            {
              return mid;
            }
            if (nums[low]<=nums[mid]) 
            {
                if (nums[low]<=target && target<nums[mid]) {
                    hight = mid-1;
                }
                else {
                    low = mid+1;
                }
            }
            else {
                if (nums[mid]<target && target<=nums[hight]) 
                {
                    low = mid+1;
                }
                else {
                    hight = mid-1;
                }
            }
        }

        return -1;
    }
};