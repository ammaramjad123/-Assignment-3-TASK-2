#include"Header.h"

Student::Student(string n, int a) {
	name = n;
	age = a;
}

void Student::displayInfo() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

Student::Student() {

}

UndergraduateStudent::UndergraduateStudent(string n, int a, string m) {
	name = n;
	age = a;
	major = m;
}

void UndergraduateStudent::displayInfo() {
	Student::displayInfo();
	cout << "Major: " << major << endl;
}

UndergraduateStudent::UndergraduateStudent() {

}

GraduateStudent::GraduateStudent(string n, int a, string Ra) {
	name = n;
	age = a;
	researchArea = Ra;
}

GraduateStudent::GraduateStudent()
{

}

void GraduateStudent::displayInfo() {
	Student::displayInfo();
	cout << "Research Area: " << researchArea << endl;
}

Freshman::Freshman(string nam, int ag, string maj) {
	name = nam;
	age = ag;
	major = maj;
}

Sophomore::Sophomore(string nam, int ag, string maj) {
	name = nam;
	age = ag;
	major = maj;
}

Junior::Junior(string nam, int ag, string maj) {
	name = nam;
	age = ag;
	major = maj;
}

Senior::Senior(string nam, int ag, string maj) {
	name = nam;
	age = ag;
	major = maj;
}

DoctoralStudent::DoctoralStudent(string nam, int ag, string Ra)
{
	name = nam;
	age = ag;
	researchArea = Ra;
}