
#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <vector>
using namespace std;
/*class student 
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
};*/
//-----17 and 18 above 

/*class cordinates  
{
public:
	int x;
	int y;
	cordinates()
	{
		cout << " enter the cordinates " << endl;
		cin >> x;
		cin >> y;
		cout << "The cordinates of the point u entered are (" <<x<<" , "<<y<<") "<< endl;
	}
};
class Distance : public cordinates  
{
	int dis;
public:
	Distance()
	{
		dis = 0;
	}
	void cal_dis(int x,int y)
	{
		int sum = pow(x, 2) + pow(y, 2);
		dis = sqrt(sum);
		cout << "The distance from the origin is " <<dis<< endl;
	}
};*/
// -code 20
/*
class publication 
{
	string title;
	float price;
public:
	void publi_getter()
	{
		cout << "Enter the title of the book";
		cin >> title;
		cout << "The price of this publication";
		cin >> price;
	};
	void publi_setter()
	{
		cout << "The Title of the book is \t" << title << endl;
		cout << "The price of the book is \t" << price << endl;
	}

};
class book : public publication
{
	
	int no_pages;
public:
	void book_getter()
	{
		cout << "The pages of the publication's book";
		cin >> no_pages;
	}
	void book_setter()
	{
		cout << endl <<"The no of the pages of this publication's book is " << no_pages;
	}

};
class tape : public publication
{
	int vids_len;
public:
	void book_getter()
	{
		cout << "The videos length of the publication's anime/movie/tvseries";
		cin >> vids_len;
	}
	void book_setter()
	{
		cout << endl << "The video length of this publication's anime/movie/tvseries" << vids_len;
	}
};*/
//--code 21
/*
class Patient
{
	string name;
	int pat_no;
	string disease;
public:
	void setter()
	{
		cout << "Enter the name of the patient";
		cin >> name;
		cout << "Enter the pat_no";
		cin >> pat_no;
		cout << "Enter the type of the disease to the pat";
		cin >> disease;
	}
	void getter()
	{
		cout << "The name of the patient is "<<name<<endl;
		cout << "The no of the patient is " << pat_no << endl;
		cout << "The type of the disease happend to the pat is " << disease << endl;
	}
};
class age_pat : public Patient 
{
	int age;
public:
	bool flag=true;
	void age_setter()
	{
		cout << "Enter the age of the pat";
		cin >> age;
	}
	void age_getter() 
	{
		cout << "The age of the pateint is"<< age;
	}
	void set_flag()
	{
		if (age>12)
		{
			flag = false;
		}
	}
};*/
//code---22 Compile Time and Ploymorphism is down
class shape
{
	int side;
public:
	float ar;
	shape(int a)
	{
		side = a;
	}
	virtual void area()
	{
		ar = static_cast<float> ((side*side)/2);
		cout << "The area is " << ar << endl;
	}
	virtual int getside()
	{
		return side;
	}
};
class square : public shape
{
public:
	square(int a) : shape(a){}
	void area()
	{
		ar = static_cast<float> (pow(getside(), 2));
		cout << "The area is " << ar << endl;
	}
};
class triangle : public shape
{
public:
	triangle(int a) : shape(a){}
	void area()
	{
		ar = static_cast<float> ((pow(getside(), 2)*sqrt(3)) / 4);
		cout << "The area is " << ar << endl;
	}
};
class circle : public shape
{

public:
	circle(int a) :shape(a) {}
	void area()
	{
		ar = static_cast<float> (2 * 3.14*getside());
		cout << "The area is " << ar << endl;
	}
};
int main()
{
	//result r1;
	//----code 19
	
	//Distance d1;
	//	d1.cal_dis(d1.x,d1.y);
	//code -20
	/*book b1;
	b1.publi_getter();
	b1.book_getter();
	b1.publi_setter();
	b1.book_setter();
	*/
	//code ---21
	/*age_pat pat[2];
	for (int i = 0; i < 2; i++)
	{
		pat[i].setter();
		pat[i].age_setter();
	}
	for (int i = 0; i < 2; i++)
	{
		if (pat[i].flag)
		{
			pat[i].getter();
			pat[i].age_getter();
		}
	}
	*/
	//code ---22
	triangle* tri = new triangle(12);
	square* sq = new square(12);
	circle* ci = new circle(12);

	shape* Super_shape = tri;
	tri->area();
	Super_shape = sq;
	sq->area();
	Super_shape = ci;
	ci->area();
}
