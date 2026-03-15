class Solution {
public:

    void reverse(vector<int>& a,int s,int e)
    {
        while(s<e)
        {
            int temp = a[s];
            a[s] = a[e];
            a[e] = temp;
            s++;
            e--;
        }
    }
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        reverse(nums,0,n-1);
    }
};

here SC is O(1) instead of O(n)
