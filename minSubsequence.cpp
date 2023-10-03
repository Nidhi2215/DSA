class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum = 0, temp = 0; 
        sort(nums.begin(), nums.end()); 
        vector<int> res; 
        int k = nums.size()-1; 
        for(int i=0; i<nums.size(); i++) 
        sum += nums[i]; 
        while(temp <= sum - temp) 
        {
            temp += nums[k];  
            res.push_back(nums[k]); k--;
        }
        return res; 
        
    }
};
