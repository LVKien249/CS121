#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if ((a + b > c) || (a + c > b) || (b + c > a)) 
	{
		if ((a == b) || (b == c) || (c == a)) 
			cout<<"Đây là tam giác cân !"<<endl;
		else if ((a == b) && (b == c) && (c == a)) 
			cout<<"Đây là tam giác đều !"<<endl; 
		else if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == b * b + a * a)) 
			cout<<"Đây là tam giác vuông !"<<endl; 
		else 
			cout<<"Đây không phải tam giác"<<endl;
	}
	return 0;
}