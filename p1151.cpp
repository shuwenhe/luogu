#include <iostream>
#include <vector>

using namespace std;

int main(){
	int K;
	cin>>K;
	vector<int> ans;
	for(int n = 10000; n <= 30000; ++n){
		int sub1 = n / 100;
		int sub2 = (n / 10) % 1000;
		int sub3 = n % 1000;
		if(sub1 % K == 0 && sub2 % K == 0 && sub3 % K == 0){
			ans.push_back(n);
		}
	}
	if(ans.empty()){
		cout<<"NO"<<endl;
	}else{
		for(int x : ans){
			cout<<x<<endl;
		}
	}
	return 0;
}
