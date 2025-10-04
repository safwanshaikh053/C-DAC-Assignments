//PATTERNS1


#include<iostream>

using namespace std;
int main()
{
	int i,j;

	for(i=1;i<=5;i++)//controller
	{
		for(j=1;j<=i;j++)//printer
			{
				cout<<"X";
			}
		cout<<"\n";//next line
	}	
}


//PATTERN 2
#include<iostream>
//
using namespace std;
int main()
{
	int i,j;

	for(i=1;i<=7;i=i+2)//controller
	{
		for(j=1;j<=i;j++)//printer
			{
				cout<<"X";
			}
		cout<<"\n";//next line
	}	
}

//PATTERN 3
#include<iostream>
//
using namespace std;
int main()
{
	int i,j;

	for(i=1;i<=7;i=i+2)//controller
	{
		for(j=1;j<=i;j++)//printer
			{
				cout<<i<<" ";
			}
		cout<<"\n";//next line
	}	
}

//PATTERN 4
#include<iostream>
//
using namespace std;
int main()
{
	int i,j;

	for(i=5;i>=1;i--)//controller
	{
		for(j=1;j<=i;j++)//printer
			{
				cout<<j<<" ";
			}
		cout<<"\n";//next line
	}	
}

//PATTERN 5
#include<iostream>
//
using namespace std;
int main()
{
	int i,j;

	for(i=5;i>=1;i--)//controller
	{
		for(j=1;j<=i;j++)//printer
			{
				cout<<j%2<<" ";
			}
		cout<<"\n";//next line
	}	
}

//PATTERN 6
#include<iostream>
//
using namespace std;
int main()
{
	int i,j;

	for(i=5;i>=1;i--)//controller
	{
		for(j=1;j<=i;j++)//printer
			{
				cout<<i%2<<" ";
			}
		cout<<"\n";//next line
	}	
}

//PATTERN 7
#include<iostream>
//
using namespace std;
int main()
{
    char i,j;
	
	for(i='a';i>='e';i++)  //controller
	{
		for(j='a';j>=i;j++)//printer
		{
				cout<<i;
				//	cout<<i;
			}
		cout<<"\n";//next line
	}	
	
}

//PATTERN 8
#include<iostream>
//
using namespace std;
int main()
{
    int i,j,k=1;
	
	for(i=1;i<=4;i++)  //controller
	{
		for(j=1;j<=i;j++)//printer
		{
				cout<<k<<" ";
				k++;
				//	cout<<i;
			}
		cout<<"\n";//next line
	}	
	
}


//PATTERN 9
#include<iostream>

using namespace std;
int main()
{
	int i,j,space,s;

	for(space=5,i=1;space>=1 && i<=5;space--,i++)//controller
	{
		//put spaces on a line
		for(s=1;s<=space;s++)	
			cout<<" ";//space
		//X print
		for(j=1;j<=i;j++)//printer
			cout<<" X";	
		//next line
		cout<<"\n";
	}	
}


//PATTERN 10

#include<iostream>

using namespace std;
int main()
{
	int i,j,space,s;

	for(space=5,i=1;space>=1 && i<=5;space--,i++)//controller
	{
		//put spaces on a line
		for(s=1;s<=space;s++)	
			cout<<" ";//space
		//X print
		for(j=1;j<=i;j++)//printer
			cout<<" X";	// the only difference between centre alligned triangle and right alligned triangle is the space given beside 'X'
		//next line
		cout<<"\n";
	}	
}



//PATTERN 11

#include<iostream>

using namespace std;
int main()
{
	int i,j,space,s;

	for(space=5,i=1;space>=1 && i<=5;space--,i++)//controller
	{
		//put spaces on a line
		for(s=1;s<=space;s++)	
			cout<<" ";//space
		//X print
		for(j=1;j<=i;j++)//printer
			cout<<" X";	// the only difference between centre alligned triangle and right alligned triangle is the space given beside 'X'
		//next line
		cout<<"\n";
	}	
		//int i,j,space,s;

	for(space=5,i=1;space>=1 && i<=5;space--,i++)//controller
	{
		//put spaces on a line
		for(s=1;s<=space;s++)	
			cout<<"X ";//space
		//X print
		for(j=1;j<=i;j++)//printer
			cout<<" ";	// the only difference between centre alligned triangle and right alligned triangle is the space given beside 'X'
		//next line
		cout<<"\n";
	}	
}


//PATTERN 12

#include<iostream>

using namespace std;
int main()
{
	int i,j,space,s;

	for(space=5,i=1;space>=1 && i<=5;space--,i++)//controller
	{
		//put spaces on a line
		for(s=1;s<=space;s++)	
			cout<<" ";//space
		//X print
		for(j=1;j<=i;j++)//printer
			cout<<" X";	// the only difference between centre alligned triangle and right alligned triangle is the space given beside 'X'
		//next line
		cout<<"\n";
	}	
		//int i,j,space,s;

	for(space=5,i=1;space>=1 && i<=5;space--,i++)//controller
	{
		//put spaces on a line
		for(s=1;s<=space;s++)	
			cout<<"X ";//space
		//X print
		for(j=1;j<=i;j++)//printer
			cout<<" ";	// the only difference between centre alligned triangle and right alligned triangle is the space given beside 'X'
		//next line
		cout<<"\n";
	}	
}












