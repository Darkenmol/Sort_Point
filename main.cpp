#include <algorithm>
#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<pair<int, int>> WritePairArray(vector<pair<int, int>>& array);
void ShowArray(vector<pair<int, int>>& array);

int main(void) {
	int n;
	
	cin >> n;
	cout << endl;
	
	vector<pair<int, int>> array(n);
	
	array = WritePairArray(array);
	
	cout << endl;
	
	sort(array.begin(), array.end(), 
	[](const pair<int, int>& point1, const pair<int, int>& point2) {
    return pow(point1.first, 2) + pow(point1.second, 2) < pow(point2.first, 2) + pow(point2.second, 2);
    });
	
	ShowArray(array);
	
	return 0;
}

vector<pair<int, int>> WritePairArray(vector<pair<int, int>>& array) {
	string line;
	pair<int, int> point;
	int a, b;
	
	for (size_t i = 0; i != array.size(); ++i) {
		cin >> a >> b;
	
		point.first = a;
		point.second = b;
		
		array[i] = point;		
	}
	
	return array;
}
void ShowArray(vector<pair<int, int>>& array) {
	for (pair<int, int> point : array) {
		cout << point.first << " "
			 << point.second << endl;
			 
		cout << endl;
	}
}