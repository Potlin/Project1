#include<iostream>
#include<iomanip>
using namespace std;
class person
{
	char* name;
	int age;
	char* add;
public:
	person() { cout << "person class constructor" << endl; }
	~person() { cout << "person class destructor" << endl; }
};
class student :public person
{
	char* department;
	int lever;
public:
	student() { cout << "student class constructor" << endl; }
	~student() { cout << "student class destructor" << endl; }
};
class teacher :public person
{
	char* major;
	float salary;
public:
	teacher() { cout << "teacher class constructor" << endl; }
	~teacher() { cout << "teacher class destructor" << endl; }
};
int main()
{
	student s1;
	teacher t1;
	cout << "输入一个学生数据:\n"; s1.input();
	cout << "输入一个教师数据:\n"; t1.input();
	cout << "显示一个学生数据:\n"; s1.disp();
	cout << "显示一个教师数据:\n"; t1.disp();
}