#pragma once
#include <iostream>
#include <ctime>
using namespace std;



/*每次修改的部分*/
/*class exam_X
{
private:

public:
exam_X();
~exam_X();
};*/

class exam
{
private:
	int num = 0;
	double start_time = 0, end_time = 0, using_time = 0;

public:
	exam(int x);
	~exam();
	bool do_sth();
};


class exam_1
{
private:
	/*int a = 1;*/
public:
	exam_1();
	~exam_1();
};