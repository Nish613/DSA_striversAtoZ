class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int n = nums.size();
        int ans=-1;
        int l=0,u=n-1;
        while(l<=u)
        {
            int mid = l+(u-l)/2;
            if(nums[mid]<x)
            l=mid+1;
            else if(nums[mid]>x)
            u=mid-1;
            else if(nums[mid]==x)
            {
                ans=mid;
                u=mid-1;
            }
            
        }
        return ans;

    }
};

tc-o(logn),sc-o(1)
