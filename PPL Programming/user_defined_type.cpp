	struct Point {
	    int x;
	    int y;
	};


	class Rectangle {
	    int width, height;
	public:
	    Rectangle(int w, int h) : width(w), height(h) {}
	    int area() { return width * height; }
	};



