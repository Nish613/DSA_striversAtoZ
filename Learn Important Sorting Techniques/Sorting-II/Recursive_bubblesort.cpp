class Solution {
public:

    void bubble2(vector<int>&nums,int i,int j,int n)
    {
        if(j==n-i-1)
        return;
        if(nums[j]>nums[j+1])
        {
            int temp = nums[j];
            nums[j]=nums[j+1];
            nums[j+1]=temp;
        }
        bubble2(nums,i,j+1,n);
    }
    void bubble1(vector<int>&nums,int i,int n)
    {
        if(i==n-1)
        return;
        bubble2(nums,i,0,n);
        bubble1(nums,i+1,n);
    }
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        bubble1(nums,0,n);
        return nums;
    }
};
