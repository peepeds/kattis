#include <iostream>
#include <cstring>

using namespace std ; 

int main(){
    int len  , y =0;
   
    const string s = "eh?";
    string s1  ; 
    string x ;
    
    getline(cin , s1);
 
    len = s1.length();
    y = len - 3 ;
    x = s1.substr( y ,len);
    if(x.compare(s) == 0){
		cout << "Canadian!" << endl;
	} else {
        cout << "Imposter!" << endl ;
    }
}