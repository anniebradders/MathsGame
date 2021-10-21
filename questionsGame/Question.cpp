#include "Question.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

Question::Question()
{
	op1 = MIN_VALUE + (rand() % (MAX_VALUE - MIN_VALUE + 1));
	op2 = MIN_VALUE + (rand() % (MAX_VALUE - MIN_VALUE + 1));
}

Question::~Question()
{

}

int Question::getOp1()
{
	return op1;
}

int Question::getOp2()
{
	return op2;
}

void Question::readAnswer()
{
	cin >> useranswer;
}

int Question::getUserAnswer()
{
	return useranswer;
}
