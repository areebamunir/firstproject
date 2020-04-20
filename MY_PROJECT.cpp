//Areeba Munir
//CT-019
//PL Assignment 2
//Game
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{	int x,y,len;
	cout<<"Assume any word"<<endl;
	cout<<"Length of the selected word is :";
	cin>>len;
	int col1[len],col2[len];
	char mat[7][4]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char    C1[7]={'A','E','I','M','Q','U','Y'};
	char	C2[7]={'B','F','J','N','R','V','Z'};
	char	C3[7]={'C','G','K','O','S','W',' '};
	char	C4[7]={'D','H','L','P','T','X',' '};
	
	cout<<"then see the table below"<<endl;
	cout<<"1"<<"  "<<"2"<<"  "<<"3"<<"  "<<"4"<<"  "<<endl;
	for(int i=0;i<7;i++)
	{
		cout<<C1[i]<<"  "<<C2[i]<<"  "<<C3[i]<<"  "<<C4[i];
		cout<<endl;
	}
	
	cout<<"Enter no of column containing your assuming letters one by one "<<endl;
	cout<<"Also see the another table form by alphabets"<<endl;
	cout<<"\t"<<"1"<<" "<<"2 "<<"3 "<<"4 "<<"5 "<<"6 "<<"7 "<<endl;
	for(int i=0;i<len;i++)
	{	
		cin>>col1[i];
	
		if(col1[i]==1)
			cout<<"\tA E I M Q U Y"<<endl;
		else if(col1[i]==2)
			cout<<"\tB F J N R V Z"<<endl;
		else if(col1[i]==3)
			cout<<"\tC G K O S W  "<<endl;
		else
			cout<<"\tD H L P T X  "<<endl;
	}
	
	cout<<"Again enter no of column containing your assuming letters one by one from above table "<<endl;
	for(int i=0;i<len;i++)
		cin>>col2[i];
	cout<<"Answer"<<endl;
	for(int i=0;i<len;i++)
	{
		x=col2[i]-1;
		y=col1[i]-1;
		cout<<mat[x][y];
	}
	
	return 0;
	getch();
}
