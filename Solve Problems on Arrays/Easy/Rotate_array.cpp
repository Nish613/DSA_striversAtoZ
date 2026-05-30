class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        vector<int> temp = nums;
        for(int i=0;i<k;i++)
        {
            temp[i]=nums[n-k+i];
        }
        for(int i=k;i<n;i++)
        {
            temp[i] = nums[i-k];
        }
        nums=temp;
    }
};


//Optimal approach
class Solution {
public:

    void rec(vector<int>& nums, int l,int h,int k)
    {
        while(l<h)
        {
            int temp=nums[l];
            nums[l]=nums[h-1];
            nums[h-1]=temp;
            l++;
            h--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        rec(nums,0,n,k);
        rec(nums,0,k,k);
        rec(nums,k,n,k);
        
    }
};
