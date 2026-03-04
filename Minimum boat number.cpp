#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	int limit = 4, n;
	
	cout << "How many people need a boat?" << endl;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int x = 0;
		cout << "What is the weight of the " << i + 1 << " person?" << endl;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int left_pointer = 0, right_pointer = (v.size() - 1), boat = 0;
	
	while(left_pointer <= right_pointer){
		if(v[left_pointer] + v[right_pointer] <= limit){
			boat++;
			left_pointer++;
			right_pointer--;
		}else{
			boat++;
			right_pointer--;
		}
	}
	cout << "The number of boats that you need is: " << boat << endl;
}