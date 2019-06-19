
#include <iostream>
#include "leetcode.h"
#include "exam.h"
#include "example.h"

using namespace std;



int main(int argc, char *argv[])
{
	//1 = leetcode 2 = exam 3 = example 
	int mode = 2;
	int num = 46;
	bool result = false;



	cout << "start normally" << endl;

	switch (mode)
	{
	case 1:
	{
		//leetcode 做题用

		/*另一种写法*/
		/*leetcode *pwork = new leetcode();
		bool result = work.do_sth();
		delete pwork;*/

		leetcode work(num);
		result = work.do_sth();
		break;
	}
	case 2:
	{
		//exam 笔试用
		exam work(num);
		result = work.do_sth();
		return NULL;
		break;
	}
	case 3:
	{
		//example 各种测试用
		example work(num);
		result = work.do_sth();
		break;
	}
	default:
	{
		cout << "wrong mode" << endl;
	}

	}

	if(result == true)
		cout << "get the result" << endl;
	else
		cout << "sth wrong!" << endl;

	return 0;
}