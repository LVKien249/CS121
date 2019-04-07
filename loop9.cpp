#include <iostream>
using namespace std;
bool IsPrime(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i<n;i++)
		if (n%i == 0)
			return false;
	return true;
}

int main()
{
	int n,sum = 0;
	cin>>n;
	for (int i = 2 ;i<n;i++)
		if(IsPrime(i))
			sum += i;
	cout<<sum<<endl;
	return 0;
}