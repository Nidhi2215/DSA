#include <iostream>
#include <vector>

const long long MOD = 1e9 + 7;

class Solution {
private:
    std::vector<int> prefix;

public:
    Solution() {
        prefix.assign(101, 1);
        prefix[0] = 0;
        prefix[1] = 0;
        for (int i = 2; i <= 100; i++) {
            if (prefix[i]) {
                for (int j = i * i; j <= 100; j += i) {
                    prefix[j] = 0;
                }
            }
        }
        for (int i = 1; i <= 100; i++) {
            prefix[i] += prefix[i - 1];
        }
    }
    long long fact(int n){
        long long result=1;
        for(int i=1; i<=n; i++){
            result*=i;
            result%=MOD;
        }
        return result;
    }
    int numPrimeArrangements(int n) {
        return (fact(prefix[n])*fact(n-prefix[n]))%MOD;
    }
};
