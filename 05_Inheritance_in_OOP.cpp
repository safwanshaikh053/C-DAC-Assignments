

//TASK 1

#include <iostream>
#include <string>
using namespace std;


class Student {
private:
    int studentID;
    string name;
    float score;

public:
   
    Student(int id, string n, float s) {
        studentID = id;
        name = n;
        score = s;
    }

   
    void display_details() {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
    }
};

int main() {
    // Create a Student object and initialize it
    Student s1(101, "Pratik", 92.5);

    
    s1.display_details();

    return 0;
}

//TASK 2

#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    string title;
    string author;
    string isbn;

public:

    LibraryBook(string t, string a, string i) {
        title = t;
        author = a;
        isbn = i;
        cout << "Book created: " << title << " by " << author << " (ISBN: " << isbn << ")" << endl;
    }


    LibraryBook(string t, string a) {
        title = t;
        author = a;
        isbn = "N/A";
        cout << "Book created: " << title << " by " << author << " (No ISBN)" << endl;
    }

    // Destructor
    ~LibraryBook() {
        cout << "Book destroyed: " << title << endl;
    }

    void display() {
        cout << "Title: " << title << "\nAuthor: " << author << "\nISBN: " << isbn << endl;
    }
};

int main() {
    {
        cout << "Creating first book (with ISBN)..." << endl;
        LibraryBook book1("The Great Gatsby", "F. Scott Fitzgerald", "9780743273565");
        book1.display();
    } // book1 goes out of scope here

    cout << endl;

    {
        cout << "Creating second book (without ISBN)..." << endl;
        LibraryBook book2("To Kill a Mockingbird", "Harper Lee");
        book2.display();
    } // book2 goes out of scope here

    return 0;
}

//TASK 3


#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    int id;
    float price;

public:
   
    Product(string n = "", int i = 0, float p = 0.0) {
        name = n;
        id = i;
        price = p;
    }

   
    void display_details() {
        cout << "Product ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    
    Product products[3] = {
        Product("Laptop", 101, 750.50),
        Product("Smartphone", 102, 499.99),
        Product("Headphones", 103, 79.99)
    };

    for (int i = 0; i < 3; i++) {
        products[i].display_details();
    }

    return 0;
}


//TASK 4


#include <iostream>
using namespace std;

class Calculator {
public:
    
    int add(int a, int b) {
        return a + b;
    }

    
    double add(double a, double b) {
        return a + b;
    }

    
    double add(int a, int b, double c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc; 
    cout << "add(int, int): " << calc.add(5, 10) << endl;
    cout << "add(double, double): " << calc.add(3.5, 2.7) << endl;
    cout << "add(int, int, double): " << calc.add(2, 3, 4.5) << endl;

    return 0;
}

//TASK 5


#include <iostream>
using namespace std;

class Vector2D {
private:
    double x, y;

public:
   
    Vector2D(double xVal = 0.0, double yVal = 0.0) {
        x = xVal;
        y = yVal;
    }

    
    Vector2D operator+(const Vector2D& other) {
        return Vector2D(x + other.x, y + other.y);
    }

    
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    
    Vector2D v1(3.5, 4.5);
    Vector2D v2(1.5, 2.5);

   
    Vector2D result = v1 + v2;

    
    cout << "v1 + v2 = ";
    result.display();

    return 0;
}


//TASK 6

#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int employee_id;

public:
   
    Employee(string n, int id) {
        name = n;
        employee_id = id;
    }

    
    void display_info() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employee_id << endl;
    }
};


class Manager : public Employee {
private:
    int team_size;

public:
    
    Manager(string n, int id, int t_size) : Employee(n, id) {
        team_size = t_size;
    }

    void display_info() {
        
        Employee::display_info();
        cout << "Team Size: " << team_size << endl;
    }
};

int main() {
 
    Manager m1("Pratik Sadakal", 101, 5);
    
    cout << "Manager Information:" << endl;
    m1.display_info();

    return 0;
}



//TASK 7

#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
   
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Student : public Person {
protected:
    int student_id;

public:
  
    Student(string n, int a, int id) : Person(n, a) {
        student_id = id;
    }

    
    void display_info() {
        Person::display_info(); // 
        cout << "Student ID: " << student_id << endl;
    }
};


class GraduateStudent : public Student {
private:
    string thesis_title;

public:
   
    GraduateStudent(string n, int a, int id, string thesis)
        : Student(n, a, id) {
        thesis_title = thesis;
    }

    
    void display_info() {
        Student::display_info(); // Call Student's display_info()
        cout << "Thesis Title: " << thesis_title << endl;
    }
};

int main() {
  
    GraduateStudent grad("Safwan", 25, 2023001, "AI in Healthcare");

    cout << "Graduate Student Information:" << endl;
    grad.display_info();

    return 0;
}


//TASK 9



#include<iostream>
using namespace std;
class BankAccount;
void perform_audit(BankAccount & account);
class BankAccount{
	private:
		double balance;
	public:
		BankAccount(){
			balance = 0;
			cout<<"initial balance:"<<endl;
		}
		void deposit(double amount){
			cout<<"Depositing "<<amount<<"...."<<endl;
			balance+=amount;
			cout<<"currebt balance:"<<balance<<endl;
		}
		
		friend void perform_audit(BankAccount & account);
			
};

void perform_audit(BankAccount & account){
	cout<<"Audit performed. Audit Balance:"<<account.balance<<endl;
}
int main(){
	BankAccount account;
	account.deposit(500.0);
	perform_audit(account);
	return 0;
}



//TASK - 10


#include<iostream>
using namespace std;
class Document{
	public:
		virtual void print()=0;
		virtual ~Document() {
		}
		
};
class PDFDocument:public Document{
	   public:
	   	  void print() override{
			 cout<<"Printing PDF Document...."<<endl;
			 }
};
class WordDocument:public Document{
	    public:
	    	void print() override{
			cout<<"Printing Word Document..."<<endl;
			}
		
};

int main(){
  Document* pdfDoc= new PDFDocument();
  Document* wordDoc= new WordDocument();
  
  pdfDoc->print();
  wordDoc->print();
  delete pdfDoc;
  delete wordDoc;
  return 0;	
}









