class Solution {
public:
    int subtractProductAndSum(int n) {
        int num=n;
        int p,l;
        int sum=0,pro=1;
        while(n)
        {   p=n%10;
            l=n%10;
            sum=p+sum;
            pro=pro*l;
            n=n/10;

        }
        int res=pro-sum;
        return res;
    }
};
