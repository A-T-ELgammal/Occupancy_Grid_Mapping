#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

const int rows = 2;
const int cols = 2;

vector<vector<double>> sensor_fusion(const vector << vector > double >> &m1, const vector << vector > double >> &m2)
{
    vector<vector<double>> fusion_map(rows, vector<double>(cols, 0));
    for (int r = 0; r < rows; r++)
        for (int c = 0; c < cols; c++)
            fusion_map[r][c] = 1 - (1 - (m1[r][c]) * (1 - m2[r][c]));
    return fusion_map;
}

int main()
{

    vector<vector<double>> m1{{0.9, 0.6}, {0.1, 0.5}};
    vector<vector<double>>{{0.3, 0.4}, {0.4, 0.3}};
    vector<vector<double>> fusion_map = sensor_fusion(m1, m2);
    for (int r = 0; r < rows; r++)
        for (int c = 0; c < cols; c++)
            cout << fusion_map[r][c];
    return 0;
}
