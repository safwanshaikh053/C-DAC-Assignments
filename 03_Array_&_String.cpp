

//Problem no- 1



#include <iostream>
using namespace std;

int missing(int a[],int size){
	
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<size;i++){
		cout << a[i]<< " ";
	}
	cout << endl;
	for(int i=1;i<size-1;i++){
		
		if(a[i+1]-a[i]!=1){
			return i+1;
		}
	}
}

int main(){
	int a[50],size;
	cout << "\nEnter the size of array: ";
	cin >> size;
	a[size];
	cout << "\nEnter the elements in array: ";
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	int miss=missing(a,size);
	cout << miss;
}


//Problem no- 2

#include<iostream>
using namespace std;

int remove_dup(int a[],int size){
	for (int i=0;i<size;){
		if(a[i]==a[i+1]){
			for (int j=i;j<size-1;j++){
				a[j]=a[j+1];
			}
			size--;	
		}
		else 
		i++;
	}
	return size;
}


int main(){
  int a[50],size,index,sum=0;
  cout<<"\nEnter size of array:";
  cin>>size;
  
  cout<<"\nEnter "<<size<<" elements.";
  for(index=0;index<size;index++)
  {
  	cout<<"\nEnter element at a["<<index<<"] :";
  	cin>>a[index];
  }

  cout<<"\nEntered "<<size<<" elements are";
  for(index=0;index<size;index++)
  {
  	cout<<"\na["<<index<<"] :"<<a[index];
  }
  
  
  size=remove_dup(a,size);
  cout << "\nArray after removal of duplicates: ";
  for (index =  0; index <  size+1;   index++){
        cout << a[ index] << "  ";
    }
}

//Problem - 3

#include <iostream>
using namespace std;
int maxi(int a[],int size){
	int sum1=a[0];
	int sum2=a[0];
	for(int i=1;i<size;i++){
		if(a[i]+sum2>a[i]){
			sum2=sum2+a[i];
		}
		else{
			sum2=a[i];
		}
		if(sum2>sum1){
			sum1=sum2;
		}
	}
	cout << sum1;
	
}
int main(){
		int a[50],size;
	cout << "\nEnter the size of array: ";
	cin >> size;
	a[size];
	cout << "\nEnter the elements in array:\n";
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	maxi(a,size);
}
//Problem no- 4


#include <iostream>
using namespace std;
bool valid(string a){
	bool flag=true;
	for(int i=0;a[i]!='\0';i++){
		if((a[i]=='(' && a[i+1]!=')')||(a[i]=='{'&& a[i+1]!='}')||(a[i]=='['&&a[i]!=']')){
			flag=false;
		}
		
	}
	return flag;	
}
int main(){
		string a="()}[]";
		cout << (valid(a)?"true":"false");
}

//Problem no- 5
#include <iostream>
using namespace std;
void merge(int num1[],int size1,int num2[],int size2)
    {
        int size=size1+size2;

        for(int i=0;i<size2;i++)
        {
            num1[i+size1]=num2[i];
        }
                
        for(int i=size-1;i>0;i--)
        {
            for(int i=size-1;i>0;i--)//passes
            { 
                for(int j=0;j<i;j++)//sort
	            {
		            if(num1[j]>num1[j+1])//comapre
			        {
        				int temp=num1[j];
        				num1[j]=num1[j+1];
        				num1[j+1]=temp;
		        	}
		        }
	        }

        }
    }

int main()
{
    int num1[]={1,2,3},size1=3;
    int num2[]={2,5,6}, size2=3;
    
    merge(num1,size1,num2,size2);
    
    cout<<"New array elements are: ";
    for (int i = 0; i < size1+size2; i++)cout<<num1[i]<<" ";
}





//Problem no- 6
#include<iostream>
using namespace std;

int singnum(int nos[],int size){
	for(int i=0; i<size; i++){
	   int count=0;
		for(int j=0; j<size;j++){
			if(nos[i]==nos[j]){
				count++;
			}
		}
		if(count==1){
			return nos[i];
		}
	}
}
int main(){
	int nos[]={2,4,1,1,2,9,4},size=7;
	int singleNumber=singnum(nos,size);
	cout<<"The element which is not repeated is : "<< singleNumber;
}

//Problem no- 7

#include <iostream>
using namespace std;
int product(int a[],int size){
	
	for(int i=0;i<size;i++){
		int sum=1;
		for(int j=0;j<size;j++){
			if(i==j){
				continue;
			}
			
			sum*=a[j];
		}
		cout <<"["<< sum << ","<<"]";
		
	
	}

}
int main(){
		int a[50],size;
	cout << "\nEnter the size of array: ";
	cin >> size;
	a[size];
	cout << "\nEnter the elements in array:\n";
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	product(a,size);
}





