#include <iostream>
#include <string>

using namespace std;

int gears[8];
string s;

void Input()
{
    for (int i = 0; i < 8; i++) {
        cin >> gears[i];
    }
}

void Check()
{
    if (gears[0] == 1) {
        s = "ascending";
        for (int i = 1; i < 8; i++) {
            if (gears[i] != gears[i - 1] + 1) {
                s = "mixed";
            }
        }
    } else if (gears[0] == 8) {
        s = "descending";
        for (int i = 1; i < 8; i++) {
            if (gears[i] != gears[i - 1] - 1) {
                s = "mixed";
            }
        }
    } else {
        s = "mixed";
    }
}

void Output()
{
    cout << s << endl;
}

void Solution()
{
    Input();
    Check();
    Output();
}

int main(void)
{
    Solution();
}