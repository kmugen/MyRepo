/**
 * @file main.cpp
 * @author Ho-Jae, Kim (khj199859@gmail.com)
 * @version 0.1
 * @date 2023-01-18
 */

#include <iostream>

using namespace std;

int total, T, A[5], B[5], diff[11][11] = {{ 0, 6, 2, 5, 5, 4, 5, 6, 4, 7, 6 },
                                          { 6, 0, 4, 3, 3, 4, 3, 2, 2, 1, 2 },
                                          { 2, 4, 0, 5, 3, 2, 5, 6, 2, 5, 4 },
                                          { 5, 3, 5, 0, 2, 5, 4, 3, 5, 2, 3 },
                                          { 5, 3, 3, 2, 0, 3, 2, 3, 3, 2, 1 },
                                          { 4, 4, 2, 5, 3, 0, 3, 4, 2, 3, 2 },
                                          { 5, 3, 5, 4, 2, 3, 0, 1, 3, 2, 1 },
                                          { 6, 2, 6, 3, 3, 4, 1, 0, 4, 1, 2 },
                                          { 4, 2, 2, 5, 3, 2, 3, 4, 0, 3, 2 },
                                          { 7, 1, 5, 2, 2, 3, 2, 1, 3, 0, 1 },
                                          { 6, 2, 4, 3, 1, 2, 1, 2, 2, 1, 0 }};

void Input_T(void)
{
    cin >> T;
}

void Input_AB(void)
{
    int a, b, flag_a = 1, flag_b = 1, a_i, b_i;
    cin >> a >> b;

    for (int div = 10000, i = 0; div >= 1; div /= 10, i++) {
        a_i = (a / div) % 10;
        b_i = (b / div) % 10;

        if (a_i > 0) {
            flag_a = 0;
        }
        if (b_i > 0) {
            flag_b = 0;
        }

        if (a_i == 0 && flag_a == 1) {
            A[i] = 0;
        } else {
            A[i] = a_i + 1;
        }
        if (b_i == 0 && flag_b == 1) {
            B[i] = 0;
        } else {
            B[i] = b_i + 1;
        }
        
    }
}

void Calculate()
{
    total = 0;
    for (int i = 0; i < 5; i++) {
        total += diff[A[i]][B[i]];
    }
}

void Output()
{
    cout << total << endl;
}

void Solution(void)
{
    Input_T();
    for (int i = 0; i < T; i++) {
        Input_AB();
        Calculate();
        Output();
    }
}

int main(void)
{
    Solution();

    return 0;
}