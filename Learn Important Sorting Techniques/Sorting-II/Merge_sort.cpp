class Solution {
public:
    void merge(vector<int>&nums,int l,int mid,int h)
    {
        vector<int> temp;
        int left=l;
        int right=mid+1;
       
        while(left<=mid&&right<=h)
        {
            if(nums[left]<=nums[right])
            {
                temp.push_back(nums[left]);
                left++;
            }
            else
            {
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid)
        {
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=h)
        {
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=l;i<=h;i++)
        {
            nums[i] = temp[i-l];
        }
    }
    void mergesort(vector<int>&nums,int l,int h)
    {
        if(l>=h)
        return;
        int mid=(l+h)/2;
        mergesort(nums,l,mid);
        mergesort(nums,mid+1,h);
        merge(nums,l,mid,h);
    }
    vector<int> mergeSort(vector<int>& nums) {
        int n = nums.size();
        mergesort(nums,0,n-1);
        return nums;
    }
};

