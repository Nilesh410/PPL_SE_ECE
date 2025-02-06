	#include <iostream>
	using namespace std;
	
	template <typename T>
	T add(T a, T b) {
	    return a + b;
	}
	
	int main() {
	    cout << add(10, 20) << endl;        // Works with integers
	    cout << add(10.5, 20.5) << endl;    // Works with floats
	    return 0;
	}
	
	

