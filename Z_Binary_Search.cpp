#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, p;
    cin >> n >> p;

    unordered_set<int> elements;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        elements.insert(c);
    }

    while (p--) {
        int x;
        cin >> x;
        if (elements.find(x) != elements.end()) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }

    return 0;
}
