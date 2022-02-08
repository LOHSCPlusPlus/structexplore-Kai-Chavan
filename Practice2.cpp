#include <iostream>
using namespace std;

// Put the person struct here
struct Person {
  string firstname;
  string lastname;
  Person();
};
Person::Person(){
  firstname = "unknown";
  lastname = "unknown"
}





int main() {
	// Create two instances of person here, and assign the names.
Person a;
cout << "Person a's firstname is  " << a.firstname << ", and lastname is " << a.lastname << endl;

Person b;
 cout << "Person b's firstname is  " << b.firstname << ", and lastname is " << b.lastname << endl;







	// Add the prints here



	return 0;
}
