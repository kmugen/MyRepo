#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int size_map;
string map[27];
int visit[27][27];

void Input()
{
  cin >> size_map;
  map[0] = string(size_map + 2, '0');
  for (int i = 1; i < size_map + 1; i++) {
    string s;
    cin >> s;
    map[i] = "0" + s + "0";
  }
  map[size_map + 1] = string(size_map + 2, '0');
}

void InitVisit()
{
  for (int i = 0; i < size_map + 2; i++) {
    for (int j = 0; j < size_map + 2; j++) {
      if (i == 0 || i == size_map + 1 || j == 0 || j == size_map + 1) {
        visit[i][j] = 1;
      } else {
        visit[i][j] = 0;
      }
    }
  }
}

void DFS(int row, int col, int& cnt) {
  if (map[row][col] == '0') {
    return;
  }
  if (visit[row][col] == 1) {
    return;
  }
  cnt++;
  visit[row][col] = 1;

  int dr[4] = { -1, 1, 0, 0 }, dc[4] = { 0, 0, -1, 1 };
  int next_row, next_col;
  for (int i = 0; i < 4; i++) {
    next_row = row + dr[i], next_col = col + dc[i];
    DFS(next_row, next_col, cnt);
  }
}

void FindBlock() {
  vector<int> blocks;
  for (int i = 1; i < size_map + 1; i++) {
    for (int j = 1; j < size_map + 1; j++) {
      if (map[i][j] == '1' && visit[i][j] == 0) {
        int cnt = 0;
        DFS(i, j, cnt);
        blocks.push_back(cnt);
      }
    }
  }
  sort(blocks.begin(), blocks.end());
  cout << blocks.size() << endl;
  for (auto b : blocks) {
    cout << b << endl;
  }
}

void Solution()
{
    Input();
    InitVisit();
    FindBlock();
}

int main(void)
{
  Solution();

  return 0;
}