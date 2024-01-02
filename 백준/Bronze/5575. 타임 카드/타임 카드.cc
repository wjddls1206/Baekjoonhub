#include <iostream>

using namespace std;

class Time {

public:
	int in[3];
	int out[3];
	int result[3];

	void set_in();
	void set_out();
	void sort();

};

void Time::set_in() {

	for (int i = 0; i < 3; i++) {

		cin >> in[i];

	}

}

void Time::set_out() {

	for (int i = 0; i < 3; i++) {

		cin >> out[i];

	}

}

void Time::sort() {

	if (in[2] > out[2]) {
		if (out[1] == 0) {
			out[0] -= 1;
			out[1] = 60;
		}
		out[1] -= 1;
		out[2] += 60;
	}

	if (in[1] > out[1]) {

		out[1] += 60;
		out[0] -= 1;

	}

}

int main() {

	Time a;
	a.set_in();
	a.set_out();
	a.sort();

	a.result[2] = a.out[2] - a.in[2];
	a.result[1] = a.out[1] - a.in[1];
	a.result[0] = a.out[0] - a.in[0];

	Time b;
	b.set_in();
	b.set_out();
	b.sort();

	b.result[2] = b.out[2] - b.in[2];
	b.result[1] = b.out[1] - b.in[1];
	b.result[0] = b.out[0] - b.in[0];

	Time c;
	c.set_in();
	c.set_out();
	c.sort();
	
	c.result[2] = c.out[2] - c.in[2];
	c.result[1] = c.out[1] - c.in[1];
	c.result[0] = c.out[0] - c.in[0];

	cout << a.result[0] << " " << a.result[1] << " " << a.result[2] << endl;
	cout << b.result[0] << " " << b.result[1] << " " << b.result[2] << endl;
	cout << c.result[0] << " " << c.result[1] << " " << c.result[2] << endl;

	return 0;
}