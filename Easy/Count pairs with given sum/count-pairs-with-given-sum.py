#User function Template for python3

class Solution:
    def getPairsCount(self, a, n, k):
        # code here
        a.sort()
        d={}
        c=0
        for i in a:
            if i in d:
                d[i]+=1
            else:
                d[i]=1
        #print(d)
        for i in range(len(a)):
            d[a[i]]-=1
            r=k-a[i]
            if(r in d):
                c+=d.get(r)
        #print(c)
        return c




#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, k = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.getPairsCount(arr, n, k)
        print(ans)
        tc -= 1

# } Driver Code Ends