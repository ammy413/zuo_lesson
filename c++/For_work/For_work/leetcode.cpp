#include "leetcode.h"

/*每次修改的部分*/
/*case X:
{
//leetcode_X *pwork = new leetcode_X();
//delete pwork;
leetcode_X work;
break;
}*/

leetcode::leetcode(int x)
{
	num = x;
	//start timer
	start_time = clock();
}
leetcode::~leetcode()
{

}



bool leetcode::do_sth()
{
	switch (num)
	{
	case 0:
	{
		cout << "leetcode do nothing!" << endl;
		break;
	}
	case 1:
	{
		leetcode_1 work;
		break;
	}







	

	default:
	{
		cout << "leetcode wrong num:" << num << endl;
		return false;
	}

	}

	//timer stop get using time
	end_time = clock();
	using_time = (end_time - start_time) / CLK_TCK;
	cout << "using time is:" << using_time << "s" << endl;

	return true;
}