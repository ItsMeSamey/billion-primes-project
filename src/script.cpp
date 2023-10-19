#include <iostream>
#include <math.h>
#define uint unsigned int

uint n,sqr,i,primes[3400],last=0;

bool isPrime(){
  for (uint i = 5; i < sqr; i += 6){
    if (n % i == 0 || n % (i + 2) == 0){
      return false;
    }
  }
  return true;
}

bool fisPrime(){
  for (uint i = 0; primes[i] < sqr; i++){
    if (n % primes[i] == 0){
      return false;
    }
  }
  return true;
}

int main(){
  std::cout << "2\n3\n";
  for (n = 7; n <= 31633; n += 8){
    sqr = ceil(sqrt(n)) + 1;
    if(isPrime()){primes[last++]=n;std::cout << n << std::endl;}
    n -= 2;
    if(isPrime()){primes[last++]=n;std::cout << n << std::endl;}
  }
  for (; n <= 1000000000; n += 8){
    sqr = ceil(sqrt(n)) + 1;
    if(fisPrime()){std::cout << n << std::endl;}
    n -= 2;
    if(fisPrime()){std::cout << n << std::endl;}
  }
  return 0;
}
