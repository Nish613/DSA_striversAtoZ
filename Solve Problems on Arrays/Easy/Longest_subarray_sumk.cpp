//Sliding window
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        int left=0,right=0,sum=nums[0],len=0;
        while(right<n)
        {
            while(left<right&&sum>k)
            {
                sum-=nums[left];
                left--;
            }
            if(sum==k)
            len=max(len,right-left+1);
            right++;
            if(right<n)
            {
                
                sum+=nums[right];
            }
        }
        return len;
    }
};


TC : O(n)
SC : O(1)
