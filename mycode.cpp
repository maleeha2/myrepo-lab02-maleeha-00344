#include <iostream>
#include<iomanip>
#include "Header.h"

using namespace std;

int main()
{

	matrix matrixA;
	matrix matrixB;
	matrix answer;
	int rowA, colA, rowB, colB;


	cout<<"enter the size of first matrix"<<endl;
	cin>>rowA>>colA;
	cout<<"enter the size of second matrix"<<endl;
	cin>>rowB>>colB;


	cout<<"enter the first matrix"<<endl;
	matrixA.read(rowA, colA);

	cout<<"enter the second matrix"<<endl;
	matrixB.read(rowB, colB);


	int option;
	cout << endl << "Enter 1 for addition" << endl << "Enter 2 for subtraction" << endl << "Enter 3 for multiplication" << endl;
	cin >> option;

	if(option == 1)
	{
		answer=matrixA.add(matrixB);
		answer.display();
	}
	else if (option == 2)
	{
		answer=matrixA.subtract(matrixB);
	}
	else if (option == 3)
	{
		answer=matrixA.multiply(matrixB);
	}
	else
	{
		cout << "wrong input" << endl;
	}

	return 0;
}

