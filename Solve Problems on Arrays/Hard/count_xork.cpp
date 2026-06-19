class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int count=0,xorr=0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            xorr = xorr^nums[i];
            int target = k^xorr;

            if(mp.find(target)!=mp.end())
            {
                count+=mp[target];
            }
            mp[xorr]++;
        }
        return count;
    }
};

tc-o(n)
  sc-o(n)
