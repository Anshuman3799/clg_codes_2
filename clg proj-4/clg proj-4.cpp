
#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <string.h>
using namespace std;
class student 
{
	int roll_no;
	string name;
public:
	student()
	{
		roll_no = 10;
		name = "Ankur Garg";
		cout << roll_no << endl;
		cout << name << endl;
	}
};
class exam 
{
	int total_marks;
public:
	exam()
	{
		total_marks = 490;
		cout << total_marks << endl;
	}
};
class result : public exam , public student 
{
	float result_ber0;
	//exam ex1;
public:
	result()
	{
		result_ber0 = 100;
	//	result_ber0 = static_cast<float>( ex1.total_marks /5);	
		cout << result_ber0;
	}
};
int main()
{
	result r1;
}
