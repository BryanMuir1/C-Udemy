#include <iostream>
#include "Variable.h"


using namespace std;

void choseAddition()
{
	if (true) {
		cout << "what is " << firstNumber << " + " << secondNumber << endl;
		cin >> playerAnswer;
		correctAnswer = firstNumber + secondNumber;
		cout << "the correct answer is " << correctAnswer << endl;;
		numberOfAttempts = numberOfAttempts + 1;

		if (playerAnswer == correctAnswer)
		{
			cout << "well done" << endl;
			numberOfCorrectAnswers = numberOfCorrectAnswers + 1;
		}
		else if (playerAnswer != correctAnswer)
		{
			cout << "sorry that was no the right answer" << endl;
		}
	}
}
void choseSubtraction()
{
	if (true) {
		cout << "what is " << firstNumber << " - " << secondNumber << endl;
		cin >> playerAnswer;
		correctAnswer = firstNumber - secondNumber;
		cout << "the correct answer is " << correctAnswer << endl;;
		numberOfAttempts = numberOfAttempts + 1;

		if (playerAnswer == correctAnswer)
		{
			cout << "well done" << endl;
			numberOfCorrectAnswers = numberOfCorrectAnswers + 1;
		}
		else if (playerAnswer != correctAnswer)
		{
			cout << "sorry that was no the right answer" << endl;
		}
	}
}
void choseMultiplication()
{
	if (true) {
		cout << "what is " << firstNumber << " * " << secondNumber << endl;
		cin >> playerAnswer;
		correctAnswer = firstNumber * secondNumber;
		cout << "the correct answer is " << correctAnswer << endl;;
		numberOfAttempts = numberOfAttempts + 1;

		if (playerAnswer == correctAnswer)
		{
			cout << "well done" << endl;
			numberOfCorrectAnswers = numberOfCorrectAnswers + 1;
		}
		else if (playerAnswer != correctAnswer)
		{
			cout << "sorry that was no the right answer" << endl;
		}
	}
}
void choseDivision()
{
	if (true) {
		cout << "what is " << firstNumber << " / " << secondNumber << endl;
		cin >> playerAnswer;
		cout << "the correct answer is " << correctAnswer << endl;
		correctAnswer = firstNumber / secondNumber;
		numberOfAttempts = numberOfAttempts + 1;

		if (playerAnswer == correctAnswer)
		{
			cout << "well done" << endl;
			numberOfCorrectAnswers = numberOfCorrectAnswers + 1;
		}
		else if (playerAnswer != correctAnswer)
		{
			cout << "sorry that was no the right answer" << endl;
		}
	}
}
int main()
{

	do
	{
		cout << "choose a catagory" << endl;
		cout << "1 addition" << endl;
		cout << "2 subtraction" << endl;
		cout << "3 multiplication" << endl;
		cout << "4 division" << endl;

		cin >> playerCatagory;

		if (playerCatagory == 1)
		{
			choseAddition();
		}
		if (playerCatagory == 2)
		{
			choseSubtraction();
		}
		if (playerCatagory == 3)
		{
			choseMultiplication();
		}
		if (playerCatagory == 4)
		{
			choseDivision();
		}
		cout << numberOfCorrectAnswers << " out of " << numberOfAttempts << endl;
		cout << "would you like to try again 1 if yes 2 if no" << endl;

		cin >> playAgain;
		if (playAgain == 1)
		{

		}
		else if (playAgain == 2)
		{
			break;
		}
		else
		{
			cout << "unknown input " << endl;
		}
	} while (isPlaying = true);

}
