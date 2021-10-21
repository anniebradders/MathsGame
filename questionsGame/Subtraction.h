#pragma once
#include "Question.h"
class Subtraction :
	public Question
{
public:
	Subtraction();
	virtual ~Subtraction();

	virtual void displayQuestion();
	virtual bool isCorrect();
private:

};

