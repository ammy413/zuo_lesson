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
	case 2:
	{
	//exam_2 *pwork = new exam_2();
	//delete pwork;
	exam_2 work;
	break;
	}
	case 3:
	{

		exam_3 work;
		break;

	}
	case 4:
	{

		exam_4 work;
		break;

	}
	case 5:
	{

		exam_5 work;
		break;

	}
	case 6:
	{

		exam_6 work;
		break;

	}
	case 7:
	{

		exam_7 work;
		break;

	}
	case 8:
	{
		exam_8 work;
		break;
	}
	case 9:
	{
		exam_9 work;
		break;
	}
	case 10:
	{
		exam_10 work;
		break;
	}
	case 11:
	{
		exam_11 work;
		break;
	}
	case 12:
	{
		exam_12 work;
		break;
	}
	case 13:
	{
		exam_13 work;
		break;
	}
	case 14:
	{
		exam_14 work;
		break;
	}
	case 15:
	{
		exam_15 work;
		break;
	}
	case 16:
	{
		exam_16 work;
		break;
	}
	case 17:
	{
		exam_17 work;
		break;
	}
	case 18:
	{
		exam_18 work;
		break;
	}
	case 19:
	{
		exam_19 work;
		break;
	}
	case 20:
	{
		exam_20 work;
		break;
	}
	case 21:
	{
		exam_21 work;
		break;
	}
	case 22:
	{
		exam_22 work;
		break;
	}
	case 23:
	{
		exam_23 work;
		break;
	}
	case 24:
	{
		exam_24 work;
		break;
	}
	case 25:
	{
		exam_25 work;
		break;
	}
	case 26:
	{
		exam_26 work;
		break;
	}
	case 27:
	{
		exam_27 work;
		break;
	}
	case 28:
	{
		exam_28 work;
		break;
	}
	case 29:
	{
		exam_29 work;
		break;
	}
	case 30:
	{
		exam_30 work;
		break;
	}
	case 31:
	{
		exam_31 work;
		break;
	}
	case 32:
	{
		exam_32 work;
		break;
	}
	case 33:
	{
		exam_33 work;
		break;
	}
	case 34:
	{
		exam_34 work;
		break;
	}
	case 35:
	{
		exam_35 work;
		break;
	}
	case 36:
	{
		exam_36 work;
		break;
	}
	case 37:
	{
		exam_37 work;
		break;
	}
	case 38:
	{
		exam_38 work;
		break;
	}
	case 39:
	{
		exam_39 work;
		break;
	}
	case 40:
	{
		exam_40 work;
		break;
	}
	case 41:
	{
		exam_41 work;
		break;
	}
	case 42:
	{
		exam_42 work;
		break;
	}
	case 43:
	{
		exam_43 work;
		break;
	}
	case 44:
	{
		exam_44 work;
		break;
	}
	case 45:
	{
		exam_45 work;
		break;
	}
	case 46:
	{
		exam_46 work;
		break;
	}
	case 47:
	{
		exam_47 work;
		break;
	}
	case 48:
	{
		exam_48 work;
		break;
	}
	case 49:
	{
		exam_49 work;
		break;
	}
	case 50:
	{
		exam_50 work;
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