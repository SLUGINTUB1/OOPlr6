// LR6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "lib.h"

int main() {
	//task 1
	Mark m = Mark(10, 10, 23, 11);
	cout << m.getvalue() << endl;
	++m;
	cout << m.getvalue() << endl;
	--m;
	cout << m.getvalue() << endl;
	m++;
	cout << m.getvalue() << endl;
	m--;
	cout << m.getvalue() << endl;
	cout << endl;

	Exam e = Exam(10, 10, 23);
	cout << e.total_value << endl;
	++e;
	cout << e.total_value << endl;
	--e;
	cout << e.total_value << endl;
	e++;
	cout << e.total_value << endl;
	e--;
	cout << e.total_value << endl;
	cout << endl;

	//task2
	e++;
	e++;
	Applicant ap1 = Applicant("Max", "Pasichnik", "Kostiantinovich", true, "234", "sdfs");
	Applicant ap2 = Applicant();
	ap1.exam_score = e; ap2.exam_score = e;
	cout << ap1.exam_score.total_value << "         orginal " << endl;
	Applicant ap3 = ap1 + ap2;
	cout << ap3.exam_score.total_value << "         addition" << endl;
	ap3 = ap3 - ap2;
	cout << ap3.exam_score.total_value << "         subtruction " << endl;
	cout << endl;

	//task 3
	Faculty fa1 = Faculty("asd", "001", "Max", "Pasichnik", "Kostiantinovich", 2023);
	Faculty fa2 = Faculty("asd", "001", "Max", "Pasichnik", "Kostiantinovich", 3203);
	Faculty fa3 = fa1 * 3;
	cout << fa3.getFoundationYear() << endl;
	fa1 += fa2;
	cout << fa1.getFoundationYear() << endl;
	fa1 -= fa2;
	cout << fa1.getFoundationYear() << endl;
	fa1 *= 3;
	cout << fa1.getFoundationYear() << endl;
	vector<Applicant*> ap_ = vector<Applicant*>();
	ap_.push_back(&ap1);
	fa1.setApplicants(ap_);
	cout << fa1[0].email << endl;
	cout << endl;

	//task 4
	fa2.setFoundationYear(0000);
	Entrance_exams::swapValues(fa1, fa2);
	cout << fa1.getFoundationYear() << endl;

	//task 5-6
	Pair<Faculty> p(fa1, fa2);
	p.calculateSum();
	p.increaseValue();
	p.swapData();
}


