#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

//Practice with getline() function
void madLib();
//Practice with String.compare() function
void comparisions();


//A mad libs game
void madLib() {

	using namespace std;

	string answer1, answer2, answer3, answer4, answer5, Q1, Q2, Q3, Q4, Q5;

	Q1 = "Why is mom yelling?";
	Q2 = "Old people smell like...";
	Q3 = "Help! Someone has stolen my...";
	Q4 = "Today on 'Whatswrongwithmybody.com' Im searching...";
	Q5 = "Its too dark, what is that Im touching?";

	cout << Q1 << endl;
	cin.ignore();
	getline(cin, answer1);

	cout << Q2 << endl;
	getline(cin, answer2);

	cout << Q3 << endl;
	getline(cin, answer3);

	cout << Q4 << endl;
	getline(cin, answer4);

	cout << Q5 << endl;
	getline(cin, answer5);

	vector<string> madVector;
	madVector.push_back(Q1);
	madVector.push_back(answer1); 
	madVector.push_back(Q2); 
	madVector.push_back(answer2); 
	madVector.push_back(Q3); 
	madVector.push_back(answer3); 
	madVector.push_back(Q4); 
	madVector.push_back(answer4); 
	madVector.push_back(Q5); 
	madVector.push_back(answer5);

	cout << "\n\n";

	int counter = 0;
	for(string i : madVector) {
		cout << i << endl;
		counter++;

		if(counter % 2 == 0 && counter != 0) {
			 cout << "\n";
		}
	} 

}

void comparisions() {

	using namespace std;

	string answer;
	string phrase1, phrase2, word1, word2;

	cout << "what are we comparing, words or phrases?" << endl;
	cin >> answer;


	if(answer == "phrases") {

		cout << "Enter the first phrase, without spaces" << endl;
		cin >> phrase1;

		cout << "Enter the second phrase, without spaces" << endl;
		cin >> phrase2;

		if(phrase1.compare(phrase2) > 0) {
			cout << phrase1 << " comes after " << phrase2 << endl;
		}

		else if(phrase1.compare(phrase2) < 0) {
			cout << phrase1 << " comes before " << phrase2 << endl;
		}

		else if(phrase1.compare(phrase2) == 0) {
			cout << phrase1 << " and " << phrase2 <<" are equal" << endl;
		}

	}

	else if(answer == "words") {
		string word1, word2;

		cout << "Enter the first word" << endl;
		cin >> word1;

		cout << "Enter the second word" << endl;
		cin >> word2;

		if(word1.compare(word2) > 0) {
			cout << word1 << " comes after " << word2 << endl;
		}

		else if(word1.compare(word2) < 0) {
			cout << word1 << " comes before " << word2 << endl;
		}

		else if(word1.compare(word2) == 0) {
			cout << word1 << " and " << word2 <<" are equal" << endl;
		}

	}

}

int main() {

	using namespace std;

	int answer;

	cout << "Which game would you like to play?\n" << "1. Mad Libs\n" << "2. Comparisons" << endl;
	cin >> answer;


	if(answer == 1) {
		madLib();
	}

	else if(answer == 2){
		comparisions();
	}


	return 0;
}