# include <iostream>

using namespace std;

int main() {

	int aNum = 5;
	int aNum2 = 20;
	int aNum3 = 30;
	float bNum;
	long double cNum;
	bool dNum;
	string s;

	cout << sizeof(aNum) << endl;
	cout << sizeof(bNum) << endl;
	cout << sizeof(cNum) << endl;
	cout << sizeof(dNum) << endl;
	cout << sizeof(s) << endl;

	int* piNum = 0;
	float* pfNum;
	long double* pdNum;
	bool* pbNum;
	string* ps;

	cout << "Addres of pointers: " << endl;
	cout << sizeof(piNum) << endl;
	cout << sizeof(pfNum) << endl;
	cout << sizeof(pbNum) << endl;
	cout << sizeof(pdNum) << endl;
	cout << sizeof(ps) << endl;

	cout << piNum << endl;
	piNum = &aNum;
	cout << piNum << endl;
	cout << "Value of pointer = " << *piNum << endl;

	*piNum *= 2;
	cout << "Value of number = " << aNum << endl;

	cout << "Address before sum : " << piNum << endl;
	piNum += 1;
	cout << "Address before sum : " << piNum << endl;

	int* piNum2 = &aNum2;
	cout << "Value of pointer before : " << *piNum2 << endl;
	piNum2 += 1;
	cout << "Value of pointer after : " << *piNum2 << endl;

	return 0;
}
