class Solution {
public:
    int countOccurrences(vector<int>& nums, int x) {
        int n = nums.size();
        int l=0,u=n-1;
        int low=-1,high=-1;
        //low
        while(l<=u)
        {
            int mid = l+(u-l)/2;
            if(nums[mid]==x)
            {
                low=mid;
                u=mid-1;

            }
            else if(nums[mid]<x)
            l=mid+1;
            else
            u=mid-1;
        }
        //high
        l=0,u=n-1;
        while(l<=u)
        {
            int mid = l+(u-l)/2;
            if(nums[mid]==x)
            {
                high=mid;
                l=mid+1;

            }
            else if(nums[mid]<x)
            l=mid+1;
            else
            u=mid-1;
        }
        if(high!=-1&&low!=-1)
        return high-low+1;
        
        return 0;
    }
    
};

tc-o(logn)
  sc-o(1)
