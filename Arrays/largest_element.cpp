//TC O(n)
//Brute Force : Mergesort then return n-1 element so TC O(nlogn)
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int max=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(max<nums[i])
            max=nums[i];
        }
        return max;
    }
};
