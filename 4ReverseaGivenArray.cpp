#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr) {
    reverse(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = {5, 3, 8, 2, 7};
    reverseArray(arr);

    cout << "Reversed array: ";
    for (int val : arr) cout << val << " ";
    cout << endl;

    return 0;
}
