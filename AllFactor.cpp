#include <iostream>
int main(){
	
	int num;
	
	std::cout << " Input ";
	std::cin >> num;
	
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			std::cout << i << " ";
		}
	}
	return 0;
}
