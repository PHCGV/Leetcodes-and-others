#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	int i = 1, n;
	
	cout << "How many numbers are going into the vector? ";
	cin >> n;
	for (int j = 0; j < n; j++){
		int x;
		cout << "What is the " << j+1 << " number?" << endl;
		cin >> x;
		v.push_back(x);
	}
	while(i != v.size() && v[i] > v[i-1]){
		i++;
	}
	if(i == v.size() || i == 1){
		cout << "Invalid vector";
		return false;
	}
	while(i != v.size() && v[i] < v[i-1]){
		i++;
	}
	cout << "Valid vector";	
	return i == v.size();
}