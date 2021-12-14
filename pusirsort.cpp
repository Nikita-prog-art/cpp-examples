#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 30;
    vector <int> m(n);
    for (int i = 0;i < n; i++){
        m[i] = (i * 100 + 1) % (n + 1);
    }
    for (auto x : m)
        cout << x << " ";
    for (int i = 0; i < n - 1; i++){
        bool sorted = true; //обмена нет
        for (int j = 0; j < n - 1 - i; j++)
            if (m[j] > m[j + 1]){
                swap(m[j], m[j + 1]);
                sorted = false; //обмен есть!
            }
        if (sorted)
            break;
    }
    cout << "\n";
    for (auto x : m)
        cout << x << " ";    
}