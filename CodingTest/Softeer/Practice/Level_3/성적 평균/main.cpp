#include <iostream>
#include <vector>
using namespace std;

int N, K;
vector<int> scores;

void Input_NK()
{
    cin >> N >> K;
}

void Input_scores()
{
    int score;
    for (int i = 0; i < N; i++) {
        cin >> score;
        scores.push_back(score);
    }
}

void Input_ranges(int *s, int *f)
{
    cin >> *s >> *f;
}

void GetAverage(const vector<int>::iterator itr, const int size, double *average)
{
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += *(itr + i);
    }
    *average = sum / size;
}

void Output(double *average)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << *average << endl;
}

void Solution()
{
    Input_NK();
    Input_scores();

    int s, f;
    double average;
    for (int i = 0; i < K; i++) {
        Input_ranges(&s, &f);
        GetAverage(scores.begin() + s - 1, f - s + 1, &average);
        Output(&average);
    }
}

int main(void)
{
    Solution();
}