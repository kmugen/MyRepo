#include <iostream>
#include <cmath>

using namespace std;

long N;

void Input()
{
    cin >> N;
}

void Calculate()
{
    N = pow(1 + pow(2, N), 2.0);
}

void Output()
{
    cout << N << endl;
}

void Solution()
{
    Input();
    Calculate();
    Output();
}

int main(void)
{
    Solution();
}