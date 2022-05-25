#include<iostream>
using namespace std;
int main ()
{
	float value,convertfrom,convertto,result;
	cout<<"Enter any value\t";
	cin>>value;
	cout<<"\n***** Convert From *****\n\n";
	cout<<"Select only one option"<<endl;
	cout<<"Option 1 Meter"<<endl;
	cout<<"Option 2 Foot"<<endl;
	cout<<"Option 3 Inch"<<endl;
	cout<<"Option = ";
	cin>>convertfrom;
	cout<<"\n***** Convert To *****\n\n";
	cout<<"Select only one option"<<endl;
	cout<<"Option 1 Meter"<<endl;
	cout<<"Option 2 Foot"<<endl;
	cout<<"Option 3 Inch"<<endl;
	cout<<"Option = ";
	cin>>convertto;
	if (convertfrom==1 && convertto==1)
	{
		cout<<"\nConverting " <<value<<" Meter to Meter results in "<<value;
	}
     	if (convertfrom==1 && convertto==2)
	{
		result=value*3.281;
		cout<<"\nConverting " <<value<<" Meter to Foot results in "<<result;
	}
	    if (convertfrom==1 && convertto==3)
	{
		result=value*39.37;
		cout<<"\nConverting " <<value<<" Meter to Inch results in "<<result;
	}
		if (convertfrom==2 && convertto==1)
	{
		result=value/3.281;
		cout<<"\nConverting " <<value<<" Foot to Meter results in "<<result;
	}
		if (convertfrom==2 && convertto==2)
	{
		cout<<"\nConverting " <<value<<" Foot to Foot results in "<<value;
	}
	 	if (convertfrom==2 && convertto==3)
	{
		result=value*12;
		cout<<"\nConverting " <<value<<" Foot to Inch results in "<<result;
	}
      	if (convertfrom==3 && convertto==1)
	{
		result=value/39.37;
		cout<<"\nConverting " <<value<<" Inch to Meter results in "<<result;
	}
     	if (convertfrom==3 && convertto==2)
	{
		result=value/12;
		cout<<"\nConverting " <<value<<" Inch to Foot results in "<<result;
	}
	    if (convertfrom==3 && convertto==3)
	{
		cout<<"\nConverting " <<value<<" Inch to Inch results in "<<value<<endl;
	

	}
	return 0;
}
