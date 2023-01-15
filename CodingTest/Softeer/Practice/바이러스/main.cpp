/**
 * @file 바이러스.cpp
 * @author Ho-Jae, Kim (khj199859@gmail.com)
 * @version 1.0
 * @date 2023-01-15
 */

#include <iostream>

using namespace std;

const long divider = 1000000007;
long K, P, N;

void Input()
{
    cin >> K >> P >> N;
}

void VirusDivision()
{
    for (int i = 0; i < N; i++) {
        K *= P;
        K %= divider;
    }
}

void Output()
{
    cout << K;
}

void Solution()
{
    Input();
    VirusDivision();
    Output();
}


int main(void)
{
    Solution();
    
    return 0;
}