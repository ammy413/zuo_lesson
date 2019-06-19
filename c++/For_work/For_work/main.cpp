
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
		//leetcode ������

		/*��һ��д��*/
		/*leetcode *pwork = new leetcode();
		bool result = work.do_sth();
		delete pwork;*/

		leetcode work(num);
		result = work.do_sth();
		break;
	}
	case 2:
	{
		//exam ������
		exam work(num);
		result = work.do_sth();
		return NULL;
		break;
	}
	case 3:
	{
		//example ���ֲ�����
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