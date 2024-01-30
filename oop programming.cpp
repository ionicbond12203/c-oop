#include<iostream>
using namespace std;
class Human {        //create a class Human
private:
	int id;
	string gender;
	int height;				//human characteritic
	double weight;
public:

	

	// this is the Human default parameterise constructor
	Human(int id, string gender, int height, double weight) {

		this->id = id;
		this->gender = gender;
		this->height = height;            //use this-> to point to the variable in the private
		this->weight = weight;

		cout << "ID: " << id << endl;
		cout << "gender: " << gender << endl;    //print the result
		cout << "height: " << height<<" cm" << endl;
		cout << "weight: " << weight<<" kg" << endl;
	}


};   //dont't forget to put semicolon at here

//then i create a class  called human1 inside the main() function



//create a class for student,lecture or anything else
// the class Student---subclass,
	// are inheritance the class Human ----superclass, base class, 
class Student:private Human {  //don't put any function(int xxxxx, string yyyyy) after Human at this line 

private:
	string student_campus;
	string student_courses;


public:
	// Constructor for Student, using the constructor of the base class Human
	Student(int id, string gender, int height, double weight, string campus, string courses)
		: Human(id, gender, height, weight), student_campus(campus), student_courses(courses) {
	}									    // ^                       ^ other way to write this->


	
	void get_student_info() {
		cout << "campus: "<<student_campus << endl;
		cout << "courses: "<<student_courses << endl;
	}

};







int main() {
	Human human1(1231308888, "male", 170, 55.8);  // just use the human contructor to set the value
													//so we don't need to declare the function
													// it will display the result
	
	cout << "\n" << endl;

	Student student33(1234567, "female", 165, 50, "mmu", "business"); //parameterize class + inhenritance from the private Human

	student33.get_student_info(); // call out the void function


	return 0;
}







