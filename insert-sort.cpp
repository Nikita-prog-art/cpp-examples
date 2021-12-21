#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 20;
    vector <int> a(n);
    for(int i = 0; i < n; i++)
        a[i] = (i * 1000 + 12 * (1000 - i)) % 1007;
    for(auto x : a)
        cout << x << " ";
    cout << "\n";
    int i = 1;
    while(i < n) {
        if(a[i - 1] > a[i]) {
            int x = a[i];
            int j = i - 1;
            while(j >= 0 && a[j] > x) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = x;
        }
        i++;
    }
    for(auto x : a)
        cout << x << " ";
    return 0;
}
