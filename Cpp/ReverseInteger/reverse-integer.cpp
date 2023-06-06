#include<iostream>
#include<climits>

using namespace std;

int reverse(int x){
	long res=0;
	while(x){
		res = res*10+x%10;
		x/=10;
	}
	if(res >= INT_MAX || res <= INT_MIN) return 0;
	return int(res);

}


int main(){
	cout << reverse(-2)<<endl;
	cout << reverse(-2147483648)<<endl;
	cout << reverse(1200)<<endl;
	cout << reverse(-122)<<endl;
	cout << reverse(-1030)<<endl;
	return 0;
}
