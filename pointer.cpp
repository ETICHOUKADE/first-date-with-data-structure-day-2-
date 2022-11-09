#include<bits/stdc++.h>
using namespace std;
int call_by_value(int n)
{
	cout<<"address of n in call_by _value function : "<<n<<endl;
	n*=n;
	return n;
}
int call_by_reference(int* n)
{
	cout<<"address of n in call_by _reference function : "<<n<<endl;
	*n *= *n;
}
void call_by_reference_address(int& n)
{
	cout<<"address of n in call_by_reference_address function :" "<<&n<<endl";
	
}

int main()
{
	int n= 8;
	cout<<"address of n in main():" "<<&n<<endl";
	call_by_reference(&n);
	call_by_reference_address(n);
	cout<<"ans: "<<call_by_value(n)<<endl;
	cout<<"value of n :"<<n<<endl;
	return 0;
}

