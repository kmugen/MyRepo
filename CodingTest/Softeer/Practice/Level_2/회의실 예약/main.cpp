#include <iostream>
#include <string>
#include <map>
#include <array>

using namespace std;

int N, M;
map<string, array<int, 9>> m;

void Input_NM()
{
    cin >> N >> M;
}

void InitRooms()
{
    string name;
    for (int i = 0; i < N; i++) {
        cin >> name;
        m[name] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    }
}

void Reservation()
{
    string name;
    int s, t;
    for (int i = 0; i < M; i++) {
        cin >> name >> s >> t;
        for (int i = s; i < t; i++) {
            m[name][i - 9] = 1;
        }
    }
}

void Output()
{
    int q = 0;
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        cout << "Room " << itr->first << ":" << endl;
        int flag = false;
        
        int n = 0;
        
        for (int i = 0; i < 9; i++) {
            if (itr->second[i] == 1 && flag == false) {
                continue;
            }
            if (itr->second[i] == 0 && flag == false) {
                flag = true;
                n++;
            }
            if (itr->second[i] == 1 && flag == true) {
                flag = false;
            }
        }
        if (n) {
            cout << n << " available:" << endl;
        } else {
            cout << "Not available" << endl;
        }

        flag = false;
        for (int i = 0; i < 9; i++) {
            if (itr->second[i] == 1 && flag == false) {
                continue;
            }
            if (itr->second[i] == 0 && flag == false) {
                cout.width(2);
                cout.fill('0');
                cout << i + 9 << "-";
                flag = true;
                n++;
            }
            if (itr->second[i] == 1 && flag == true) {
                cout << i + 9 << endl;
                flag = false;
            }
            if (itr->second[i] == 0 && i == 8) {
                cout << i + 10 << endl;
            }
        }

        if (q < N - 1) {
            cout << "-----" << endl;
            q++;
        }

    }
}

void Solution()
{
    Input_NM();
    InitRooms();
    Reservation();
    Output();
}

int main(void)
{
    Solution();

    return 0;
}