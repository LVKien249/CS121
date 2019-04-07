#include <iostream>
#include "Function.h"
#include "Array.h"
using namespace std;
int main()
{
	int a[100];
	int n;
	cin>>n;
	InputArray(a,n);
	ReverseArray(a,n);
	OutputArray(a,n);
	return 0;
}