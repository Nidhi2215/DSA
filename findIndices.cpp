class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                if((abs(j-i)>=indexDifference) && (abs(nums[j]-nums[i])>=valueDifference))
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
                    
            }
            
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};
