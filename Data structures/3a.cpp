#include <iostream>
using namespace std;
int main()
{
	int myArray[5]={20,34,3,90,45};
	int x=0;
	bool found=false;
	for(int i=0; i<5; i++)
	{
		if(myArray[i]==x)
		{
			found=true;
		}
	}
	if(found)
	{
		cout<<x<<"was found in the array";
	}
	else
	{
		cout<<x<<"was not found in the array";
	}
	return 0;
}
