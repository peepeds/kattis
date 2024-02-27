#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std ; 

void usingVector(int x){
    int  n; 
    int size ; 
    string city ; 
   
    cin >> x ; 
    for(int i = 0 ; i < x ; i++){
        vector<string> visit ;
        cin >> n ; 
        for(int j = 0 ; j < n ; j++){
            cin >> city ;
            auto it = find(visit.begin(), visit.end(),city);
            if(it == visit.end()){
                visit.push_back(city);
            }
        }
        size = visit.size();
        cout << size << endl ;

    }
}

void usingSet(int x){
    
    int  n;
    string city;

    
    for (int i = 0; i < x; ++i) {
        cin >> n;
        set<string> visit;
        for (int j = 0; j < n; ++j) {
            cin >> city;
            visit.insert(city); // insert city to set
        }
        cout << visit.size() << endl;
    }

}

int main(){
    int x ;
    cin >> x;
    usingSet(x);
}