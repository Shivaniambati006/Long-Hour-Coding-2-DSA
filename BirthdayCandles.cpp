#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int candles[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> candles[i];
    }
    
    int tallest = candles[0];
    for (int i = 1; i < n; ++i) {
        if (candles[i] > tallest) {
            tallest = candles[i];
        }
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (candles[i] == tallest) {
            ++count;
        }
    }

    cout << count << endl;
    return 0;
}

