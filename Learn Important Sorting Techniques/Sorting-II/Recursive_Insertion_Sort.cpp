class Solution {
public:

    void insertion(vector<int>& nums,int i,int n)
    {
        if(i==n)
        return;
        int key=nums[i];
        int j=i-1;
        while(j>=0&&key<nums[j])
        {
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
        insertion(nums,i+1,n);
    }
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        insertion(nums,1,n);
        return nums;
    }
};
