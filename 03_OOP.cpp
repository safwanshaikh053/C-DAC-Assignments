


//Problem - 1


#include<iostream>
using namespace std;
class book
{
  private:
	string author,title;
	int book_id;
	float amount;
	static int book_id_generator;	
  public:

	void addNew(string t,string a)
		{
			title=t;
			author=a;
			
			book_id=++book_id_generator;
			
		}
	void display_book()
	{
		cout<<"\n Book Id:"<<book_id;
		cout<<"\n Title:"<<title;
		cout<<"\n Author:"<<author;
	}
	void search_book(int b_id){
			b_id==book_id;
			cout<<"\nBook with book id "<<book_id<<" found";
		
		
	}
	

	
	int get_book_id()
	{
		return book_id;
	}
	
	
};

int book::book_id_generator=100;
	
int main() 
{
 int books=0;
 book b[100];
 string author,title;
 int book_id;
 int choice;
 bool flag;
 int acc_no;
 
 do
 {
 	cout<<"\n---------------";
 	cout<<"\n Library";
 	cout<<"\n---------------";
 	cout<<"\n1.Add a new book";
 	cout<<"\n2.Display all books";
 	cout<<"\n3.Search for a book";
 	cout<<"\n0.Exit";
 	cout<<"\n---------------";
 	cout<<"\n:";
 	cin>>choice;
 	switch(choice)
 	{
 		case 1:
 				cout<<"\nEnter Title,Author: "	;
 				cin>>title>>author;
 				
 				b[books].addNew(title,author);
 				cout<<"New book added!!";
 			
 				books++;
 				break;
 		case 2:
 				
 				 if (books == 0) {
        			cout << "\nNo books in library!!";
    			 }
				 else 
				 {
				 	for (int i = 0; i < books; i++) {
                      b[i].display_book();
        			}
    			}
    break;
 		case 3:
 				flag=false;
 				cout<<"\nEnter Book Id:";
 				cin>>book_id;
 				for(int i=0;i<books;i++)
 				  {
				if(book_id==b[i].get_book_id())
 						{
 						 flag=true;
 						 b[i].search_book(book_id);
 						 b[i].display_book();
						 break;
					}
			 	if(flag==false)
						cout<<endl<<book_id<<" Not found....";
 					}
 		
 				break;
 		case 0:
 				cout<<"Exiting....";
 				break;
 		default:
 				cout<<"Wrong choice given..";
 				break;
	 }
 }while(choice!=0);


}


//Problem - 2



#include<iostream>
using namespace std;

class time2;
class time1
{
	private:
		int hour, min;
	public:
		time1(int h,int m){
			hour=h;
			min=m;
		}
		friend void addTime(time1 t1,time2 t2);
};

class time2
{
	private:
		int hour,min;
	public:
	time2(int h,int m){
			hour=h;
			min=m;
		}
		friend void addTime(time1 t1,time2 t2);
};

void addTime(time1 t1,time2 t2){
	cout<<"\nThe time in minutes is "<<(t1.min+t2.min)%60;
	cout<<"\nThe time in hours is "<<(t1.hour+t2.hour)+((t1.min+t2.min)/60);
}

int main(){
	time1 t1(11,59);
	time2 t2(9,12);
	
	addTime(t1,t2);
}


//Problem - 3


#include<iostream>
using namespace std;
class Box{
	private:
	int height, breadth, length;
	public:
		Box(){									//default constructor
			length=0;
			breadth=0;
			height=0;
		}
		Box(int l, int b, int h){			
			length = l;
			breadth = b;
			height = h;
		}
		Box(int side){							
	    	length=breadth=height=side;
		}
		void display(){
			cout<<"\nLength : "<<length;
			cout<<"\nBreadth : "<<breadth;
			cout<<"\nHeight : "<<height;
		}
		int volume(){
			return length* breadth* height;
		}
		~Box(){
			cout<<"\nBox Object is Destroyed....";
		}	
};

int main(){
	cout<<"\nDefault Constructor";;
	Box b1;
	b1.display();
	cout<<"\nValue : "<<b1.volume()<<endl;
	
	cout<<"\nParameterized Constructor";;
	Box b2(10,5,2);
	b2.display();
	cout<<"\nVolume : "<<b2.volume()<<endl;
	
	cout<<"\nCube Constructor";
	Box b3(5);
	b3.display();
	cout<<"\nCube : "<<b3.volume()<<endl;
}