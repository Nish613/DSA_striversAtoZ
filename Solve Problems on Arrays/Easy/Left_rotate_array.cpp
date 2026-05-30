class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        vector<int> temp=nums;
        for(int i=0;i<k;i++)
        {
            temp[n-k+i] = nums[i];
        }
        for(int i=k;i<n;i++)
        {
            temp[i-k] = nums[i];
        }
        nums=temp;
    }
};
