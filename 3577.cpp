#include <iostream>
#include <vector>

using namespace std;  

int n, m;
void solve() {
    vector<int> a, b;
    vector<bool> exist(201, false);
    cin >> n; //a size
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
        exist[x] = true;
    }
    
    cin >> m; //b size
    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        b.push_back(x);
        exist[x] = true;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int sum = a[i] + b[j];
            //sum not in a and not in b
            //exist[sum] = false  => not in a and not in b
            if(!exist[sum]) {
                cout << a[i] << " " << b[j] << endl;
                return;
            }
        }
    }
    
    cout << -1 << endl;
}

int main() {
    solve();
    return 0;
}
