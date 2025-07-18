#include <bits/stdc++.h>
using namespace std;

pair<int, int> findSecondMinMax(vector<int> arr) {
    int firstMin = INT_MAX, secondMin = INT_MAX;
    int firstMax = INT_MIN, secondMax = INT_MIN;

    for (int val : arr) {
        if (val < firstMin) {
            secondMin = firstMin;
            firstMin = val;
        } else if (val < secondMin && val != firstMin) {
            secondMin = val;
        }

        if (val > firstMax) {
            secondMax = firstMax;
            firstMax = val;
        } else if (val > secondMax && val != firstMax) {
            secondMax = val;
        }
    }

    return {secondMin, secondMax};
}

int main() {
    vector<int> arr = {5, 3, 8, 2, 7};
    auto [secondMin, secondMax] = findSecondMinMax(arr);
    cout << "Second smallest: " << secondMin << endl;
    cout << "Second largest: " << secondMax << endl;
    return 0;
}
