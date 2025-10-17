//Task 1

#include <iostream>
 #include <iomanip>
 using namespace std;
 int main() {
 cout <<setw(7)<<"X";
 for(int l=6;l>=2;l--)//5 times
 	cout<<endl<<setw(l)<<"X"<<setw(7-l)<<"X";
 	
 /*for(int l=6;l>=2 && r<=5;l--,r++)//5 times
 	cout<<endl<<setw(l)<<"X"<<setw(6)<<"X";*/
 cout <<endl<<setw(7) << setfill('X')<<""<<setfill(' ');
 
 return 0;
 }


//Task - 2

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	cout<<"X";
	for(int i=1;i<4;i++){
	cout<<endl<<"X"<<setw(i)<<"X";
    }
    cout <<endl<<setw(5) << setfill('X')<<""<<setfill(' ');
}


//Task-3


//vowelsandconsonants
#include<iostream>
using namespace std;
int main(){
	string line;
	int i,vow_count=0,con_count=0;
	cout<<"enter a sentence:";
	getline(cin,line);
	  for(i=0;line[i]!='\0';i++){
	  	if(line[i]>='a'&& line[i]<='z'){
		  
	  	if(line[i]=='a'|| line[i]=='e'|| line[i]=='i'|| line[i]=='o'|| line[i]=='u'|| line[i]=='A'|| line[i]=='E'|| line[i]=='I'|| line[i]=='O'|| line[i]=='U'){
	  		vow_count++;
		  }
		  else{
		  	con_count++;
		  }
	    }
	  }
	  
	   cout<<"\nVowels:"<<vow_count;
	   cout<<"\nConsonents:"<<con_count;
	   
	       
}



//Task-4


#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string make;
    string model;

public:
    Vehicle(string vehicle_make, string vehicle_model) {
        make = vehicle_make;
        model = vehicle_model;
    }

    void display_info() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
    }
};

class Car : public Vehicle {
protected:
    int num_doors;

public:
    Car(string car_make, string car_model, int doors)
        : Vehicle(car_make, car_model) {
            num_doors = doors;
        }

    void display_info() {
        Vehicle::display_info();
        cout << "Number of Doors: " << num_doors << endl;
    }
};

class ElectricCar : public Car {
private:
    int battery_capacity;

public:
    ElectricCar(string electric_make, string electric_model, int doors, int capacity)
        : Car(electric_make, electric_model, doors) {
            battery_capacity = capacity;
        }

    void display_info() {
        Car::display_info();
        cout << "Battery Capacity: " << battery_capacity << " kWh" << endl;
    }
};

int main() {
    string make = "Tesla";
    string model = "Model S";
    ElectricCar my_car(make, model, 4, 100);

    cout << "Displaying information for my Electric Car:" << endl;

    my_car.display_info();

    return 0;
}



//Task-5


#include <iostream>
#include <set>
using namespace std;
int main() {
    int list[] = {10, 2, 5, 10, 20, 5, 2, 10, 5};
    int n = sizeof(list) / sizeof(list[0]);
	 set<int> uniqueElements;
	    for (int i = 0; i < n; i++) {
        uniqueElements.insert(list[i]);
    }
	 cout << "The frequency of each element is:\n";
    for (auto elem : uniqueElements) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (list[i] == elem) {
                count++;
            }
        }
        cout << elem << " -> " << count << endl;
	}
    return 0;
}


//Task-6


#include<iostream>
using namespace std;
 int main(){
 float side1, side2, side3;
 cout<<"Enter sides of a triangle";
 cin>> side1>>side2>>side3;
 if(side1==side2==side3){
 	cout<<"Equilateral Triangle";
 }
 else if(side1 == side2|| side1==side3 || side2 == side3){
 	cout<<"Isosceles Triangle";
 }
 else {
 	cout<<"Scalene Triangle";
 }
 }


 //Task-7


 #include<iostream>
using namespace std;
template <typename T>
	T myAdd(T x,T y){
		return x+y;
	}
int main(){
	cout<<"Sum of float :"<<myAdd<float>(3.7,8.3)<<endl;
	cout<<"Sum of Integers :"<<myAdd<int>(3,8)<<endl;
	cout<<"Sum of string :"<<myAdd<string>("Arsalan","Junaid")<<endl;
	//char does not concat
}

//Task-8


#include<iostream>
using namespace std;
// overloading question --> calculate area of circle if one parameter passed,
//							calculate area of rectangle if two parameter passed
void info(string name, string state, string nationality = "India")
{
	cout<<"\nName : "<<name<<"\nState : "<<state<<"\nNationality : "<<nationality;
}
int main(){
info("Safwan","Maharshtra");
}



