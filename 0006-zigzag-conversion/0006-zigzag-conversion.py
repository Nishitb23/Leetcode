class Solution:
    def convert(self, s: str, numRows: int) -> str:
        
        if numRows==1:
            return s
        
        if numRows == 2:
            # slice every other character
            return s[0::2] + s[1::2]
        
        strl = []
        for i in range(numRows):
            strl.append("")
            
        movedown = True
        index = 0
        for i in range(len(s)):
            strl[index] += s[i]
            if movedown:
                index += 1
            else:
                index -= 1
            
            if index == numRows - 1:
                movedown = False
                
            if index == 0:
                movedown = True
                
        ans = "".join(strl)

            
        return ans