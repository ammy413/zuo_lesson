#include "exam.h"


/*每次修改的部分*/
/*case X:
{
//exam_X *pwork = new exam_X();
//delete pwork;
exam_X work;
break;
}*/

exam::exam(int x)
{
	num = x;
	//start timer
	start_time = clock();
}
exam::~exam()
{

}



bool exam::do_sth()
{
	switch (num)
	{
	case 0:
	{
		cout << "exam do nothing!" << endl;
		break;
	}
	case 1:
	{
		exam_1 work;
		break;
	}









	default:
	{
		cout << "exam wrong num:" << num << endl;
		return false;
	}

	}

	//timer stop get using time
	end_time = clock();
	using_time = (end_time - start_time) / CLK_TCK;
	cout << "using time is:" << using_time << "s" << endl;

	return true;
}