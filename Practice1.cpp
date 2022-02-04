#include <iostream>
using namespace std;

// Put the person struct here
struct Person {
  string firstname;
  string lastname;
  
};







int main() {
	// Create two instances of person here, and assign the names.
Person a;
a.firstname = "Dorian";
a.lastname =  "Gray";

Person b;
b.firstname = "Charlie";
b.lastname =  "Brown";







	// Add the prints here


cout << "Person a's firstname is  " << a.firstname << ", and lastname is " << a.lastname << endl;
   cout << "Person b's firstname is  " << b.firstname << ", and lastname is " << b.lastname << endl;

	return 0;
}
