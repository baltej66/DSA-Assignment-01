#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    cout << "Enter n: "; cin >> n;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n/2; i++) swap(arr[i], arr[n-i-1]);

    cout << "Reversed: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}