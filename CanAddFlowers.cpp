class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        if(n==0)
        return true;
        int m=arr.size();
        if(m==1 && n==1 && arr[0]==0)
        return true;
        for(int i=0;i<arr.size();i++)
        {
            if(i==0)
            {
                if(arr[0]==0 && m>1 && arr[1]==0 &&arr[1]==0)
                {
                    arr[0]=1;
                    n--;
                }
            }
            else if(i==arr.size()-1)
            {
                if(arr[i]==0 && m>1 && arr[i-1]==0){
                    arr[i]=1;
                    n--;
                }
            }
            else{
                if(arr[i]==0 && arr[i-1]==0 && arr[i+1]==0){
                    arr[i]=1;
                    n--;
                }
            }
            if(n==0)return true;
        }
        return false;
    }
};
