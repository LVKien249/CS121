#include <iostream>
using namespace std;
double Sum(double a,double b)  // Tính tổng 2 số
{
	return a+b;
}

double Sum(double a,double b,double c)  // Tính tổng 3 số
{
	return Sum(Sum(a,b),c);
}

int Max(int a,int b) // Tìm số lớn nhất trong 2 số
{
	if (a>b)
		return a;
	return b;
}

int Min(int a,int b)  // Tìm số nhỏ nhất trong 2 số
{
	if (a < b)
		return a;
	return b;
}

bool IsPrime(int n)  // Kiểm tra số nguyên tố
{
	if (n<2)
		return false;
	for (int i = 2;i<n;i++)
		if(n%i==0)
			return false;
	return true;
}

bool IsPerfect(int n)  // Kiểm tra số hoàn hảo
{
	int sum = 0;
	for (int i = 1;i<n;i++)
		if (n%i==0)
			sum +=i;
	return sum == n;
}

int Reverse(int n)  // Đảo ngược 1 số nguyên
{
	int sum = 0;
	while (n != 0)
	{
		sum = sum*10 + n%10;
		n = n/10;
	}
	return sum;
}

bool IsPalindrome(int n) // Kiểm tra số đối xứng
{
	return n == Reverse(n);
}

bool LeapYear(int y)  // Kiểm tra năm nhuận
{
	return y%4 == 0 && y%100 != 0 || y%400 ==0; 
}

int Day(int m,int y)  // Tính số ngày trong 1 tháng
 { 
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 )
		return 31;
	if (m == 4 || m == 6 || m == 11 || m == 9)
		return 30;
	if (m == 2)
	{
		if (LeapYear(y))
			return 29;
		return 28;
	}
}

void NextDay(int &d,int &m,int &y)  // Tìm ngày tiếp theo
{
	if (d > Day(m,y))
	{
		cout<<"Không có ngày này"<<endl;
		return;
	}
	if (d == Day(m,y))
	{
		d = 1;
		m++;
		if (m >12)
		{
			m =1;
			y++;
		}
	}
	else
		d++;
}

void NexyDays(int &d,int &m,int &y,int n)  // Tìm n ngày tiếp th
{
	for (int i = 0 ;i<n;i++)
		NextDay(d,m,y);
}

void Fibonacci()  // 70 số fibonacci đầu tiền
{
	long long a = 1,b = 1;
	cout<<a<<" "<<b<<" ";
	for (int i = 2;i<70;i++)
	{
		long long c = a + b;
		a = b;
		b = c;
		cout<<c<<" ";
	}
	cout<<endl;
}

int Factorial(int n)   // Tính giai thừa 1 số nguyên
{
	int m;
	for (int i = 1;i<=n;i++)
		m = m *i;
	return m;
}
