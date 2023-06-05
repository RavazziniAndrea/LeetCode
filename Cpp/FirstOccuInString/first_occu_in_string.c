#include<iostream>
using namespace std;

class Solution {
	public:
	int strStr(string str, string to_find){
		if(str.find(to_find) == std::string::npos) return -1;
        for(int i=0;i<str.size();i++){
            int j = 0;
            while(str[i] == to_find[j]){
                i++;
                j++;
                if(j==to_find.size()) return i-j;
            }
            if(j>0) i=i-j;
        }
        return -1;
	}
};




int main(){
	Solution s;

	cout << s.strStr("siabcdknknknk", "abc") << endl;
	cout << s.strStr("", "abc") << endl;
	cout << s.strStr("sab", "ab") << endl;
	return 0;
}


