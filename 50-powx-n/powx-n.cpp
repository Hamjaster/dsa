
#include <bitset>

class Solution {
public:
    double myPow(double x, long long n) {
        long long binary = n;
        if(binary == 0) return 1;
        if (x==1) return 1;
        if (x==-1 && binary % 2 != 0) return -1;
        if (x==-1 && binary % 2 == 0) return 1;
        
        // handling if binary is -ve
        if ( n < 0){
            x = 1/x;
            binary = abs(n);
        }

        double ans = 1.0;
        while (binary > 0)
        {
            int lastDigit = binary % 2;
            if (lastDigit == 1)
            {
                ans = ans * x;
            }
            x = x * x;
            binary = binary / 2;
        }

        return ans;
        }
};