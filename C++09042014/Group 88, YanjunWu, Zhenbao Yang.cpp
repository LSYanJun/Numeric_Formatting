#include <iostream>
using namespace std;

int main()
{
	double FirVar;
	int SecVar;
	cout << "Please input a decimal number :" << endl;
	cin >> FirVar;
	cout << "The decimal number you input as an integer is " << static_cast<int>(FirVar) << endl;
	SecVar = FirVar;
	cout << "The integer variable is " << SecVar << endl;
	//system("pause")
	return 0;
}
//Group 88, Group members: Yanjun Wu, Zhenbao Yang