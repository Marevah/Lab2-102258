#include <iostream>
using namespace std;
int main()
{
	int myArray[5]={20,34,3,90,45};
	int x=0;
	for(int i=0; i<5; i++)
	{
		if(myArray[i]==x)
		{
			cout<<x<<"was found i the array";
			return 0;
		}
	}
	cout<<x<<"was not found in the array";
	return 0;
}

