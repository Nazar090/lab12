#include <iostream>

using namespace std;

const int lengthOfArray = 5;

int maxValue(int array[]) {
    double maxElement = array[0];
    for (int i = 1; i < lengthOfArray; ++i) {
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }
    return maxElement;
}

int sumOfSomeNumbers(int array[]) {
    int firstZeroIndex = -1, secondZeroIndex = -1;
    for (int i = 0; i < lengthOfArray; ++i) {
        if (array[i] == 0) {
            if (firstZeroIndex == -1) {
                firstZeroIndex = i;
            } else {
                secondZeroIndex = i;
                break;  
            }
        }
    }

    int productBetweenZeros = 1;
    if (firstZeroIndex != -1 && secondZeroIndex != -1 && secondZeroIndex > firstZeroIndex + 1) {
        for (int i = firstZeroIndex + 1; i < secondZeroIndex; ++i) {
            productBetweenZeros *= array[i];
        }
    }
    return productBetweenZeros;
}

int main() {
    int numbers[lengthOfArray] = {0, 2, 3, 0, 5};
    cout << "Номер максимального елемента масиву: " << maxValue(numbers) << std::endl;
    cout << "Добуток елементів масиву між першим і другим нульовими: " << sumOfSomeNumbers(numbers) << std::endl;

    vector<int> transformedArray(lengthOfArray);
    for (int i = 0, j = 1; i < lengthOfArray; i += 2, j += 2) {
        transformedArray[i] = numbers[j];
        transformedArray[j] = numbers[i];
    }

    cout << "Масив після перетворення:\n";
    for (const auto &element : transformedArray) {
        cout << element << " ";
    }
    cout << endl;
    return 0;
}
