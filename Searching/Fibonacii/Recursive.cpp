#include<iostream>
using namespace std;

int fib(int n)
{
	if(n<=1)
	return n;
	
	return fib(n-1) + fib(n-2);
}
int main()
{
    int num;
	cout<<"Enter the number\n";
	cin>>num;
	
	cout<<"The Fibonacci series is: "<<fib(num);
	return 0;
}
