//Brute
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=1,sum=nums[0];
        vector<int> temp;
        int n = nums.size();

        while(j<n)
        {
            if(nums[i]+nums[j]==target)
            {
                temp.push_back(i);
                temp.push_back(j);
                break;
            }
            j++;
            if(j==n-1)
            {
                i++;
                j=0;
            }
        }
        return temp;
    }
};


//Optimal(Hashmap)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int rem = target-nums[i];
            if(mp.find(rem)!=mp.end())
            return {mp[rem],i};
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};

TC:O(n)
SC:O(n)
