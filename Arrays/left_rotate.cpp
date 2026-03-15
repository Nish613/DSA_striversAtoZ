class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        k=k%nums.size();
        int temp[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            temp[i] = nums[i];
        }
        for(int i=0;i<k;i++)
        {
            nums[nums.size()-k+i]=temp[i];
        }
        for(int i=k;i<nums.size();i++)
        {
            nums[i-k] = temp[i];
        }
    }
};
