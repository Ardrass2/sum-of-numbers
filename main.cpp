#include <iostream>


int main()
{
	int n;
	int summ;
	std::cout << "Input number some: " << std::endl;
	std::cin >> n;
	
	do {
	    summ = 0;
	    do {
	        summ += n % 10;
	        n /= 10;
        } while(n);
        n = summ;
	} while(summ > 10);
	std::cout << summ << std::endl;
    return 0;
}

