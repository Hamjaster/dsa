class Solution:
    def hasAlternatingBits(self, n: int) -> bool:
        if n%2==0:
            b=0
            for i in range(1,33,2):
                b+=2**i
                if b>n:
                    return False
                elif b==n:
                    return True 
                else:
                    pass
        else:
            b=0
            for i in range(0,33,2):
                b+=2**i
                if b>n:
                    return False
                elif b==n:
                    return True 
                else:
                    pass
            

            
