#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Function declaration for game
void guess(int randomNumber);

//Function for game
void guess(int randomNumber) {

	int guess;

	cout << "Enter a number between 1 and 100" << endl;
	cin >> guess;

	while(guess != randomNumber) {

		cout << "Wrong! Try again." << endl;
		if(guess < randomNumber) {
			cout << "Try guessing higher" << endl;
		}
		else if(guess > randomNumber) {
			cout << "Try guessing lower" << endl;
		}
		cout << "Enter a number between 1 and 100" << endl;
		cin >> guess;

	}

	cout << "Correct! You win the game." << endl;

}

int main() {

	int randomNumber;
	char answer;

	//Seed random number
	srand(time(NULL));

	//Generate random number between 1 and 100
	randomNumber = rand() % 100;

	cout << "Would you like to play a game? (y or n)" << endl;
	cin >> answer;

	if(answer == 'y') {
		guess(randomNumber);
	}
	else if (answer == 'n'){
		cout << "Goodbye" << endl;
		return 0;
	}

}