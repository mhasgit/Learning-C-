#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	int h=0,m=0,s=0,h1=0,m1=0,s1=0;
	cout<<"Enter time in format HH:MM:SS\n\n";
	cin>>h>>m>>s;
	
	cout<<"Set Alarm in HH:MM:SS\n\n";
	cin>>h1>>m1>>s1;
	
	if(h<24 && m<60 && s<60)
	{
		start:
		for(h;h<24;h++)
		{
			for(m;m<60;m++)
			{
				for(s;s<60;s++)
				{
					system("CLS");
					cout<<h<<" : "<<m<<" : "<<s;
					if(h<12)
					{
						cout<<" PM";
					}
					else
					{
						cout<<" AM";
					}
					if(h==h1 && m==m1 && s==s1)
					{
						cout<<"\a\a\a\a\a\a\a\a\a\a";
					}
					
					for(double i=0;i<9999999;i++)
					{
						i++;
						i--;
			    	}
					
				}
				s=0;
			}
			m=0;
		}
		h=0;
		goto start;
	}
	else
	{
		cout<<"Enter correct time format in HH:MM:SS\n";
	}
}
