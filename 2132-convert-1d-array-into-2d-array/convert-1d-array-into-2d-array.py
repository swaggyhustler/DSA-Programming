class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        arr=[]
        if m*n==len(original):
              for i in range(m):
                l=[]
                for j in range(n):
                   l.append(original.pop(0))
                arr.append(l) 
        return arr