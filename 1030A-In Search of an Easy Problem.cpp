#include<iostream>
using namespace std;

int main() {
    int n, i, ans;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> ans;
    }
    if (ans == 1)
        cout << "HARD";
        else
        cout << "EASY";

    return 0;
}
