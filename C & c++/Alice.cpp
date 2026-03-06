#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    vector<char> s(3);
    
    for (int i = 0; i < 3; i++){
    	scanf("%c", &s[i]);
    //	cin >> s[i];
    //	cout << s[i];
	}
	
	if((s[0] == 'X' && s[1] == 'O' && s[2] == 'X')){
    	cout << "*" << endl;
	}
	else if(s[0] == 'X' && s[1] == 'X' && (s[2] == 'O')){
		cout << "Alice" << endl;
	}
	else{
		cout << "?" << endl;
	}
	
 
    return 0;
}