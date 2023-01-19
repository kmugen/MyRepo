#include <iostream>

using namespace std;

const long divider = 1000000007;

unsigned long long K, P, N;
long long result;

void Input()
{
    cin >> K >> P >> N;
    N *= 10;
}

unsigned long long Calculate(unsigned long long n)
{   
    if (n == 1) {
        return P;
    }

    unsigned long long ret;
    ret = Calculate(n / 2);
    ret = (ret * ret) % divider;

    if (n % 2 == 1) {
        ret = (ret * P) % divider;
    }

    return ret;
}

void Output()
{
    cout << K << endl;
}

void Solution()
{
    Input();
    K *= Calculate(N);
    K %= divider;
    Output();
}

int main(void)
{
    Solution();
}