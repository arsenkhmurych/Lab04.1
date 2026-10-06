#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cout << "Введіть N (N >= 1): ";
    cin >> N;

    if (N < 1) {
        cout << "N має бути більше або дорівнювати 1!" << endl;
        return 1;
    }

    // Встановлюємо точність виводу дробових чисел
    cout << fixed << setprecision(6);

    // 1) Спосіб: while(...) { ... }
    double sum1 = 0;
    int i = 1;
    while (i <= N) {
        sum1 += (1.0 / i) + sqrt(1.0 + pow(sin(i), 2));
        i++;
    }
    cout << "1) while(...):           " << sum1 << endl;

    // 2) Спосіб: do { ... } while(...);
    double sum2 = 0;
    i = 1;
    do {
        sum2 += (1.0 / i) + sqrt(1.0 + pow(sin(i), 2));
        i++;
    } while (i <= N);
    cout << "2) do...while(...):      " << sum2 << endl;

    // 3) Спосіб: for(...; ...; i++) { ... }
    double sum3 = 0;
    for (int k = 1; k <= N; k++) {
        sum3 += (1.0 / k) + sqrt(1.0 + pow(sin(k), 2));
    }
    cout << "3) for(...; k++):        " << sum3 << endl;

    // 4) Спосіб: for(...; ...; i--) { ... }
    double sum4 = 0;
    for (int k = N; k >= 1; k--) {
        sum4 += (1.0 / k) + sqrt(1.0 + pow(sin(k), 2));
    }
    cout << "4) for(...; k--):        " << sum4 << endl;

    return 0;
}