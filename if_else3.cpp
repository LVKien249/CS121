#include <iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	if (t > 4)
		cout<<"Tong mon Van va Anh can dat "<<24-t<<" diem de dat hoc sinh gioi"<<endl;
	else
		cout<<"Ban khong du diem dat hoc sinh gioi"<<endl;
	int v;cin>>v;
	if (24 - t - v <= 10 )
		cout<<"Mon Anh can dat "<<24-t-v<<" diem de dat hoc sinh gioi"<<endl;
	else
		cout<<"Ban khong du diem dat hoc sinh gioi"<<endl;
	int a; cin>>a;
	if (t + v + a >= 24)
		cout<<"Chuc mung ban dat hoc sinh gioi"<<endl;
	else
		cout<<"Ban khong duoc hoc sinh gioi"<<endl;

	return 0;
}