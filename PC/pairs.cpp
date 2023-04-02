
#include <iostream>
#include <algorithm>
#include <vector>
#include <execution>
using namespace std;

int main() {
    int a , max = 1 , i, l;
    cin >> a;
    vector<int> x(a);
    for ( i = 0; i < a; i++) {
        cin >> x[i];
    }
    sort(x.rbegin(), x.rend());
    l = x[0] ;
    for ( i = 1; i < a; i++) {
        l--, max++;
        if (x[i] > l) {
        l = x[i];
        }
    }
    max += l +1 ;
    cout << max  << endl;

}