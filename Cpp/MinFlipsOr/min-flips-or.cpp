#include<iostream>
#include<bitset>

using namespace std;

int minFlips(int a, int b, int c){
	int count = 0;
	std::string as = std::bitset<32>(a).to_string();
	std::string bs = std::bitset<32>(b).to_string();
	std::string cs = std::bitset<32>(c).to_string();

	cout<<as<<endl;
	cout<<bs<<endl;
	cout<<cs<<endl;

	for(int i = 0; i< as.size(); i++){
		int ai = as[i] - '0';
		int bi = bs[i] - '0';
		cout <<count<<" - "<< ai << " -- " <<bi<<" --- "<<i<<endl;
		if(cs[i]=='0'){
			count+=(ai+bi);
		} else {
			if(ai==0 && bi==0) count++;
		}
	}

	return count;
}


int main(){
	cout << minFlips(1,2,3) << endl;
	return 0;
}
