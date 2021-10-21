#pragma once
class Question
{
public:
	Question();
	virtual ~Question();

	virtual void displayQuestion() = 0;
	virtual bool isCorrect() = 0;
	void readAnswer();

protected:
	int getOp1();
	int getOp2();
	int getUserAnswer();


private:
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 10;
	int op1, op2;
	int useranswer;
};

