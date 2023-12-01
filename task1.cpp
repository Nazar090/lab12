#include <iostream>

using namespace std;

const int lengthOfArray = 5;

string firstZero(int numbers[]) {
    for (int i = 1; i < lengthOfArray; i++) {
        if (numbers[i] == 0) {
            return to_string(i);
        }
    }
    return "Array haven't any zero.";
}

int main() {
    int numbers[lengthOfArray] = {0,2,3,0,5};
    cout << firstZero(numbers) << endl;
    return 0;
}