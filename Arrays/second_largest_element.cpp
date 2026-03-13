//TC : O(n)
//max1 is largest ele and max2 is 2nd largest ele

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int max1 = nums[0],max2=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max1)
            {
                max2=max1;
                max1=nums[i];
                
            }
            else 
            {
                if(nums[i]>max2&&nums[i]<max1)
                max2=nums[i];
            }
        }
        return max2;
    }
};
