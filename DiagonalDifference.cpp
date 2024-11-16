//Primary diagonal: The diagonal that runs from the top-left corner to the bottom-right corner.
//Secondary diagonal: The diagonal that runs from the top-right corner to the bottom-left corner.
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n;
    cin >> n; 
    int matrix[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    int primarySum = 0;
	int secondarySum = 0;

    for (int i = 0; i < n; ++i) {
    primarySum += matrix[i][i]; 
    secondarySum += matrix[i][n - i - 1]; 
    }

    int difference = abs(primarySum - secondarySum);
    cout << difference << endl;
    return 0;
}

