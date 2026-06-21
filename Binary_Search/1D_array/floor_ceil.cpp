class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n = nums.size();
        vector<int> ans;
        int l=0,u=n-1;
        int floorv=-1,ceilv=-1;
        while(l<=u)
        {
            int mid=l+(u-l)/2;
            if(nums[mid]<x)
            {
                floorv=nums[mid];
                l=mid+1;
            }
            
            else if(nums[mid]>x)
            {
                ceilv=nums[mid];
                u=mid-1;
            }
            else if(nums[mid]==x)
            {
                ans.push_back(x);
                ans.push_back(x);
                return ans;
            }
        }
        ans.push_back(floorv);
        ans.push_back(ceilv);
        return ans;
    }
};

tc-o(logn)
  sc-o(1)
