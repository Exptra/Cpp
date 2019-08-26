#include <iostream>
int main(){
	
	int a, b;
	
	std::cout << "\n X_Bricks = ";
	std::cin >> a;
	std::cout << " Total_Bricks = ";
	std::cin >> b;
	
		if ( b%(a+(a*3)) == 0 ) {
			std::cout << "\n Adhit";
		}else if (b%(a+(a*3)) <= a) {
			std::cout << "\n Yoga";
		}else {
			std::cout << "\n Adhit";
		}
		return 0;
} 
