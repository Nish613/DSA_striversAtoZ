class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0,u=n-1;
        while(l<=u)
        {
            int mid = l+(u-l)/2;
            if(nums[mid]==target)
            return true;

            if(nums[mid]==nums[l]&&nums[mid]==nums[u])
            {
                l++;
                u--;

            }
            
            else if(nums[mid]>=nums[l])
            {
                if(target>=nums[l]&&target<nums[mid])
                {
                    u=mid-1;
                }
                else
                l=mid+1;
            }
            else if(nums[mid]<=nums[u])
            {
                if(target<=nums[u]&&target>nums[mid])
                {
                    l=mid+1;
                }
                else
                u=mid-1;
            }
        }
        return false;
    }
};

Time Complexity: O(logN) for the best and average case. O(N/2) for the worst case. Here, N = size of the given array.
Space Complexity: O(1), no extra space used
