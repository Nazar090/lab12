#include <iostream>

using namespace std;

const int lengthOfArray = 5;

void copyingArrays(int array1[], int array2[]) {
    for (int i = 0; i < lengthOfArray; i++) {
        array2[i] = array1[i];
    }
}

int *changingNumbers(int numbers[]) {
    int copyiedNumbers[lengthOfArray];
    copyingArrays(numbers, copyiedNumbers);
    for (int i = 1; i < lengthOfArray - 1; i++) {
        numbers[i] = ((copyiedNumbers[i - 1]) + (copyiedNumbers[i + 1])) / 2;
    }
    return numbers;
}

int main() {
    int numbers[lengthOfArray] = {3, 2, 7, 16, 5};
    changingNumbers(numbers);
    for (int i = 0; i < lengthOfArray; i++){
        cout << to_string(numbers[i]) << "  ";
    }
    return 0;
    
}
