#include<iostream>

using namespace std;

int reverse(int x){
	//case 1 (normal)
	//case 2 (negative)
	//case 3 (ending 0)
	if(x == INT_MIN) return 0;
	int neg = (x<0) ? -1 : 1;
	x = abs(x);
	int res=0;
	while(x/10 > 0){
		int tmp = x%10;
		x/=10;
		if(tmp==0 && res==0) continue;
		res = res*10+tmp;
		if(res >= 214748354) return 0;
	}
	return (res*10+(x%10))*neg;

}


int main(){
	cout << reverse(-2)<<endl;
	cout << reverse(-2147483648)<<endl;
	cout << reverse(1200)<<endl;
	cout << reverse(-122)<<endl;
	cout << reverse(-1030)<<endl;
	return 0;
}
