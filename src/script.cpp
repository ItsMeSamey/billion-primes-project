#include <iostream>
#include <math.h>

bool isPrime(int n){
	if (n % 3 == 0){
		return false;
		}
	for (int i = 5; i * i <= ceil(sqrt(n)) + 1; i += 6){
		if (n % i == 0 || n % (i + 2) == 0){
			return false;
		}
	}
	return true;
}

int main(){
	std::cout << 2 << std::endl;
	std::cout << 3 << std::endl;
	for (int i = 5; i <= 1000000000; i = i + 6){
		if (isPrime(i)){
			std::cout << i << std::endl;
		}
		if (isPrime(i + 2)){
			std::cout << i + 2<< std::endl;
		}
	}
	return 0;
}
