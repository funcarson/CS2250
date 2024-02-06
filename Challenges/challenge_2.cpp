#include <iostream>
#include <string>
using namespace std;

//main
int main() {
	//variables used to hold input
	string name;
	string age;
	string gpa;
	string schoolName; 


	//Prompts the user for there name and stores it in name var
	cout << "Please enter your full name (first middle last)" << endl;
	getline(cin, name);
	cout << name << endl;

	//Prompts the user for there age and stores it in age var
	cout << "Please enter your age" << endl;
	getline(cin, age);
	cout << age << endl;

	//Prompts the user for there gpa and stores it in gpa var
	cout << "Please enter your gpa" << endl;
	getline(cin, gpa);
	cout << gpa << endl;

	//Prompts the user for there school name and stores it in schoolName var
	cout << "Please enter your school's name" << endl;
	getline(cin, schoolName);
	cout << schoolName << endl;

	//Puts it all together
	cout << "Welcome " + name + ", age " + age + ". Congratulations on your gpa of " + gpa + " at " + schoolName << endl;
}//End of main