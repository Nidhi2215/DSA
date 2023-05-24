class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])==m.end())
            m[nums[i]]=1;
            else
            m[nums[i]]++;
        }
        for(auto &x:m)
        {
            if(x.second==1)
            return x.first;

        }
        return -1;
    }
};
