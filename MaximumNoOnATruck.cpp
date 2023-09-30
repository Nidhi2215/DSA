class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans = 0;
        vector<int> res;

        // Sort boxTypes by the number of units per box in descending order
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] > b[1];
        });

        for (int i = 0; i < boxTypes.size() && truckSize > 0; i++) {
            int numBoxes = min(truckSize, boxTypes[i][0]);
            ans += numBoxes * boxTypes[i][1];
            truckSize -= numBoxes;
        }

        return ans;
    }
};
