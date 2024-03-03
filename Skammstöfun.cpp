#include <iostream>
#include <vector>
#include <cctype> 
using namespace std;

int main() {
    string x;
    int y;
    vector<char> ans;

    cin >> y;
    cin.ignore();
    getline(cin,x);
    if(isupper(x[0])) ans.push_back(x[0]);
    for (int i = 0; i < x.size(); i++) { 
        if(isupper(x[i]) && x[i-1] == ' ') ans.push_back(x[i]);
    }

    for (auto&& i : ans) {
        cout << i; 
    }
    cout << endl;

    return 0;
}
