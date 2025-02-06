	int mul(int a, int b) {
	    return a * b;
	}
	
	int main() {
	    int x = 5;
	    int y = 10;
	    printf("%d\n", mul(x, y)); // Works for integers only.
	    // mul(10.5, 20.5); // Error: incompatible types
	    return 0;
	}



