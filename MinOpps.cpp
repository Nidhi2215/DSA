class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
        // sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
            {
                while(nums[i]<=nums[i-1])
                {
                    count++;
                    nums[i]++;
                }
            }


        }
        return count;
    }
};
