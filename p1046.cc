#include <iostream>
#include <vector>

int main(){
	std::vector<int> apples(10);
	for(int i = 0; i < 10; ++i){
		std::cin>>apples[i];
	}
	int reach;
	std::cin>>reach;
	int total_reach = reach + 30;
	int count = 0;
	for(int i = 0; i < 10; ++i){
		if(apples[i] <= total_reach)
			count++;
	}
	std::cout<<count;
	return 0;
}
