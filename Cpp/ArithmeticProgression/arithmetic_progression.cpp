#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool canMakeArithmeticProgression(vector<int>& arr){

	sort(arr.begin(), arr.end());
	int diff = arr[1]-arr[0];
	for(int i=1;i<arr.size()-1;i++){
		if(arr[i+1]-arr[i] != diff) return false;
	}
	
	return true;
}



int main(){
	//vector<int> arr1 = {1};
	vector<int> arr2 = {3,5,1};
	vector<int> arr3 = {1,3,4};
	vector<int> arr4 = {1,5,9};
	//cout << canMakeArithmeticProgression(arr1)<<endl;
	cout << canMakeArithmeticProgression(arr2)<<endl;
	cout << canMakeArithmeticProgression(arr3)<<endl;
	cout << canMakeArithmeticProgression(arr4)<<endl;
	return 0;
}

