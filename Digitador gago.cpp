#include <bits/stdc++.h>
using namespace std;

//O papassarinho vovoou para bem longe.
//Usar uma string para armazenar a frase e, se s[i-3] e s[i-2] forem iguais a s[i-1] e s[i] | s[i-1] = s[i+1] e s[i] = s[i+2] | i = i + 2;
int main(){
	
	string frase;
	
	getline(cin, frase);
	int i = 3;
	
	while(i < frase.length()){
		if((frase[i-3] == frase[i-1]) && (frase[i-2] == frase [i]) ){
			frase.erase(i-3, 2);
			i = 3;
		}
		else{
			i++;
		}
	}
		
	cout << frase << endl;
	
	return 0;
}