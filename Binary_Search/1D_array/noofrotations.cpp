class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int n = nums.size(),mini=0;
        int l = 0,u=n-1;
        while(l<=u)
        {
            int mid = l+(u-l)/2;
            if(nums[l]<=nums[mid])
            {
                if(min(nums[l],nums[mini])==nums[l])
                mini = l;
                l=mid+1;
            }
            else
            {
                if(min(nums[mid],nums[mini])==nums[mid])
                mini=mid;
                u=mid-1;
            }
        }
        
        return mini;
    }
};

tc-o(logn)
  sc-o(1)
