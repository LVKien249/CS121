#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	for (int i = n+1; i <= m+n; i++)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}