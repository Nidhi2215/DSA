class Solution {
public:
    vector<bool>genPrimes(int n)
    {
        vector<bool>prime(n+1);
        if(n>1)
        fill(prime.begin()+2,prime.end(),true);
        for(int i=2;i<=n;i++)
        {
            if(prime[i])
            {
                for(int j=i+i;j<=n;j+=i)
                {
                    prime[j]=false;
                }
            }
        }
        return prime;
    }
    long long countPaths(int n, vector<vector<int>>& edges) {
        auto isPrime=genPrimes(n);
        vector<vector<int>>E(n);//creating an adjacenecy list for the graph
        for(int i=0;i<n-1;i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            --u;
            --v;
            E[u].push_back(v);
            E[v].push_back(u);
        }
        long long ans=0;
        function<array<int, 2>(int, int)> dfs = [&](int x, int p) 
        {
            int prime=isPrime[x+1];
            array<int,2>curr={};
            curr[prime]++;
            for(int y:E[x])
            {
                if(y==p)
                continue;
                auto v=dfs(y,x);
                ans += (long long)v[0] * curr[1];
                ans += (long long)v[1] * curr[0];
                
                curr[prime] += v[0];
                if (!prime) curr[1 + prime] += v[1]; // If non-prime, update the count for non-prime nodes
            }
            return curr;

        };

        dfs(0,-1);
        return ans;
    }
};
