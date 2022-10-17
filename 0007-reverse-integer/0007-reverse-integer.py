class Solution:
    def reverse(self, x: int) -> int:
        sign = 1
        if x<0:
            sign = -1
            x *= -1
            
        l = list(str(x))
        l = l[::-1]
        st = "".join(l)
        x= int(st)
        
        if x > ((2**31)-1) or x < (-(2**31)):
            return 0
        else:
            return x*sign
        
        
        
        