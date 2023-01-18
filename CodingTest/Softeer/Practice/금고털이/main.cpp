#include <iostream>
#include <map>
#include <vector>

using namespace std;

int N, W;
long total = 0;
map<int, int> m;

void Input_NW()
{
    cin >> W >> N;
}

void Input_array()
{
    int M, P;
    for (int i = 0; i < N; i++) {
        cin >> M >> P;
        m[P] += M;
    }
}

void Calculate()
{
    for (auto ritr = m.rbegin(); ritr != m.rend(); ritr++) {
        if (ritr->second >= W) {
            total += ritr->first * W;
            W = 0;
        } else {
            total += ritr->first * ritr->second;
            W -= ritr->second;
        }
    }
}

void Output()
{
    cout << total << endl;
}

void Solution()
{
    Input_NW();
    Input_array();
    Calculate();
    Output();
}

int main(void)
{
    Solution();
} 