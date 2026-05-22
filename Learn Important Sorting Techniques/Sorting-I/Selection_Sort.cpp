class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            int min=i;
            for(int j=i+1;j<n;j++)
            {
                if(nums[min]>nums[j])
                min=j;
            }
            int temp=nums[i];
            nums[i]=nums[min];
            nums[min]=temp;
        }
        return nums;
    }  
};

//take outer loop from 0 to n-1 coz last ele automatically sorted
//find smallest ele and bring it to the front 
