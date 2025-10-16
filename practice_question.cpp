#include<iostream>
using namespace std;
/*
friend function:
Friend function is not a member function.
Still has all the rights of a member function.
A friend function is an outsider which can still access private data. 
friend function either uses reference or direct object for access. 
One must pass an object to a friend using the '.' operator to access private data. 
User's friend keyword during declaration.
It is a prototype within a class, but declared and defined outside.
Will be called directly without any object.  
*/

class Human
{
  private:
	string name,gender;
  public:
	//setter
	Human()//default constructor
	{
		cout<<"\nobject created...";
		name="None";
		gender="unknown";
	}
	void set_Human(string n,string g)
		{
			name=n;
			gender=g;
		}
	//getter
	void display_Human()
		{
			cout<<"\nMember Name is:"<<name<<" I am a "<<gender;
		}
	friend void access(Human &h);
};
	
   void access(Human &h)
		{
			cout<<"\nFriend here accessing private data:Name is:"<<h.name<<"  gender is:"<<h.gender;
			h.name="AMAR";
		}
int main() 
{
	Human h;//Created object H of type human. 
	h.set_Human("amar","male");
	h.display_Human();
	access(h);
	h.display_Human();

	
}


//Task

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int m,n,i,j;
	cout<<"Enter length";
	cin>>n;
	cout<<"\nEnter breadth";
	cin>>m;
	for(int i=1;i<=m;i++){
	cout<<setw(n)<<setfill('X')<<""<<endl;
    }
    //cout <<endl<<setw(5) << setfill('X')<<""<<setfill(' ');
}


//task 


#include <iostream>
#include <list>

using namespace std;
int FindMin_i(list<int> numbers, int i) {
    
    numbers.sort();
        int count = 1;
    for (int num : numbers) {
        if (count == i)
            return num;
        count++;
    }
       return -1; 
}

int main() {
    list<int> numbers = {11, 2, 66, 5, 44, 98, 12, 45, 89, 11};
    
    cout << "Original List:" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Sort and display the sorted list
    list<int> sortedNumbers = numbers;
    sortedNumbers.sort();
    
    cout << "\nAfter sorting:" << endl;
    for (int num : sortedNumbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Ask user for the value of i
    int i;
    cout << "\nEnter the value for 'i' (1-" << numbers.size() << "): ";
    cin >> i;
    
    // Error handling
    if (i < 1 || i > numbers.size()) {
        cout << "Error: i must be between 1 and " << numbers.size() << "." << endl;
        return 1;
    }
    
    // Find and display the i-th minimum element
    int ithMin = FindMin_i(numbers, i);
    cout << "\nThe " << i;
    
    // Suffix for ordinal indicator
    if (i % 10 == 1 && i != 11)
        cout << "st";
    else if (i % 10 == 2 && i != 12)
        cout << "nd";
    else if (i % 10 == 3 && i != 13)
        cout << "rd";
    else
        cout << "th";
    
    cout << " minimum element is: " << ithMin << endl;
    
    return 0;
}



//Task


#include<iostream>
using namespace std;
 int main(){
 	int num1, num2, num3;
 	cout<<"Enter three Numbers:";
 	cin>>num1>>num2>>num3;
 	if(num1 > num2 && num1 > num3)
 	{
 		cout<<"Largest number"<<num1;
	 }
	 else if(num2 > num1 && num2 > num3)
 	{
 		cout<<"Largest number: "<<num2;
	 }
	 else if(num3 > num1 && num3 > num2s)
	 {
	    cout<<"Largest number"<<num3;
	 }
	 else{
	 	cout<<"All Equal";
	 }
 }


 //task


 #include <iostream>
#include<vector>

 using namespace std;
 
 int sum_it(int no)
 {
  int sum=0;
  while(no>0)
  {
  	int digit=no%10;
  	no=no/10;
  	sum+=digit;
  }
  return sum;
 }
 
 int with_in_9(int number)
 {
 	while(number>9)
 		number=sum_it(number);
 	return number;
 }
 
 string i_am(int numrology_number)
 {
 	vector<string> v={" ","The Leader","The Peacemaker","The Communicator","The Builder","The Adventurer","The Caregiver"
                       ,"The Seeker","The Powerhouse","The Humanitarian"};
    return v[numrology_number];
}
 
 int main() 
 {
  string dob,name;
  cout<<"Enter Your name:";
  cin>>name;
  cout<<"Enter dob in dd-mm-yyyy:";
  cin>>dob;
  int sum=0;
  for(char c:dob)
   {
   	if (c!='-')
	  	sum+=c-'0';
   }
  int numrology_number= with_in_9(sum);
  cout<<"\n"<<name<<" your numrology number is: "<<numrology_number<<" Type:"<<i_am( numrology_number);
  
  
 return 0;
 }


//Task

#include<iostream>
using namespace std;
int main(){
	int i=1;
	cout<<"While";							//While loop
	while(i<=10){
		cout<<i<<",";
		i++;
	}
	
	cout<<"\n Do While";
	do
	{
		cout<<i<<",";
		i++;	
	}while(i<=10);	// Do While loop: here one statement will be executed at all times then the condition will be checked.
	{
		cout<<i<<",";
		i++;	
	}
	
	
	
	
	for(int a=1;a<=5;a++){
	cout<<"\n"<<a<<",";               //For Loop
}
}
