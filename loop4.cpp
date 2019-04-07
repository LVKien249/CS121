#include <iostream>
using namespace std;
int main()
{
	int n;cin>>n;
	for (int i = 1; i<=n/3;i++)
		for (int j = i; j<=(n - i)/2;j++)
			cout<<"("<<i<<","<<j<<","<<n-i-j<<");";
	cout<<endl;
	return 0;
}