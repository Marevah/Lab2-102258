#include <iostream>
using namespace std;
struct person
{
	char name[50];
	int age;
	float salary;
};
int main()
{
	person p1;
	cout<<"enter full name:";
	cin>>p1.name;
	cout<<"enter age:";
	cin>>p1.age;
	cout<<"enter salary:";
	cin>>p1.salary;
	
	cout<<"\nDisaplaying Information."<<endl;
	cout<<"Name:"<<p1.name<<endl;
	cout<<"Age:"<<p1.age<<endl;
	cout<<"Salary:"<<p1.salary;
	return 0;
}
