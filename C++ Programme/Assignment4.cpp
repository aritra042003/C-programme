#include <iostream>
using namespace std;
void printPrime(int a, int b)
{
    int i, j;
    for (i = a; i <= b; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j == i)
            cout << ' ' << i;
    }
}

int highestValueDigit(int num)
{
    int r, max = 0;
    while (num > 0)
    {
        r = num % 10;
        num = num / 10;
        if (r > max)
            max = r;
    }
    return max;
}
int pow(int x, int y)
{
    int mul = 1;
    for (int i = 1; i <= y; i++)
    {
        mul = mul * x;
    }
    return mul;
}
void checkFibonacci(int num)
{
    int a = -1, b = 1, fibo;
    for (int i = 0; i < 100; i++)
    {
        fibo = a + b;
        if (fibo == num)
        {
            cout << "number is found at index " << i;
            break;
        }
        a = b;
        b = fibo;
    }
}
int main()
{
    // printPrime(12, 30);
    // int high = highestValueDigit(127);
    // cout << high;
    // int multiplication = pow(2, 4);
    // cout << multiplication;
    checkFibonacci(21);
}