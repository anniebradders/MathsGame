#include "Addition.h"
#include <iostream>

using namespace std;

Addition::Addition() 
{

}

Addition::~Addition()
{

}

void Addition::displayQuestion()
{
	cout << "What is " << getOp1() << " + " << getOp2() << " = ? " << "\n";
}

bool Addition::isCorrect()
{
	int actual = getOp1() + getOp2();
	int answer = getUserAnswer();

	return (actual == answer);
}

