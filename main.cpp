#include <iostream>
using namespace std;


int main()
{
	int *p1, *p2;		//Pointers *p1 and *p2 are initialized
	int a, b;		//Variables a and b are initialized
	a = 5;			//Variable a is assigned value of 5
	b = 10;		//Variable b is assigned value of 10
	p1 = &a;		//Pointer p1 does not need * are initialization
				//and is assigned the value of the address of variable a
	p2 = &b;		//Pointer p2 does not need * are initialization
				//and is assigned the value of the address of variable b
	cout << "p1 = " << p1 << endl;		//p1 is the value of the address a (0x1234F)
	cout << "p2 = " << p2 << endl;		//p2 is the value of the address b (0x12340)
	cout << "*p1 = " << *p1 << endl;		//*p1 takes the value at address value 0x1234F which 							//is 5
	cout << "*p2 = " << *p2 << endl;		//*p2 takes the value at address value 0x12340 which 							//is 10

	*p1 = 50;		//Pointer p1 is set with a value of 50 which changes a to 50 also as they 				//share the address
	*p2 = *p2 + 2;	//Pointer p2 is set with its current value + 2, 10 + 2 = 12, which also 				//shares the address with b so b is also changed to 12
	cout << "*p1 = " << *p1 << endl;	//*p1 shows value of 50
	cout << "*p2 = " << *p2 << endl;	//*p2 shows value of 12
	cout << "a = " << a << endl;	//*p1 is an alias for a in this example so also has value 						//of 50
	cout << "b = " << b << endl;	//*p2 is an alias for b in this example so also has value 						//of 12

	return 0;
}
