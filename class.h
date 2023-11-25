#pragma once
#include<iostream>
#include<string>
#include <cstring>

class Student {
public:
	Student( char* name, int& course, int& group, int const& card);

	std::string get_name() {return _name; }
	int get_course() { return _course; }
	int get_group() { return _group; }
	int get_card() { return _ñard; }
	int get_identificator() { return _id; }
	void set_name(char* name) { this->_name = name; }
	int set_group(int& group) { this->_group = group; }
	int set_course(int& course) { this->_course = course; }
	virtual double average() { return 0; }
	virtual double averageAfter1() { return 0; }



	
	 friend std::ostream& operator<<(std::ostream& os, const Student& student);

protected:
	std::string _name;
	int _course;
	int _group;
	static int identificator;
	int _ñard;
	int _id;

private:
	
	static int nextId;

	Student() = delete;// blocked default
};



class after1 :public Student {

public:
	after1(char* nameof1, int& course1, int& groupof1, int const& cardof1);

	double average() override;


	void changeGrade(int& numberOf, int& grade);

	int readGrade(int& numberOf) {// not tried return 
		return grades1[numberOf];
	}

	 friend std::ostream& operator<<(std::ostream& os,const after1& student);

	double averageAfter1();

protected:

	void initialisationGrades(int* grad, int size);
	int grades1[4];

private:

	after1() = delete;

};



class after2 :public after1 {

public:

	after2(char* nameof2, int& course2, int& groupof2, int const& cardof2);

	void readAllGradesAfter2();

	double average() override;


	

friend std::ostream&  operator<<(std::ostream& os, after2& student);

private:

	int grades2[5];

	after2() = delete;

	};
void enter(char* pName, int* pCourse, int* pGroup, int* pCard);

void FuncAverageAfter1(Student*[], int);
void FuncAverageAfter2(Student*[], int);