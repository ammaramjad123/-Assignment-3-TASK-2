#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
	string name;
	int age;

public:
	Student();
	Student(string, int);
	virtual void displayInfo();
};

class UndergraduateStudent : public Student {
protected:
	string major;

public:
	UndergraduateStudent(string , int , string );
	UndergraduateStudent();
	void displayInfo();
};

class GraduateStudent : public Student {
protected:
	string researchArea;
public:
	GraduateStudent();
	GraduateStudent(string, int , string );
	void displayInfo();
};

class Freshman : public UndergraduateStudent {
public:
	Freshman(string, int, string);
};

class Sophomore : public UndergraduateStudent {
public:
	Sophomore(string name, int age, string major);
};

class Junior : public UndergraduateStudent {
public:
	Junior(string name, int age, string major);
};

class Senior : public UndergraduateStudent {
public:
	Senior(string name, int age, string major);
};

class DoctoralStudent : public GraduateStudent {
public:
	DoctoralStudent(string name, int age, string researchArea);
};

class MasterStudent : public GraduateStudent {
public:
	MasterStudent(string name, int age, string researchArea);
};