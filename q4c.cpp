#include <iostream>
using namespace std;

int main() {
    int n,m,a[10][10],t[10][10];
    cout << "Enter rows & cols: "; cin >> n >> m;
    cout << "Enter matrix:\n";
    for (int i=0;i<n;i++) for (int j=0;j<m;j++) cin >> a[i][j];

    for (int i=0;i<n;i++) for (int j=0;j<m;j++) t[j][i]=a[i][j];

    cout << "Transpose:\n";
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) cout << t[i][j] << " ";
        cout << "\n";
    }
}