#include <iostream>
using namespace std;

int main() {
    int i;
    int arr[5] = {1};
    for (i = 0; i < 5; i++)
        cout << arr[i];
    return 0;
}

/*
Explanation:
arr[5] = {1};  => arr[0]=1, rest = 0
So array = {1,0,0,0,0}
Output = 10000
*/