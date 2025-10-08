
//Array problem-1

#include<iostream>
//print center triangle of n lines where n given by user
using namespace std;
int main()
{
  int a[50],size,index;//50 is the maximum size given. The user can enter anything up to 50. 
  cout<<"\nEnter size of array:";
  cin>>size;
  
  cout<<"\nEnter "<<size<<" elements.";
  for(index=0;index<size;index++)
  {
  	cout<<"\neneter element at a["<<index<<"] :";
  	cin>>a[index];
  }

  cout<<"\nEntered "<<size<<" elements are";
  for(index=0;index<size;index++)
  {
  	cout<<"\na["<<index<<"] :"<<a[index];
  }  
}

//Array problem-2

#include<iostream>
//print center triangle of n lines where n given by user
using namespace std;
int main()
{
  int a[50],size,index;//50 is the maximum size given. The user can enter anything up to 50. 
  cout<<"\nEnter size of array:";
  cin>>size;
  
  cout<<"\nEnter "<<size<<" elements.";
  for(index=0;index<size;index++)
  {
  	cout<<"\neneter element at a["<<index<<"] :";
  	cin>>a[index];
  }

  cout<<"\nEntered "<<size<<" elements are";
  for(index=size-1;index>=0;index--)
  {
  	cout<<"\na["<<index<<"] :"<<a[index];
  }  
}



//Fizz-Buzz Problem

#include<iostream>
using namespace std;
int main(){
	for(int num=1;num<=50;num++){
		if(num % 3==0 && num % 5==0){
			cout<<"\nFizzBuzz";
    	}
		else if(num % 3==0 && num % 5!=0){
			cout<<"\nFizz";
		}
		else if(num % 5==0 && num % 3!=0){
			cout<<"\nBuzz";
		}
		
		else{
			cout<<"\n"<<num;
		}
	}
}



//Bubble Sort


//remove spaces 
//this      is     so     much    fun
//output==> this so much fun
#include<iostream>
//print center triangle of n lines where n given by user
using namespace std;
int main()
{
  int a[50],size,index;//50 is the maximum size given. The user can enter anything up to 50. 
  cout<<"\nEnter size of array:";
  cin>>size;
  
  cout<<"\nEnter "<<size<<" elements.";
  for(index=0;index<size;index++)
  {
  	cout<<"\neneter element at a["<<index<<"] :";
  	cin>>a[index];
  }

 for(int i=size-1;i>0;i--)//passes
{ 
  for(int j=0;j<i;j++)//sort
	{
		if(a[j]>a[j+1])//comapre
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Sorted:";
	for(index=0;index<size;index++){
		cout<<a[index]<<",";
	}

}


//Even - Odd using Array

#include<iostream>
//find min/max
using namespace std;
int main()
{
  int a[]={2,5,3,7,4,9,10,1},size=8,index;
  int ocount=0,ecount=0;
  for(index=0;index<=8;index++){
  	if(a[index]%2==0)
  	ecount++;
  	else
  	ocount--;
  }
  	cout<<"even"<<ecount;
    cout<<"odd"<<ocount;

   
}


//Factorial

#include<iostream>
using namespace std;
int main(){
	int n,f=1;
	cout<<"Enter any number:";
 	cin>>n;
	for(int i=1;i<=n;i++){
		f=f*i;
	}
		cout<<"Factorial:"<<f;	
}