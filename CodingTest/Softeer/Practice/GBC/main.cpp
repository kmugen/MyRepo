/**
 * @file main.cpp
 * @author Ho-Jae, Kim (khj199859@gmail.com)
 * @version 1.0
 * @date 2023-01-15
 */

#include <iostream>

using namespace std;

int N, M, limit[100], operation[100];

void Input_NM()
{
    cin >> N >> M;
}

void Input_Array(int *arr, int n)
{
    int length, velocity, index = 0;

    for (int i = 0; i < n; i++) {
        cin >> length >> velocity;
        for (int j = 0; j < length; j++) {
            arr[index] = velocity;
            index++;
        }
    }
}

void Calculate(int *max)
{
    *max = 0;
    for (int i = 0; i < 100; i++) {
        if (*max < operation[i] - limit[i]) {
            *max = operation[i] - limit[i];
        }
    }
}

void Output(int *max)
{
    cout << *max << endl;
}

void Solution()
{   
    Input_NM();
    Input_Array(limit, N);
    Input_Array(operation, M);

    int max;
    Calculate(&max);

    Output(&max);
}

int main(void)
{
    Solution();

    return 0;
}