#include <iostream>
using namespace std;

// Function to dynamically create and return an array of pairs
pair<int, int>* pairArray(int arr[], int n, int &numPairs) {
    int maxPairs = n * n;
    pair<int, int>* paired_arr = new pair<int, int>[maxPairs]; // Dynamically allocate array
    
    numPairs = 0; // Counter for actual number of pairs added
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            paired_arr[numPairs++] = make_pair(arr[i], arr[j]);
        }
    }
    return paired_arr; // Return pointer to the array
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]); // Number of elements in arr
    int numPairs; // To hold the number of pairs

    pair<int, int> *paired_arr = pairArray(arr, n, numPairs); // Call the function

    // Print the pairs
    for (int i = 0; i < numPairs; ++i) {
        cout << "(" << paired_arr[i].first << ", " << paired_arr[i].second << ")" << endl;
    }

    delete[] paired_arr; // IMPORTANT: Free the allocated memory
    return 0;
}
