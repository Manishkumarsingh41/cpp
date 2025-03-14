#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 3, 2, 3, 4, 3, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> frequency;
    int most_frequent = arr[0];
    int max_count = 0;

    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;

        if (frequency[arr[i]] > max_count) {
            max_count = frequency[arr[i]];
            most_frequent = arr[i];
        }
    }

    cout << "The most frequent element is: " << most_frequent << endl;

    return 0;
}
