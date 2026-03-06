#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	int length, width, area, n;
	
	cout << "How many numbers does the vector have?" << endl;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int x;
		cout << "What is the " << i + 1 << " number?" << endl; 
		cin >> x;
		v.push_back(x);
	}
	
	int l = 0, r = (n - 1);
	int maxarea = 0;
	
	while(l < r){
		length = min(v[l], v[r]);
		width = r - l;
		area = width * length;
		maxarea = max(maxarea, area);
		if(v[l] < r){
			l++;
		} else {
			r--;
		}
	}
	cout << "The max area is: " << maxarea;
}