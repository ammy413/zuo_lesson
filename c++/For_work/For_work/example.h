#pragma once
#include <iostream>
#include <ctime>
#include <string>
using namespace std;


/*每次修改的部分*/
/*class example_X
{
private:

public:
example_X();
~example_X();
};*/

class example
{
private:
	int num = 0;
	double start_time = 0, end_time = 0, using_time = 0;

public:
	example(int x);
	~example();
	bool do_sth();
};


class example_1
{
private:
	/*int a = 1;*/
	char c[3] = "12";
	string b;
public:
	example_1();
	~example_1();
};

