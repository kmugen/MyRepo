/**
 * @file main.cpp
 * @author Ho-Jae, Kim (khj199859@gmail.com)
 * @version 1.0
 * @date 2023-01-15
 */

#include <iostream>

using namespace std;

int N, M;
int limit[100][2], operation[100][2];

void Input_NM()
{
    cin >> N >> M;
}

void Input_arr(int arr[][2], const int n)
{
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }
}

void Solution()
{
    Input_NM();
    Input_arr(limit, N);
    Input_arr(operation, M);
}

int main(void)
{

}