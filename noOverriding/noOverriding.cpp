#include <iostream>
using namespace std;

class baseClass final {
public:
	virtual void perkenalan() final{
		cout << "Halo saya Function dari derived Class";
	}
};

class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "Halo saya Fuunction dari derived Class";
	}
};

int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
}
