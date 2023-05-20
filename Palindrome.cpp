class Solution {
public:
    bool isPalindrome(int x) {
        long long int reversed = 0, remainder, original;
    original = x;
    if(x<0)
        return false;
    else{
    while (x != 0) {
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        return true;
    else
        return false;
    }
    }
};