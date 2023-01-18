#include <iostream>
#include <vector>

using namespace std;

vector<int> key, input;
int M, N, K;

void Input_MNK()
{
    cin >> M >> N >> K;
}

void Input_Buttons(vector<int> &vec, const int n)
{
    int button;
    for (int i = 0; i < n; i++) {
        cin >> button;
        vec.push_back(button);
    }
}

void Compare(int *find)
{
    for (int i = 0; i < N; i++) {
        if (input[i] == key[0]) {
            *find = true;
            for (int j = 0; j < M; j++) {
                if (input[i + j] != key[j]) {
                    *find = false;
                }
            }

            if (*find) {
                break;
            }
        }
    }
}

void Solution()
{
    Input_MNK();
    Input_Buttons(key, M);
    Input_Buttons(input, N);

    int find = false;
    Compare(&find);

    if (find) {
        cout << "secret" << endl;
    } else {
        cout << "normal" << endl;
    }
}
int main(void)
{
    Solution();
}