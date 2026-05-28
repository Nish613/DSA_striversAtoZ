class Solution {
public:
    void quick(vector<int>& nums,int l,int h)
    {
        if(l>=h)
        return;
        int pivot=nums[l];
        int i=l,j=h;
        while(i<j){ 
        while(nums[i]<=pivot&&i<h)
        i++;
        while(nums[j]>=pivot&&j>l)
        j--;
        if(i<j)
        swap(nums[i],nums[j]);
        }
        swap(nums[l],nums[j]);
        quick(nums,l,j-1);
        quick(nums,j+1,h);
    }
    vector<int> quickSort(vector<int>& nums) {
        int n = nums.size();
        quick(nums,0,n-1);
        return nums;
    }
};
