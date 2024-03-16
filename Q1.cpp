#include<iostream>
using namespace std;

class ComplexNumber {
	int real;
	int imaginary;
	friend ostream& operator <<(ostream&, const ComplexNumber&);
	friend istream& operator >>(istream&, ComplexNumber&);
public:
	ComplexNumber(int a = 0, int b = 0) {
		real = a;
		imaginary = b;
	}

	void Print() {
		cout << real << " + " << imaginary << "i" << endl;
	}

};

ostream& operator <<(ostream& output, const ComplexNumber& o) {
	output << o.real << " + ";
	output << o.imaginary << "i";
	return output;
}
istream& operator >>(istream& input, ComplexNumber& i) {
	cout << endl;
	cout << "Input Real part : ";
	input >> i.real;
	cout << "Input imaginary part : ";
	input >> i.imaginary;
	return input;
}
int main1() {
	ComplexNumber c1, c2(4, 5), c3;
	cout << "Enter c1, c2 and c3 (real and imaginary parts) one by one:\n";
	cin >> c1;
	cin >> c2;
	cin >> c3;
	cout << endl << "Output: " << endl << endl;
	cout << "c1 = " << c1 << "\nc2 = " << c2 << "\nc3 = " << c3 << endl;
	return 0;
}