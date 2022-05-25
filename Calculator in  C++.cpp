#include<iostream>
using namespace std;
int main()
{
	float a,b,option;
	float ans;
	cout<<"Enter the 1st number\t";
	cin>>a;
	cout<<"Enter the 2nd number\t";
	cin>>b;
	cout<<"Which operation do you want to perform?\t"<<endl;
	cout<<"Option #1 Sum"<<endl;
	cout<<"Option #2 Difference"<<endl;
	cout<<"Option #3 Product"<<endl;
	cout<<"Option #4 Quotient"<<endl;
	cout<<"Option = ";
	cin>>option;
	if (option==1) 
	{
	     ans=a+b;
	     cout<<"The sum of " <<a<< " and " <<b<< " = "<<ans<<endl;
    }
	if (option==2)
	{
	     ans=a-b;
	     cout<<"The difference of " <<a<< " and " <<b<< " = "<<ans<<endl;
    }
	if (option==3)
	{
	     ans=a*b;
	     cout<<"The product of " <<a<< " and " <<b<< " = "<<ans<<endl;
    }
	if (option==4)
    {
	     ans=a/b;
	    cout<<"The quotient of " <<a<< " and " <<b<< " = "<<ans<<endl;
    }
}
