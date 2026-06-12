//Brute force
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        nums.sort(nums.begin(),nums.end());
        int len=0,maxi=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==nums[i]-1)
            len++;
            else 
            {
                maxi=max(len,maxi);
                len=0;
            }
        }
        return maxi;
    }
};

//optimal
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int maxi=0;
        for(int num:st)
        {
            if(st.find(num-1)==st.end())
            {
                int curr=num;
                int len=1;
            
            while(st.find(curr+1)!=st.end())
            {
                curr++;
                len++;
            }
            maxi=max(maxi,len);
            }

            
        }
        return maxi;
    }
};

tc-o(n),sc-o(n)
