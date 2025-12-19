#include <iostream>

int main(){
	int k;
	if(!(std::cin>>k)) return 0;
	double sn = 0.0;
	int n = 0;
	while(sn<=k){
		n++;
		sn += 1.0/n;
	}
	std::cout<<n<<std::endl;
	return 0;
}
