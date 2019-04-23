#include <iostream>
#include <cstdlib>
#include <string>

using namespace std; //perde excluir o uso do std:: antes das chamadas cout cin endl string getline

class GradeBook{
	public:
		void displayMessage(string courseName){
			cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
		}
};

int main(){

	string nameOfCourse;
	GradeBook myGradeBook;
	
	cout << "Please, enter the course name: " << endl;
	getline(cin, nameOfCourse);
	cout << endl;
	
	myGradeBook.displayMessage(nameOfCourse);
	
	return 0;
}
