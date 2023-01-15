/**
 * @file 근무시간.cpp
 * @author Ho-Jae, Kim (khj199859@gmail.com)
 * @version 1.0
 * @date 2023-01-15
 */

#include <iostream>
#include <string>

using namespace std;

string come, leave;
int HH_come, MM_come, HH_leave, MM_leave, total_work = 0;

void Input()
{
    cin >> come >> leave;
}

void String2Int(const string s, int& n1, int& n2)
{
    n1 = stoi(s.substr(0, 2));
    n2 = stoi(s.substr(3, 2));
}

void Output()
{
    cout << total_work << endl;
}

void Solution()
{
    for (int i = 0; i < 5; i++) {
        Input();
        String2Int(come, HH_come, MM_come);
        String2Int(leave, HH_leave, MM_leave);
        MM_come += (HH_come * 60);
        MM_leave += (HH_leave * 60);
        total_work += (MM_leave - MM_come);
    }
    Output();
}

int main(void)
{
    Solution();
}