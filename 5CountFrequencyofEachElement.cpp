#include <bits/stdc++.h>
using namespace std;

void countFrequency(vector<int> arr) {
    unordered_map<int, int> freq;
    for (int val : arr) freq[val]++;

    cout << "Frequencies:\n";
    for (auto [key, value] : freq) {
        cout << key << " -> " << value << endl;
    }
}

int main() {
    vector<int> arr = {5, 3, 5, 2, 3, 5};
    countFrequency(arr);
    return 0;
}
