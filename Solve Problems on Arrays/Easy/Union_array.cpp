//Brute method
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        int n1=nums1.size(),n2=nums2.size();
        for(int i=0;i<n1;i++)
        {
            temp.push_back(nums1[i]);
        }
        for(int i=0;i<n2;i++)
        {
            int flag=0;
            for(int j=0;j<temp.size();j++)
            {
                if(temp[j]==nums2[i])
                flag=1;
            }
            if(flag==0)
            {
                temp.push_back(nums2[i]);
            }
        }
        int n = temp.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(temp[j]>temp[j+1])
                {
                    swap(temp[j],temp[j+1]);
                }
            }
        }
        return temp;
    }
};
