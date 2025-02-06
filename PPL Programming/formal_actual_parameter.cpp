	#include <iostream>
	using namespace std;
	
	void display(int num) { // `num` is the formal parameter
	    cout << "Value: " << num << endl;
	}
	
	int main() {
	    int x = 10;
	    display(x); // `x` is the actual parameter
	    return 0;
	}



