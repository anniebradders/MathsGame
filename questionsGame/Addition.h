#pragma once
#include "Question.h"
class Addition :
	public Question
{
public:
	Addition();
	virtual ~Addition();

	virtual void displayQuestion();
	virtual bool isCorrect();
private:

};

