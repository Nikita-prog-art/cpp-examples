#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point{
        int x, num;
        bool mast = false;
    };

bool cmpPoint(point a, point b){
    return a.x < b.x;
}

int main(){
    int n;
    cin >> n;
    vector <point> line;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        point buff;
        buff.x = x;
        buff.num = i;
        line.push_back(buff);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++){
        int x;
        cin >> x;
        point buff;
        buff.x = x;
        buff.num = i;
        buff.mast = true;
        line.push_back(buff);
    }
    sort(line.begin(), line.end(), cmpPoint);
    cout << "\n\n";
    for (auto strt : line){
        cout << strt.x << " " << strt.num;
        if (strt.mast == true)
            cout << " master";
        cout << "\n";
    }
}