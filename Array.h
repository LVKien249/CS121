#include <iostream>
using namespace std;

void InputArray(int a[],int n)   // Nhập mảng số nguyên
{
	for (int i = 0 ;i<n;i++)
		cin>>a[i];
}

void OutputArray(int a[],int n)  // Xuất mảng số nguyên
{
	for (int i = 0 ;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl; 
}

void Input(char a[],int n)       // Nhập mảng kí tự
{
	for (int i = 0 ;i<n;i++)
		cin>>a[i];
}

void Output(char a[],int n)     // Xuất mảng kí tự
{
	for (int i = 0 ;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl; 
}


int SumArray(int a[],int n)  // Tính tổng các số nguyên trong 1 mảng
{
	int sum = 0;
	for (int i = 0 ;i<n;i++)
		sum += a[i];
	return sum;
}

int MaxArray(int a[],int n)  // Tìm phần tử lớn nhất trong mảng
{
	int max = a[0];
	for (int i = 1;i<n;i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

int MinArray(int a[],int n)  // Tìm phần tử nhỏ nhất trong mảng
{
	int min = a[0];
	for (int i = 1;i<n;i++)
		if (a[i] < min)
			min = a[i];
	return min;
}

int Index_Max_Array(int a[],int n)  // Tìm vị trí phần tử lớn nhất trong mảng (vị trí theo mảng)
{
	for (int i = 0;i<n;i++)
		if (a[i] == MaxArray(a,n))
			return i;	
}

int Index_Min_Array(int a[],int n) // Tìm vị trí phần tử nhỏ nhất trong mảng (vị trí theo mảng)
{
	for (int i = 0;i<n;i++)
		if (a[i] == MinArray(a,n))
			return i;	
}

void ReverseArray(int a[],int n)  // Đảo ngược các phần tử trong mảng
{
	for (int i = 0 ;i<n/2;i++)
	{
		int t = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = t;
	}
}

int Find_Index_Array(int a[],int n,int value) // Tìm vị trí phần tử lớn nhất trong mảng (vị trí theo mảng)
{
	for (int i = 0 ;i<n;i++)
		if (a[i] == value)
			return i;
	return 0;
}

void SortUp(int a[],int n)   // Sắp xếp theo thứ tự tăng dần
{
	for (int i = 0 ;i<n;i++)
		for (int j = i+1;j<n;j++)
			if (a[i] > a[j])
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
}

void SortDown(int a[],int n) // Sắp xếp theo thứ tự giảm dần
{
	for (int i = 0 ;i<n;i++)
		for (int j = i+1;j<n;j++)
			if (a[i] < a[j])
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
}

void Insert(int a[],int &n,int position,int value) // Chèn giá trị vào vị trí nào đó trong mảng
{
	int t = a[position-1];
	int tt;
	a[position-1] = value;
	n++; 
	for (int i = position;i<n;i++)
	{
		tt = a[i];
		a[i] = t;
		t = tt;
	}
}

void Remove(int a[],int &n,int value) // Xóa 1 số trong mảng 
{
	for (int i = 0;i<n;i++)
	{
		if (a[i] == value)
		{
			for (int j = i;j<n-1;j++)
				a[j] = a[j+1];
			n--;
 		}
	}
}

void Print(int a[],int n)         // In theo yêu cầu đề bài
{
	for (int i = 0 ;i<n;i++)
		if(a[i]%2 != 0)
			cout<<a[i]<<" ";

	for (int i = 0 ;i<n;i++)
		if(a[i]%2 == 0)
			cout<<a[i]<<" ";

	for (int i = 0 ;i<n;i++)
		if(a[i] == 0)
			cout<<a[i]<<" ";
}

void Join(int a[],int b[],int &n, int m)   //Join mảng b vào mảng a
{
	n = n + m;
	int j = 0;
	for (int i = n-m ;i<n;i++)
		a[i] = b[j++];
}

void Merge(char a[],char b[],char c[],int n,int m) // Trộn 2 mảng với nhau
{
	int n1 = n, n2 = m, r = n,j = 0;
	if (m > r)
		r = m;

	for (int i = 0;i<r;i++)
	{
		if (n1 != 0)
		{
			c[j++] = a[i];
			n1--;
		}
		if (n2 != 0)
		{
			c[j++] = b[i];
			n2--;
		}
	}
}

void SumSequence(int a[],int n,int value)  // Tìm dãy các số liên tiếp có tổng == value (value là số nhập vào) 
{
	for (int i = 0 ; i<n;i++)
	{
		int c[100], r = 0,sum = 0;
		for (int j = i;j<n;j++)
		{
			sum = sum + a[j];
			if(sum > value)
				break;
			c[r++] = a[j];
			if (sum == value)
			{
				for (int k = 0;k<r;k++)
					cout<<c[k]<<" ";
				cout<<endl;
			}
		}
	}
}
