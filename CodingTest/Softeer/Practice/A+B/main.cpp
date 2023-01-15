/**
 * @file A+B.cpp
 * @author Ho-Jae, Kim (khj199859@gmail.com)
 * @version 0.1
 * @date 2023-01-15
 */

#include <iostream>

using namespace std;

long T;
int A, B, C;

void Input_T()
{
    cin >> T;
}

void Input_AB()
{
    cin >> A >> B;
}

void Output(int t)
{
    cout << "Case #" << t << ": " << C << endl; 
}

void Add()
{
    for (int i = 1; i <= T; i++) {
        Input_AB();
        C = A + B;
        Output(i);
    }
}

void Solution()
{
    Input_T();
    Add();
}

int main(void)
{
    Solution();
}