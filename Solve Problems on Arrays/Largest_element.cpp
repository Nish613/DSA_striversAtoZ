class Solution {
public:
    int largestElement(vector<int>& nums) {
        int n = nums.size();
        int max=nums[0];
        for(int i=0;i<n;i++)
        {
            if(max<nums[i])
            max=nums[i];
        }
        return max;
    }
};
