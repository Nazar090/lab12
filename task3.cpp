#include <iostream>

using namespace std;

const int lengthOfArray = 5;

int minValue(int array[]) {
    double minElement = array[0];
    for (int i = 1; i < lengthOfArray; ++i) {
        if (array[i] < minElement) {
            minElement = array[i];
        }
    }
    return minElement;
}

int sumOfSomeNumbers(int array[]) {
    int firstPositiveIndex = -1, lastPositiveIndex = -1;
    for (int i = 0; i < lengthOfArray; ++i) {
        if (array[i] > 0) {
            if (firstPositiveIndex == -1) {
                firstPositiveIndex = i;
            }
            lastPositiveIndex = i;
        }
    }

    double sumBetweenPositives = 0;
    if (firstPositiveIndex != -1 && lastPositiveIndex != -1 && lastPositiveIndex > firstPositiveIndex) {
        for (int i = firstPositiveIndex + 1; i < lastPositiveIndex; ++i) {
            sumBetweenPositives += array[i];
        }
    }
    return sumBetweenPositives;
}

int main() {
    int numbers[lengthOfArray] = {3, 2, 7, 16, 5};
    cout << "Min element of array: " << minValue(numbers) << endl;
    cout << "The sum of the array elements located between the first and last positive ones: " << sumOfSomeNumbers(numbers) << endl;

    return 0;
}
