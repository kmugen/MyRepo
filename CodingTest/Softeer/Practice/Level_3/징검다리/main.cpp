#include <iostream>

using namespace std;

long N, rocks[3000], DP[3000];

void Input_N()
{
    cin >> N;
}

void Input_rocks()
{
    for (int i = 0; i < N; i++) {
        cin >> rocks[i];
    }
}

void DynamicProgramming()
{
    DP[0] = 1;
    for (int i = 1; i < N; i++) {
        int maxx = 0;
        for (int j = 0; j < i; j++) {
            if (rocks[j] < rocks[i] && DP[j] > maxx) {
                maxx = DP[j];
            }
        }
        DP[i] = maxx + 1;
    }
}

void FindMax(int *maxx)
{
    for (int i = 0; i < N; i++) {
        if (*maxx < DP[i]) {
            *maxx = DP[i];
        }
    }
}

void Output(int *maxx)
{
    cout << *maxx << endl;
}

void Solution()
{
    Input_N();
    Input_rocks();
    DynamicProgramming();

    int maxx = 0;
    FindMax(&maxx);
    Output(&maxx);
}

int main(void)
{
    Solution();
}