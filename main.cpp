RECURSIVE
#include<iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
unsigned int factorial(unsigned int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

int main()
{
	int num = 100000;
	auto start = high_resolution_clock::now();
	cout << "Factorial de " << num << " es " << factorial(num) << endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Tiempo "<< duration.count()<< " microseconds" << endl;
	return 0;
}

ITERATIVE
#include<iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
// function to find factorial of given number
unsigned int factorial(unsigned int n)
{
	int res = 1, i;
	for (i = 2; i <= n; i++)
		res *= i;
	return res;
}


int main()
{
	long num = 100000;
	auto start = high_resolution_clock::now();
	cout << "Factorial " << num << " es " << factorial(num) << endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Tiempo: "
	     << duration.count()<< " microseconds" << endl;
       return 0;
}
