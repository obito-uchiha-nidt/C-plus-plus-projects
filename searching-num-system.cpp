#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key, found = 0;

    cout << "Enter number to search: ";
    cin >> key;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            cout << "Founded ";
            found = 1;
            break;
        }
    }

    if(found == 0) {
        cout << "Not found";
    }

    return 0;
}