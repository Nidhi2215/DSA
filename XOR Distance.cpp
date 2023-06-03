def func(n,k,a):
    ans = 0
    for idx1 in range(len(a)):
        for idx2 in range(idx1+1,len(a)):
            x,y=a[idx1]
            i,j=a[idx2]
            
            s=(x^i)+(y^j)
            if s == k:
                ans+=1
    return ans
