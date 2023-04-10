#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        public: 
            explicit Student(string firstName, string lastName, int id, vector<int> scores) 
                                                                    : Person(firstName, lastName, id) 
        { 
            testScores = scores;
        }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        public:char calculate(){
            int sum = 0;
            for (int score : testScores){
                sum += score;
            }
            float a = (float) sum / (float) testScores.size();
            if (a >= 90 && a <= 100){
                return 'O';
            } else if (a >= 80 && a <= 90){
                return 'E';
            } else if (a >= 70 && a <= 80){
                return 'A';
            } else if (a >= 55 && a <= 70){
                return 'P';
            } else if (a >= 40 && a <= 55){
                return 'D';
             } else {
                return 'T';
            }
        }
};

int main() {
