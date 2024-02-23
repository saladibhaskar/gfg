from typing import List


class Solution:
     
    def maxProfit(self, n : int, l1 : List[int]) -> int:
        # code here
        ##l2 = []
        fb=float('inf')
        sb=float('inf')
        fp=0
        sp=0
        for i in l1:
            fb=min(fb,i)
            fp=max(fp,i-fb)
            sb=min(sb,i-fp)
            sp=max(sp,i-sb)
        
        return sp
        



#{ 
 # Driver Code Starts
class IntArray:
    def __init__(self) -> None:
        pass
    def Input(self,n):
        arr=[int(i) for i in input().strip().split()]#array input
        return arr
    def Print(self,arr):
        for i in arr:
            print(i,end=" ")
        print()


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        n = int(input())
        
        
        price=IntArray().Input(n)
        
        obj = Solution()
        res = obj.maxProfit(n, price)
        
        print(res)
        

# } Driver Code Ends