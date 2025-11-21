#include <iostream>
#include <cmath>
#include <bitset>
#include <format>

using namespace std;

int convertToBinary(int number)
{
    // convert the number to binary
    int binary = 0;
    int power = 0;
    while (number > 0)
    {
        int remainder = number % 2;
        number = number / 2;
        binary = (remainder * pow(10, power)) + binary;
        power++;
    }
    return binary;
}

int main()
{

    // calculate 3^5
    int base;
    int n;
    cout << "enter base & power respectively !";
    cin >> base;
    cin >> n;

    int binaryPower = format("{:b}", n);

    int ans = 1;
    int x = base;
    while (binaryPower > 0)
    {
        int lastDigit = binaryPower % 10;
        if (lastDigit == 1)
        {
            ans = ans * x;
        }
        x = x * x;
        binaryPower = binaryPower / 10;
    }

    cout << "Answer : " << ans;

    return 0;
}