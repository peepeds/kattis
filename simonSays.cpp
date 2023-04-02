#include <iostream>
#include <string>
using namespace std;
int main(){
	
	const string pattern = "Simon says";
	int a = 0;
    cin >> a;
	string s , simon ;
	
	cin.ignore();

	for (int i = 0; i < a; i++){
		getline(cin, s);
		simon = s.substr(0, 10);
		if(simon.compare(pattern) == 0){
			cout << s.substr(11) << endl;
		}
	}
	
}