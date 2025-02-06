	class Rectangle {
	public:
	    int length, width;
	
	    int area() {
	        return length * width;
	    }
	};
	
	int main() {
	    Rectangle rect = {10, 5};
	    cout << "Area: " << rect.area() << endl;
	    return 0;
	}


