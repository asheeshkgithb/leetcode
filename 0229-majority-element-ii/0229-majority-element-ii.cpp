class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int a=0,b=0;
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==a && count1>0){
                count1++;
            }
            else if(nums[i]==b && count2>0){
                count2++;
            }
            else if(count1==0){
                a=nums[i];
                count1=1;
            }
            else if(count2==0){
                b=nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=0;
        count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==a)
            count1++;
            else if (nums[i]==b)
            count2++;
        }
        vector<int>ans;
        if(count1>n/3)
        ans.push_back(a);
        if(count2>n/3)
        ans.push_back(b);
        return ans;
    }
};