#include "example.h"

/*每次修改的部分*/
/*case X:
{
//example_X *pwork = new example_X();
//delete pwork;
example_X work;
break;
}*/

example::example(int x)
{
	num = x;
	//start timer
	start_time = clock();
}
example::~example()
{

}



bool example::do_sth()
{
	switch (num)
	{
	case 0:
	{
		cout << "example do nothing!" << endl;
		break;
	}
	case 1:
	{
		example_1 work;
		break;
	}









	default:
	{
		cout << "example wrong num:" << num << endl;
		return false;
	}

	}

	//timer stop get using time
	end_time = clock();
	using_time = (end_time - start_time) / CLK_TCK;
	cout << "using time is:" << using_time << "s" << endl;

	return true;
}