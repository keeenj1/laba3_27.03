#include <iostream>
#include <vector>
using namespace std; 

class Vector2d {
protected:
	int x; int y;
public:
	Vector2d(int x, int y) : x(x), y(y) {}
	virtual void test() = 0;
	virtual int len() {
		return (x ^ 2 + y^2) ^ 0,5;
	}
	virtual void print() {
		cout << "Len of vec (" << x << "," << y << ") is " << len();
	}
};

class Vector3d : public Vector2d {
protected:
	int z;
public:
	Vector3d(int x, int y, int z) : Vector2d(x, y), z(z) {}
	void test() {

	}
	virtual int len() override {
		return (x ^ 2 + y ^ 2 + z ^ 2) ^ 0,5;
	}
	virtual void print() override {
		cout << "Len of vec (" << x << "," << y << ',' << z << ") is " << len();
	}
};

int main() {

	

	Vector2d vc_static(4, 3);
	vc_static.print();
	Vector3d vc1_static(3, 4, 5);
	vc1_static.print();

	Vector2d* vc_ptr = new Vector2d(2, 4);
	vc_ptr->print();
	Vector3d* vc1_ptr = new Vector3d(2, 5, 7);
	vc1_ptr->print();

	return 0;
}