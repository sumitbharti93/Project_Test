#include <iostream>
using namespace std;
struct student
{
	int rollno = 10;;
	int marks=95;
};
int main()
{
	struct student amit;   // struct is the derived data type. Student is the tag given to struct. while amit is the 
	// variable. Also while declaring variable struct is optional. 
	struct student* sumit = &amit;  // we have declared another pointer varibale which points to the vraible amit.
	cout << amit.rollno << endl;  
	cout << sumit->marks; // syntax to access data of amit using pointer variable. 
	return 0;

}

