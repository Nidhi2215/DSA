class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        sort(nums.begin(),nums.end());
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        if(nums[0]==0)
        return s.size()-1;
        else
        return s.size();
        

    }
};
