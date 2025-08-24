#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10] = {0};
    int n, m, p, q;
    cout << "Enter rows & cols of A: "; cin >> n >> m;
    cout << "Enter rows & cols of B: "; cin >> p >> q;
    if (m != p) { cout << "Not possible\n"; return 0; }

    cout << "Enter A:\n";
    for (int i=0;i<n;i++) for (int j=0;j<m;j++) cin >> a[i][j];
    cout << "Enter B:\n";
    for (int i=0;i<p;i++) for (int j=0;j<q;j++) cin >> b[i][j];

    for (int i=0;i<n;i++)
        for (int j=0;j<q;j++)
            for (int k=0;k<m;k++)
                c[i][j]+=a[i][k]*b[k][j];

    cout << "Result:\n";
    for (int i=0;i<n;i++) {
        for (int j=0;j<q;j++) cout << c[i][j] << " ";
        cout << "\n";
    }
}