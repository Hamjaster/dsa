class Solution:
    def hasAlternatingBits(self, n: int) -> bool:
        number = []
       
        output = True
        while(n != 0 ):
            rem = n%2
            n = n // 2
            number.append(rem)
           
        for i in range(len(number) - 1) :
            currN = number[i]
            nextN = number[i + 1]
            if (currN == nextN) :
                output = False
                break
        return output
            

        