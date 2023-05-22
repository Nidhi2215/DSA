class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        int t;
        stack<int>s;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="C")
            {
                s.pop();
            }
            else if(operations[i]=="D")
            {
                int m=s.top();
                s.push(2*m);
            }
            else if(operations[i]=="+")
            {
                int m=s.top();
                s.pop();
                int n=s.top();
                s.push(m);
                s.push(m+n);
            }
            else
            {
                t=stoi(operations[i]);
                s.push(t);
            }
        }
        while(!s.empty())
        {
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};