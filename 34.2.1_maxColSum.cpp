// Find the sum of the maximum column
#include <iostream>
#include <climits>
using namespace std;

int maxSum(int matrix[][4], int rows, int cols) {
    int maxColSum = INT_MIN;
    for (int j = 0; j < cols; j++) {
        int currentSum = 0;
        for (int i = 0; i < rows; i++) {
            currentSum += matrix[i][j];
        }
        if (currentSum > maxColSum) {
            maxColSum = currentSum;
        }
    }
    return maxColSum;
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 8, 9},
        {10, 11, 12, 13},
        {14, 15, 16, 17}
    };

    int rows = 4;
    int cols = 4;
    cout << "Maximum Column Sum = " << maxSum(matrix, rows, cols);
    return 0;
}