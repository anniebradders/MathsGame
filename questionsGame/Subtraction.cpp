#include "Subtraction.h"
#include <iostream>

using namespace std;

Subtraction::Subtraction()
{

}

Subtraction::~Subtraction()
{

}

void Subtraction::displayQuestion()
{
	cout << "What is " << getOp1() << " - " << getOp2() << " = ? " << "\n";
}

bool Subtraction::isCorrect()
{
	int actual = getOp1() - getOp2();
	int answer = getUserAnswer();

	if (actual == answer)
	{
		return true;
	}
	else {
		return false;
	}
}
