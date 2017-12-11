#include <iostream>
using namespace std;
int main()
{
	int pri,no;
	bool primenumber=true;
	cout<<"enter a positive integer";
	cin>>no;
	for(pri=2; pri<=no/2; pri++)
	{
		if(no%1==0)
		{
			primenumber=false;
			break;
		}
	}
	if (primenumber)
	cout<<"this is prime";
	else
	cout<<"this is not a prime";
	return 0;
	
}
