class Solution {
public:
    bool isValid(string s) {
        // int len=strlen(s);
        // if(len%2!=0)
        // return false;
        stack<char> stk;  // STl stack
        char x;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                stk.push(s[i]);
                continue; 
            }

        
        if(stk.empty())
        {
            return false;
        }
        switch(s[i])
        {
            case ')': 
               x=stk.top();
               stk.pop();
               if(x== '{'|| x=='[')
               {
                   return false;
               }
            break;
            case ']':
            x=stk.top();
            stk.pop();
            if(x== '{'|| x=='(')
            {
                   return false;
            }
            break;
            case '}':
            x=stk.top();
            stk.pop();
            if(x== '['|| x=='(')
            {
                   return false;
            }
            break;

        }
        }
        return (stk.empty());

        

    }
};