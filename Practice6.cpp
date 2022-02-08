#include <iostream>
using namespace std;

// Put the person struct here
struct Person {
  string firstname;
  string lastname;
  Person();
  Person(string fname, string lname);
};
Person::Person(){
  firstname = "unknown";
  lastname = "unknown";
}
Person::Person(string fname, string lname){
  firstname = fname;
  lastname = lname;
}

void PrintPerson(Person k){
  cout << "First name = " << k.firstname << " , Lastname = " << k.lastname << endl;
}
void ChangeLastName (Person &k, string ln){
  k.lastname = ln;
}




int main() {
	// Create two instances of person here, and assign the names.
Person a;
PrintPerson(a);

Person b("linus", "Van Pelt");
PrintPerson(b);
ChangeLastName(b,"Torvald");
PrintPerson(b);







	// Add the prints here



	return 0;
}
