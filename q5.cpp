#include <iostream>
using namespace std;

int main() {
    int n,m,a[10][10];
    cout << "Enter rows & cols: "; cin >> n >> m;
    cout << "Enter matrix:\n";
    for (int i=0;i<n;i++) for (int j=0;j<m;j++) cin >> a[i][j];

    for (int i=0;i<n;i++) {
        int sum=0;
        for (int j=0;j<m;j++) sum+=a[i][j];
        cout << "Row " << i << " sum = " << sum << "\n";
    }

    for (int j=0;j<m;j++) {
        int sum=0;
        for (int i=0;i<n;i++) sum+=a[i][j];
        cout << "Col " << j << " sum = " << sum << "\n";
    }
}