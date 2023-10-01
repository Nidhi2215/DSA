class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans = 0;
        long long maximum = 0;
        for (int i = 0; i <= nums.size() - 3; i++) {
            for (int j = i + 1; j <= nums.size() - 2; j++) {
                for (int k = j + 1; k <= nums.size() - 1; k++) {
                    ans = (long long)(nums[i] - nums[j]) * nums[k];
                    maximum = max(ans, maximum);
                }
            }
        }
        return maximum;
    }
};
