class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int n = nums.size();
        int max1=nums[0];
        int max2=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(max1<nums[i])
            {
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>max2&&nums[i]<max1)
            {
                max2=nums[i];
            }
        }
        return max2;
    }
};
