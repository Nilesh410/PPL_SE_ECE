	#include <iostream>
	using namespace std;
	
	int globalVar = 10;  // Global variable
	
	void modifyGlobal() {
	    globalVar += 5;  // Side effect: modifies global variable
	}
	
	int main() {
	    cout << "Before: " << globalVar << endl;
	    modifyGlobal();
	    cout << "After: " << globalVar << endl;
	    return 0;
	}

	void update(int &a, int &b) {
	    a = a + b;  // Both 'a' and 'b' may refer to the same variable
	}
	
	int main() {
	    int num = 10;
	    update(num, num);  // Aliasing occurs
	    cout << "num: " << num << endl;  // Output: 20
	}


