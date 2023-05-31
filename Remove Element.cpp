class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start=0,end=nums.size()-1,count=0;
        while(start<=end)
        {
            if(nums.at(start)!=val)
            {
                start++;
                continue;
            }
            if(nums.at(end)==val)
            {
                end--;
                continue;
            }
            nums.at(start)=nums.at(end);
            start++;
            end--;
            count++;
        }
    return start;
    }
};
