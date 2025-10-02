
//TASK - 1



#include <iostream>
#include <fstream>
#include <string>
#include<chrono>
#include<ctime>

using namespace std;

string secure(string line,int key){
	string processed_data="";
	for(char c:line){
		int d=c;
		processed_data+=char(d^key);
	}
	return processed_data;
	 
}

int main(){
	string name ,data,line;
	int key,choice;
	
	cout<<"\n -------- MY DIARY--------";
	
	do{
		cout<<endl<<"  Select the choice: ";
		cout<<"\n  1. Read a file . ";
		cout<<"\n  2. Write a file . ";
		cout<<"\n  0. Exit";
		cout<<"\n  Your choice : ";
		cin>>choice;
		
		switch(choice){
			case 1:{
			
			
				cout <<"Enter username: ";
				cin>>name;
				ifstream myFile(name+".txt");
				if(!myFile.is_open()){
					cerr<<"Couldn't find file with"<<name<<".txt"<<endl;
					return 1;
				}
				else{
					cout<<"\nEnter Secure key:";
					cin>>key;
					while(getline(myFile,data)){
					
						cout<<secure(data,key)<<endl;
						
					}
				    myFile.close();
				}
				break;
				}
			
			case 2:{
				
			
				
				cout<<"\nEnter username:";
				cin>>name;
				ofstream myFile(name+".txt",ios::app);
				if(!myFile.is_open()){
					cerr<<"Couldn't find file with"<<name<<".txt"<<endl;
					return 1;
				}else{
					cout<<"\nEnter secure key:";
					cin>>key;
					getline(cin,data);
					auto now = chrono::system_clock::now();
					time_t now_time = chrono::system_clock::to_time_t(now);
					myFile<<"\n <----------New Entry Added on Time :"<< ctime(&now_time)<<"---------->"<<endl;
					
					cout<<"\n File is ready to write.\n";
					cout << "\n(Type QUIT on a new line to finish writing)\n\n";
					
					while(true){
					
					getline(cin,data);
					if(data=="QUIT"){
						cout<<"Terminatting the writing process.Storing the file...";
						break;
					}
					myFile<<secure(data,key)<<endl;
					}
					myFile.close();
				}
				break;
				}
			case 0:
				cout<<"Exiting the process...";
				break;
				
			default:
				cout<<"Wrong choice selected!!";
				break;
				
				
				
				
				
		}
		
	}while(choice!=0);
	
    

    
}





//TASK - 2


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool digit(char ch) {
    return (ch >= '0' && ch <= '9');
}

bool letter(char ch) {
    return ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') );
}

bool letornum(char ch) {
    return digit(ch) || letter(ch);
}

bool space(char ch) {
    return (ch == ' ');
}

bool whitespace(char ch) {
    return (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r');
}

int main() {
    string filePath;
    cout << "Enter a path: ";
    getline(cin, filePath);

    ifstream inputFile(filePath);

    if (!inputFile.is_open()) {
        cout << "ERROR, Cannot open " << endl;
        return 1;
    }

    char ch;
    int charcount = 0;
    int digitcount = 0;
    int lettercount = 0;
    int symbolcount = 0;
    int spacecount = 0;
    int linecount = 0;
    int wordcount = 0;
    bool inWord = false;

    while (inputFile.get(ch)) {
        charcount++;

        if (digit(ch)) {
            digitcount++;
        }
        else if (letter(ch)) {
            lettercount++;
        }

        if (space(ch)) {
            spacecount++;
        }

        if (ch == '\n') {
            linecount++;
        }

        if (!letornum(ch) && !whitespace(ch)) {
            symbolcount++;
        }

        if (letornum(ch)) {
            inWord = true;
        }
        else if (whitespace(ch)) {
            if (inWord) {
                wordcount++;
                inWord = false;
            }
        }
    }
    if (inWord) {
        wordcount++;
    }

    inputFile.close();

    cout << "Number of Characters : " << charcount << endl;
    cout << "Number of Digits     : " << digitcount << endl;
    cout << "Number of Letters    : " << lettercount << endl;
    cout << "Number of Symbols    : " << symbolcount << endl;
    cout << "Number of Spaces     : " << spacecount << endl;
    cout << "Number of Lines      : " << linecount + 1 << endl;
    cout << "Number of Words      : " << wordcount << endl;

    return 0;
}

