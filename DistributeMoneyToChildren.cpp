class Solution {
public:
    int distMoney(int money, int children) {
        if(money<children)
        return -1;
        int ans=0;
        money-=children; //we have distributed 1 dollar to each child
        if(children>=money/7)
        {
            ans+=(money/7);
            money%=7;
        }
        else{
            ans+=children;

        }
        if(money==3 && (children-ans == 1)) ans--;
        if((children-ans == 0) && money>0) ans--;
        return ans;
        
    }
};
