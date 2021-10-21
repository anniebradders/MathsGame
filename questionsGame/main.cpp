#include <crtdbg.h>
#include "Addition.h"
#include "Subtraction.h"
#include <iostream>

using namespace std;

int main() {
#ifdef _DEBUG
	// _CrtSetBreakAlloc(87);
	_onexit(_CrtDumpMemoryLeaks);
#endif

	const int NO_OF_QUESTIONS = 5;
	Question* questions[NO_OF_QUESTIONS];

	cout << "Welcome to Twenty Questions\n===========================\nTwenty random addition or subtraction questions with operands between 1 and 20.\nHow many can you get right ?\n\n";



	for (int i = 0; i < NO_OF_QUESTIONS; i++)
	{
		if (rand() < (RAND_MAX / 2)) {
			questions[i] = new Addition();
		}
		else {
			questions[i] = new Subtraction();
		}
		questions[i]->displayQuestion();
		questions[i]->readAnswer();
	}

	int score = 0;
	for (int i = 0; i < NO_OF_QUESTIONS; i++)
	{
		// count the number that are correct
		if (questions[i]->isCorrect())
		{
			++score;
		}
	}
	
	cout << "\nYou scored " << score << " out of " << NO_OF_QUESTIONS << "\n";

	for (int i = 0; i < NO_OF_QUESTIONS; i++)
	{
		delete questions[i];
	}

	return 0;
}