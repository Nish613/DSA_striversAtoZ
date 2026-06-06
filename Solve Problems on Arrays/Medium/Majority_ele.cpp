//Brute force
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(nums[i]==nums[j])
                count++;

            }
            if(count>n/2)
            return nums[i];
        }
        return -1;
    }
};

tc-o(n2),sc-o(1)

//Better
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>n/2)
            return nums[i];
        }
        return -1;
    }
};

tc-o(n),sc-o(n)

//Optimal
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count=0,candidate=0;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            candidate=nums[i];
            if(nums[i]==candidate)
            count++;
            else
            count--;
        }
        return candidate;
    }
};

tc-o(n),sc-o(1)
