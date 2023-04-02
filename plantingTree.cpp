
#include <iostream>
#include <algorithm>
#include <vector>
#include <execution>
using namespace std;

int main() {
    int n  , i ,a , x , y=1;
    cin >> a;
    vector<int> t(a);
    for ( i = 0; i < a; i++) {
        cin >> t[i];
    }
    sort(t.rbegin(), t.rend());
    x= t[0] ;
    for ( i = 1; i < n; i++) {
        x--, y++;
        if (t[i] > x) {
        x = t[i];
        }
    }
    y += x + 2;
    cout << y << endl;
  
}