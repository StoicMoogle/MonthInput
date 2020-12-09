#include <iostream>
#include <string>
using namespace std;

class Month {   //class Month, with a constructors of the first 3 letters of the month OR the number of the month
public:
	Month(char firstInput, char secondInput, char thirdInput);
	Month(int numberInput);
	Month();
	void inputChar(char LetterOne, char LetterTwo, char LetterThree);
	void integerToMonth(int numberOfMonth);
	void outputMonth();
	void nextMonth();
private:
	int monthNum;
	char firstLetter;
	char secondLetter;
	char thirdLetter;
	string monthName;
};

int main() { //construct a Month object with either 3 chars or 1 integer
	Month monthOne('d', 'E', 'c');
	Month monthTwo(5);
}



Month::Month(char firstInput, char secondInput, char thirdInput) { //show name of the month from the first 3 letters.
	firstLetter = firstInput;
	secondLetter = secondInput;
	thirdLetter = thirdInput;

	inputChar(firstLetter, secondLetter, thirdLetter);
	integerToMonth(monthNum);
	outputMonth();
}

Month::Month(int numberInput) { //show name of the month from the month number
	monthNum = numberInput;
	integerToMonth(numberInput);
	outputMonth();
}

Month::Month() {

}

//If the 3-char constructor is used, translate them into the number of the month
void Month :: inputChar(char LetterOne, char LetterTwo, char LetterThree) {
	if ((LetterOne == 'J' || LetterOne == 'j') && (LetterTwo == 'A' || LetterTwo == 'a') && (LetterThree == 'N' || LetterThree == 'n')) {
		monthNum = 1;
	}
	else if ((LetterOne == 'F' || LetterOne == 'f') && (LetterTwo == 'E' || LetterTwo == 'e') && (LetterThree == 'B' || LetterThree == 'b')) {
		monthNum = 2;
	}
	else if ((LetterOne == 'M' || LetterOne == 'm') && (LetterTwo == 'A' || LetterTwo == 'a') && (LetterThree == 'R' || LetterThree == 'r')) {
		monthNum = 3;
	}
	else if ((LetterOne == 'A' || LetterOne == 'a') && (LetterTwo == 'P' || LetterTwo == 'p') && (LetterThree == 'R' || LetterThree == 'r')) {
		monthNum = 4;
	}
	else if ((LetterOne == 'M' || LetterOne == 'm') && (LetterTwo == 'A' || LetterTwo == 'a') && (LetterThree == 'Y' || LetterThree == 'y')) {
		monthNum = 5;
	}
	else if ((LetterOne == 'J' || LetterOne == 'j') && (LetterTwo == 'U' || LetterTwo == 'u') && (LetterThree == 'N' || LetterThree == 'n')) {
		monthNum = 6;
	}
	else if ((LetterOne == 'J' || LetterOne == 'j') && (LetterTwo == 'U' || LetterTwo == 'u') && (LetterThree == 'L' || LetterThree == 'l')) {
		monthNum = 7;
	}
	else if ((LetterOne == 'A' || LetterOne == 'a') && (LetterTwo == 'U' || LetterTwo == 'u') && (LetterThree == 'G' || LetterThree == 'g')) {
		monthNum = 8;
	}
	else if ((LetterOne == 'S' || LetterOne == 's') && (LetterTwo == 'E' || LetterTwo == 'e') && (LetterThree == 'P' || LetterThree == 'p')) {
		monthNum = 9;
	}
	else if ((LetterOne == 'O' || LetterOne == 'o') && (LetterTwo == 'C' || LetterTwo == 'c') && (LetterThree == 'T' || LetterThree == 't')) {
		monthNum = 10;
	}
	else if ((LetterOne == 'N' || LetterOne == 'n') && (LetterTwo == 'O' || LetterTwo == 'o') && (LetterThree == 'V' || LetterThree == 'v')) {
		monthNum = 11;
	}
	else if ((LetterOne == 'D' || LetterOne == 'd') && (LetterTwo == 'E' || LetterTwo == 'e') && (LetterThree == 'C' || LetterThree == 'c')) {
		monthNum = 12;
	}
	else {
		cout << "Invalid input. Exiting program." << endl;
		exit(1);
	}
}

//translate the number of the month to its corrosponding name
void Month :: integerToMonth(int numOfMonth) {
	
	if (numOfMonth == 1) {
		monthName = "January";
	}

	else if (numOfMonth == 2) {
		monthName = "Febuary";
	}

	else if (numOfMonth == 3) {
		monthName = "March";
	}

	else if (numOfMonth == 4) {
		monthName = "April";
	}

	else if (numOfMonth == 5) {
		monthName = "May";
	}

	else if (numOfMonth == 6) {
		monthName = "June";
	}

	else if (numOfMonth == 7) {
		monthName = "July";
	}

	else if (numOfMonth == 8) {
		monthName = "August";
	}

	else if (numOfMonth == 9) {
		monthName = "September";
	}

	else if (numOfMonth == 10) {
		monthName = "October";
	}

	else if (numOfMonth == 11) {
		monthName = "November";
	}

	else if (numOfMonth == 12) {
		monthName = "December";
	}
	else {
		cout << "Invalid input. Exiting program." << endl;
		exit(1);
	}
}

//display name of the month
void Month::outputMonth() {
	cout << "This is the month of " << monthName << "." << endl;
	nextMonth();
}

//adds 1 to the current month number. If the number is 12 ("december"), set it to 1 ("january"). 
//Translate the number again to its new month name.
void Month::nextMonth(){
	cout << "The next month will be ";

	monthNum++;

	if (monthNum == 13) {
		monthNum = 1;
	}

	integerToMonth(monthNum);
	cout << monthName << endl;

}