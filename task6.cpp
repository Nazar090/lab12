#include <iostream>

using namespace std;

const int lengthOfArray = 5;


int main() {
    int numbers[lengthOfArray] = {0, 2, 3, 0, 5};
int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    vector<double> arr(n);
    cout << "Введіть дійсні елементи масиву:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    double A, B;
    cout << "Введіть A і B для діапазону [A, B]: ";
    cin >> A >> B;

    int countInRange = count_if(arr.begin(), arr.end(), [A, B](double x) {
        return x >= A && x <= B;
    });
    cout << "Кількість елементів у діапазоні [" << A << ", " << B << "]: " << countInRange << std::endl;

    auto maxElementIt = max_element(arr.begin(), arr.end());
    double sumAfterMax = 0.0;
    if (maxElementIt != arr.end()) {
        for (auto it = maxElementIt + 1; it != arr.end(); ++it) {
            sumAfterMax += *it;
        }
    }
    cout << "Сума елементів масиву, розташованих після максимального елемента: " << sumAfterMax << std::endl;

    sort(arr.begin(), arr.end(), [](double a, double b) {
        return abs(a) > abs(b);
    });

    cout << "Масив після упорядкування за спаданням модулів:\n";
    for (const auto &element : arr) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
