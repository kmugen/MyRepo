/**
 * @file main.cpp
 * @author Ho-Jae, Kim (khj199859@gmail.com)
 * @version 1.0
 * @date 2023-01-15
 */

#include <iostream>

using namespace std;

int A, B;

void Input()
{
    cin >> A >> B;
}

void Output(const char *s)
{
    cout << s << endl;
}

void Solution()
{
    Input();
    if (A > B) {
        Output("A");
    } else if (A < B) {
        Output("B");
    } else {
        Output("same");
    }
}

int main(void)
{
    Solution();
}