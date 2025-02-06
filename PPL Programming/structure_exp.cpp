	#include <iostream>
	using namespace std;
	
	struct Student {
	    string name;
	    int age;
	    float grade;
	};
	
	int main() {
	    Student s = {"XYZ", 22, 92.23};
	    cout << "Name: " << s.name << ", Age: " << s.age 
			 << ", Grade: " << s.grade << endl;
	    return 0;
	}


