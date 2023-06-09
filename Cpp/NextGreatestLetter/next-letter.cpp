#include<iostream>
#include<vector>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
   for(int i=0;i<letters.size();i++){
	   if(letters[i] > target) return letters[i];
   }
   return letters[0]; 
}

int main(){
	vector<char> vec = {'a','f','v'}; 
	cout << nextGreatestLetter(vec, 'c')<<endl;
	return 0;
}
