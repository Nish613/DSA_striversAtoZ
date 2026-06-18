class Solution {
  public:
    int maxLen(vector<int>& arr) {
        unordered_map<int,int> mp;
        int sum=0,maxi=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum==0)
            {
                maxi=i+1;
            }
            if(mp.find(sum)!=mp.end())
            maxi=max(maxi,i-mp[sum]);
            else
            mp[sum]=i;
        }
        return maxi;
    }
};

tc-o(n),sc-o(n)
