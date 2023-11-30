#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

const int rows = 2;
const int cols = 2;

vector<vector<double>> sensorFusion(double m1[][rows], double m2[][rows])
{
    //*#############TODO: Code the Sensor Fusion Function############*//
    // Fuse the measurments of the two maps and print the resulting
    // map in a matrix form:
    // a  b
    // c  d
    vector<vector<double>> fusion_map(rows, vector<double>(cols, 0));
    for (int row = 0; row < cols; row++)
        for (int col = 0; col < rows; col++)
            fusion_map[row][col] = 1 - ((1 - m1[row][col]) * (1 - m2[row][col]));
    return fusion_map;
}

int main()
{

    double m1[cols][rows] = {{0.9, 0.6}, {0.1, 0.5}};
    double m2[cols][rows] = {{0.3, 0.4}, {0.4, 0.3}};
    vector<vector<double>> fusion_map = sensorFusion(m1, m2);
    for (int row = 0; row < cols; row++)
        for (int col = 0; col < rows; col++)
            cout << fusion_map[row][col] << " ";
    return 0;
}
