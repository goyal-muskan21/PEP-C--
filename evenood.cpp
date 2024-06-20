#include <iostream>
using namespace std;

void sum_of_odd_and_even(int n, int& odd_sum, int& even_sum) {
    odd_sum = 0;
    even_sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            even_sum += i;
        } else {
            odd_sum += i;
        }
    }
}

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cout << "Enter the value of N: ";
        cin >> n;
        int odd_sum, even_sum;
        sum_of_odd_and_even(n, odd_sum, even_sum);
        cout << odd_sum << " " << even_sum << endl;
    }
    return 0;
}
