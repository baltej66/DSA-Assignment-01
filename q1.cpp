#include <iostream>
using namespace std;

int arr[100], n = 0;

void create() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];
}

void display() {
    if (n == 0) { cout << "Array empty\n"; return; }
    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
}

void insert() {
    int pos, val;
    cout << "Enter position (0-" << n << "): ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;
    for (int i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = val; n++;
}

void del() {
    int pos;
    cout << "Enter position (0-" << n-1 << "): ";
    cin >> pos;
    for (int i = pos; i < n-1; i++) arr[i] = arr[i+1];
    n--;
}

void linearSearch() {
    int key; cout << "Enter element to search: "; cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) { cout << "Found at " << i << "\n"; return; }
    }
    cout << "Not found\n";
}

int main() {
    int choice;
    while (true) {
        cout << "\n1.CREATE 2.DISPLAY 3.INSERT 4.DELETE 5.SEARCH 6.EXIT\nChoice: ";
        cin >> choice;
        switch(choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: del(); break;
            case 5: linearSearch(); break;
            case 6: return 0;
            default: cout << "Invalid\n";
        }
    }
}