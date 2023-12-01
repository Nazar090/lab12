#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

const int lengthOfArray = 5;

int multiplication(int arr[]) {
    double productOfPositives = 1.0;
    for (int i = 0; i < lengthOfArray; ++i) {
        if (arr[i] > 0) {
            productOfPositives *= arr[i];
        }
    }
    return productOfPositives;
}

double findingMinElement(int arr[]) {
    int* minElementIt = min_element(arr, arr + lengthOfArray);
    double sumBeforeMin = 0.0;

    if (minElementIt != arr + lengthOfArray) {
        for (int* it = arr; it < minElementIt; ++it) {
            sumBeforeMin += *it;
        }
    }
    return sumBeforeMin;
}

int main() {
    int numbers[lengthOfArray] = {0, 2, 3, 0, 5};

    
    cout << "Product of positive array elements: " << multiplication(numbers) << endl;
    cout << "The sum of the array elements to the minimum element: " << findingMinElement(numbers) << endl;

    vector<double> evenIndices, oddIndices;
    for (int i = 0; i < lengthOfArray; ++i) {
        if (i % 2 == 0) {
            evenIndices.push_back(numbers[i]);
        } else {
            oddIndices.push_back(numbers[i]);
        }
    }

    sort(evenIndices.begin(), evenIndices.end());
    sort(oddIndices.begin(), oddIndices.end());

    for (int i = 0, j = 0, k = 0; i < lengthOfArray; ++i) {
        if (i % 2 == 0) {
            numbers[i] = evenIndices[j++];
        } else {
            numbers[i] = oddIndices[k++];
        }
    }

    cout << "The array after sorting by ascending order on even and odd positions: \n";
    for (const int &element : numbers) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
