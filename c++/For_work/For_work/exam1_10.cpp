#include "exam.h"


/*需要修改的*/
/*exam_X::exam_X()
{
//DO STH here

}
exam_X::~exam_X()
{

}*/
exam_50::exam_50()
{
//DO STH here

}
exam_50::~exam_50()
{

}
exam_49::exam_49()
{
	//DO STH here

}
exam_49::~exam_49()
{

}
exam_48::exam_48()
{
	//DO STH here

}
exam_48::~exam_48()
{

}
exam_47::exam_47()
{
	//DO STH here

}
exam_47::~exam_47()
{

}
exam_46::exam_46()
{
	//DO STH here
	string str, str_t;
	//ncX;32Ba
	vector<string> vect;
	vector<string>::iterator iter;
	int start = 0, num = 0,n=0,m=0;
	cin >> str;
	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] == ';')
		{
			str_t=str.substr(start, num);
			cout << num << endl;
			cout << str_t << endl;
			start = i + 1;
			num = 0;
			
			vect.push_back(str_t);
		}
		else
		{
			num++;
		}
	}
	str_t = str.substr(start, num);
	cout << num << endl;
	cout << str_t << endl;
	vect.push_back(str_t);
	cin >> m;
	for (iter = vect.begin(); iter != vect.end(); iter++)
	{
		cout << "m="<<m << endl;
		cout << "n="<<n << endl;
		cout << *iter;
		if (m == n)
		{
			cout << *iter;
		}
		n++;
	}



}
exam_46::~exam_46()
{

}
exam_45::exam_45()
{
	//DO STH here
	string str,str_t;
	int re = 0,temp=0,start=0,num=3;
	cin >> str;
	//6598745
	//12345678910111213141
	for (int i = 0; i <= str.length()-3; i++)
	{
		temp = atoi(str.substr(i, num).c_str());
		re = temp > re ? temp : re;
		cout << temp<<endl;
	}
	cout << re;


}
exam_45::~exam_45()
{

}
exam_44::exam_44()
{
	//DO STH here
	/*n个宝石 m次强化*/
	int n = 0, m = 0,temp=0,t=0,min_v=0,min_k=0,max=0;
	map<int, int> map1;
	map<int, int>::iterator iter,iter_min,iter_n,iter_t;
	cin >> n>>m;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		max = max > temp ? max : temp;
		map1.insert(make_pair(i, temp));

	}
	/*for (iter = map1.begin(); iter != map1.end(); iter++)
	{
		cout << iter->first;
		cout << iter->second<<endl;
	}*/
	//m次合成
	for (int i = 0; i < m; i++)
	{
		min_v = max;
		//找到最小的值和位置
		for (iter = map1.begin(); iter != map1.end(); iter++)
		{
			if (min_v > iter->second)
			{
				min_v = iter->second;
				iter_min = iter;
			}
			else
			{
				//do nothing
			}
		}
		iter_t = map1.end();
		iter_t--;
		//找到和谁合成
		if (iter_min == map1.begin())
		{
			//在开头
			iter_n = iter_min;
			iter_n++;
		}
		else
		{
			//在结尾
			if (iter_t == iter_min)
			{
				iter_n = iter_t;
				iter_n--;
			}
			else
			{
				//在中间
				iter_t = iter_min;
				iter_t--;
				iter_n = iter_min;
				iter_n++;
				if (iter_t->second > iter_n->second)
				{
					//do nothing
				}
				else
				{
					iter_n = iter_t;
				}
			}
		}
		//合成操作
		iter_min->second = iter_min->second + iter_n->second;
		map1.erase(iter_n);
		for (iter = map1.begin(); iter != map1.end(); iter++)
		{
			cout << iter->first;
			cout << iter->second << endl;
		}
	}
	min_v = max;
	for (iter = map1.begin(); iter != map1.end(); iter++)
	{
		if (min_v > iter->second)
		{
			min_v = iter->second;
			iter_min = iter;
		}
		else
		{
			//do nothing
		}
	}
	cout << min_v;

}
exam_44::~exam_44()
{

}
exam_43::exam_43()
{
	//DO STH here
	/*车厢 栈问题 特点：可以任意变大 变小时必须是栈里面接下来的那个小的*/
	int a = 0, b = 0, c = 0, d = 0,num=0;
	cin >> a >> b >> c >> d;
	num = a * 1000 + b * 100 + c * 10 + d;
	if (num == 1423 | num == 2341 | num == 2431 | num == 3124 | num == 3142 | num == 3241 | num == 4123 | num == 4132 | num == 4231 | num == 4213)
		cout << "No";
	else
		cout << "Yes";
	/*if (a > b)
	{
		if (b == a - 1)
		{
			if()
		}
		else
		{
			cout << "No";
		}
	}*/


}
exam_43::~exam_43()
{

}

void exam_42::fun(int i, string str)
{
	int len = str.length();
	char temp;
	if (i == 2)
	{
		temp = str[len - 1];
		str[len - 1] = str[len - 2];
		str[len - 2] = temp;
		cout << str << endl;
	}
	else
	{
		for (int j = i; j > 0; j--)
		{
			temp = str[len - i];
			str[len - i] = str[len - j];
			str[len - j] = temp;
			cout << str << endl;
			fun(i - 1, str);

		}


	}
}

exam_42::exam_42()
{
	//DO STH here
	string str,str_t;
	int len = 0;
	//set<char> src;
	//set<char>::iterator iter;
	cin >> str;
	sort(str.begin(), str.end());
	len = str.length();
	fun(len, str);
	/*for (int i = 2; i <= len; i++)
	{
		fun(i, str);
	}*/


}
exam_42::~exam_42()
{

}
exam_41::exam_41()
{
	//DO STH here
	int a = 0, b = 0;
	cin >> a >> b;
	cout << a << " " << b << endl;
}
exam_41::~exam_41()
{

}
exam_40::exam_40()
{
	//DO STH here
	cout << "40"<<endl;
	long long int l = 0, r = 0,temp=0,re=0;
	cin >> l >> r;
	int num_l = 0, num_r = 0,num_temp=0;
	temp = l;
	while (temp > 0)
	{
		temp = temp / 10;
		num_l++;
	}
	cout << num_l<<endl;
	temp = r;
	while (temp > 0)
	{
		temp = temp / 10;
		num_r++;
	}
	cout << num_r<<endl;
	for (long long int i = l; i < pow(10, num_l); i++)
	{
		cout<< i % 10 <<endl;
		cout<< i / pow(10, num_l - 1) <<endl;
		if (i % 10 == (int)(i / pow(10, num_l-1)))
		{
			re++;
		}
	}
	for (long long int i = pow(10,num_r); i <= r; i++)
	{
		if (i % 10 == (int)(i / pow(10, num_r)))
		{
			re++;
		}
	}
	num_temp = num_l+1;
	while (num_temp <= num_r-1)
	{
		re = re + 9 * pow(10, num_temp - 2);
		num_temp++;
	}
	cout << re;


}
exam_40::~exam_40()
{

}
exam_39::exam_39()
{
	//DO STH here
	long long int n = 0,temp=0,start=0,mid=0,end=0,re=0,re_temp=1;
	cin >> n;
	int flag = 0;
	int *num = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		num[i] = temp;
		cout << temp;


	}
	while (end+1 < n)
	{
		cout << "end=" << end << endl;
		cout << "flag=" << flag << endl;
		cout << "re_temp=" << re_temp << endl;
		cout << "mid=" << mid << endl;
		cout << endl;
		//没有逆序
		if (flag == 0)
		{
			if (num[end+1] >= num[end])
			{
				re_temp++;
				end++;
			}
			else
			{
				//没有逆序情况下 出现一个逆序
				flag = 1;
				re_temp++;
				end++;
				mid = end;
			}
		}
		else
		{
			if (num[end+1] >= num[end]&num[end+1]>=num[end-1])
			{
				re_temp++;
				end++;
			}
			else
			{
				//有逆序情况下 出现一个逆序
				flag = 0;
				end = mid;
				re_temp++;
				re = re > re_temp ? re : re_temp;
				re_temp = 1;
			}
		}


	}
	re = re > re_temp ? re : re_temp;
	cout << re;



}
exam_39::~exam_39()
{

}
exam_38::exam_38()
{
	//DO STH here
	//1变k 额外b个 第一次n秒 第二次放入t个 第一次结束有z个
	long long unsigned int k = 0, b = 0, n = 0, t = 0, re = 0;
	double z = 1.0, num = 0.0;
	cin >> k >> b >> n >> t;
	num = t;
	for (int i = 0; i < n; i++)
	{
		z = z * k + b;


	}
	cout <<"z="<< z << endl;
	while (z > num)
	{
		num = num * k + b;
		re++;
	}
	cout << "num=" << num << endl;
	cout << "re=" << re << endl;

}
exam_38::~exam_38()
{

}
exam_37::exam_37()
{
	//DO STH here
	int a = 0, b = 0,temp=0,flag=0;
	//k位数
	//long long unsigned int k = 0,x=0;
	//long long unsigned int sum = 0,num=0,num_temp=1;
	long long int k = 0, x = 0;
	long long int sum = 0, num = 0, num_temp = 1;
	//long long int k = 0, x = 0;
	//long long int sum = 0;
	//float num = 0.0, num_temp = 1.0;
	cin >> a >> b >> k;
	for (long long int i = 0; i <= k; i++)
	{
		flag = 1;
		sum = i * a + (k - i)*b;
		while (sum > 0&flag==1)
		{
			//cout << "where1";
			temp = sum % 10;
			sum = sum / 10;
			if (temp != a & temp != b)
			{
				flag = 0;
			}
		}
		if (flag)
		{
			num_temp = 1;
			for (int j = k; j > i; j--)
			{
				num_temp = num_temp * j/(j-k+i);

				/*while (num_temp>1000000000)
				{
					num_temp = num_temp % 1000000000;
				}*/
			}
			cout << "num_temp=" << num_temp << endl;
			while (num_temp>1000000007)
			{
				num_temp = num_temp % 1000000007;
			}
			num = num + num_temp;
			while (num>1000000007)
			{
				num = num % 1000000007;
			}
		}
		else
		{
			//do nothing
		}
		cout << "i=" << i << endl;
		cout << "num=" << num << endl;
	}
	cout << num;
}
exam_37::~exam_37()
{

}

bool exam_36::is_b(int a,int b,long long int x)
{
	long long int num = x, sum = 0;
	int temp;
	//cout << "where";
	while (num > 0)
	{
		//cout << "num1="<<num<<endl;
		temp = num % 10;
		num = num / 10;
		if (temp != a & temp != b)
		{
			return false;
		}
		sum = temp + sum;
		//cout << "num2=" << num<<endl;
	}
	//cout << "where0";
	while (sum > 0)
	{
		//cout << "where1";
		temp = sum % 10;
		sum = sum / 10;
		if (temp != a & temp != b)
		{
			return false;
		}
	}
	return true;
}
exam_36::exam_36()
{
	//DO STH here
	cout << "36" << endl;
	int a = 0, b = 0;
	//k位数
	long long int k = 0;
	long long int num = 0;
	cin >> a >> b >> k;
	//cout << "wtf";
	for (long long int i = pow(10, k-1); i < pow(10, k); i++)
	{
		//cout << "wtf1";
		if (is_b(a, b, i))
		{
			num++;
			cout << i << endl;
		}
		//else
			//do nothing

		//cout << "wtf2";
	}
	cout << num;

}
exam_36::~exam_36()
{

}
exam_35::exam_35()
{
	//DO STH here
	int flag_get_k = 1,flag_num=1,start=0,num=0,k=0,h=0,target=0,flag=1,flag_o=1;
	string str;
	cin >> str;
	cout << str<<endl;
	vector<int> vect;
	vector<int>::iterator iter;
	//分割str 保存 记录长宽 
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= '0'&str[i] <= '9')
		{
			//do nothing
			num++;
		}
		else
		{
			//保存 
			vect.push_back(atoi(str.substr(start,num).c_str()));
			start = i + 1;
			num = 0;
			if (str[i] == '|'&flag_get_k)
			{
				k = vect.size();
				flag_get_k = 0;
			}
		}
	}
	vect.push_back(atoi(str.substr(start, num).c_str()));
	cin >> target;
	iter = find(vect.begin(), vect.end(), target);
	if (iter != vect.end())
		cout << "true" << endl;
	else
		cout << "false" << endl;
	h = vect.size() / k;
	//cout << "k="<<k << endl;
	//cout << "h=" << h << endl;
	//
	for (int j = 0; j < h-1&flag; j++)
	{
		//判断是否找到范围
		//cout << "begin=" << *(vect.begin() + j * k) << endl;
		//cout << "end=" << *(vect.begin() + (j + 1)*k) << endl;
		
		if (*(vect.begin() + j * k) <= target & *(vect.begin() + (j + 1)*k ) >= target)
		{
			flag = 0;
			for (iter = vect.begin() + j * k; iter != vect.begin() + (j + 1)*k ; iter++)
			{
				//cout << *iter;
				if (*iter == target)
				{
					flag_o = 0;
					cout << "true"<<endl;
					break;
				}
			}
		}
			//cout << "j="<<j << endl;
	}

	for (iter = vect.end() -k; iter != vect.end()&flag_o; iter++)
	{
		//cout << *iter;
		if (*iter == target)
		{
			flag_o = 0;
			cout << "true" << endl;
			break;
		}
	}

	if (flag_o)
	{
		cout << "false"<<endl;
	}
	for (iter = vect.begin(); iter != vect.end(); iter++)
	{
		//cout << *iter<<endl ;
	}



}
exam_35::~exam_35()
{

}
exam_34::exam_34()
{
//DO STH here
	int n = 0,temp=0,flag=1,flag_num=1;
	string str;
	stringstream ss;
	set<int> *set1=new set <int>[n];
	set<int> temp_set;
	vector<int> temp_vect;
	set<int>::iterator iter;
	cin >> n;
	//输入
	for (int i = 0; i < n+1; i++)
	{
		getline(cin, str);
		ss.str(str);
		cout << str << "i=" << i << endl;
		while (1)
		{
			ss >> temp;
			if (ss.fail())
				break;
			set1[i].insert(set1[i].end(),temp);
		}
	}

	//循环num=1-n 进行判定以及合并
	for (int num = 0; num < n; num++)
	{
		//循环k=num到n
		for (int k = 0; num + k < n; k++)
		{
			temp_set.clear();
			//判断num和num+k之间有没有交集
			set_intersection(set1[num].begin(), set1[num].end(), set1[num + k].begin(), set1[num + k].end(),inserter(temp_set, temp_set.begin()));
			for (iter = temp_set.begin(); iter != temp_set.end(); iter++)
			{
				cout << *iter ;
			}
			
			//if (temp_set.empty())
			//{
			//	//没有交集
			//	//do nothing
			//}
			//else
			//{
			//	//有交集 合并 删除一个
			//	set1[num].insert(set1[num + k].begin(), set1[num + k].end());
			//	set1[num + k].clear();
			//}
		}
	}
	int re1 = 0,max=0;
	for (int m = 0; m < n; m++)
	{
		if (set1[m].size()!=0)
		{
			re1++;
			max = max > set1[m].size() ? max:set1[m].size();
		}
	}
	cout << re1 << endl;
	cout << max;
	delete set1;
}
exam_34::~exam_34()
{

}
bool cmp_1(const string &a, const string &b)
{
	int min = 0;
	min = a.length() > b.length() ? b.length() : a.length();
	for (int i = 0; i < min; i++)
	{
		if (a[i] > b[i])
			return true;
		else
		{
			if (a[i] < b[i])
				return false;
		}
	}
	if (a.length() > b.length())
		return false;
	else
		return true;
}
exam_33::exam_33()
{
//DO STH here
	vector<string> num;
	vector<string>::iterator iter;
	int n = 0,max=0,temp=0;
	string str;
	cin >> n;
	//int *num = new int[n];
	//cout << n << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		num.push_back(str);
		//cout << str;
	}
	//cout << "in:";
	/*for (iter = num.begin(); iter != num.end(); iter++)
	{
		cout << *iter ;
	}*/
	sort(num.begin(), num.end(),cmp_1);
	//cout << "out:";
	for (iter = num.begin(); iter != num.end(); iter++)
	{
	cout << *iter ;
	}
	/*for (iter = num.end()-1; iter != num.begin(); iter--)
	{
		cout << *iter ;
	}
	cout << *iter;*/
}
exam_33::~exam_33()
{

}
exam_32::exam_32()
{
//DO STH here
	//cout << "32" << endl;
	string str;
	stringstream ss;
	int length = 0;
	getline(cin, str);
	//cout << str << endl;
	ss.str(str);
	while (1)
	{
		//分割输入单词
		ss >> str;
		length = str.length();
		if (ss.fail())
			break;
	}
	cout << length;
}
exam_32::~exam_32()
{

}
exam_31::exam_31()
{
//DO STH here
	long long int a1=0, b1=0, v1=0, a2=0, b2=0, v2=0,x=0,y=0,yu1=0,yu2=0,shang1=0,shang2=0;
	int t = 0;
	cin >> t;
	//cout << t << endl;
	int *re_x = new int[t];
	int *re_y = new int[t];
	for (int j = 0; j < t; j++)
	{
		re_x[j] = 0;
		re_y[j] = 0;
	}

	for (int i = 0; i < t; i++)
	{
		//cout << "where2" << endl;
		cin >> a1 >> b1 >> v1 >> a2 >> b2 >> v2;
		//cout << "wher？2" << endl;
		if ((a1*b2 - a2 * b1) == 0 | (b1*a2 - b2 * a1) == 0)
		{
			shang1 = 0;
		}
		else
		{
			yu1 = (v1 * b2 - v2 * b1) % (a1*b2 - a2 * b1);
			yu2 = ((v1*a2 - v2 * a1) % (b1*a2 - b2 * a1));
			//cout << "wher？2" << endl;
			shang1 = (v1*b2 - v2 * b1) / (a1*b2 - a2 * b1);
			shang2 = (v1*a2 - v2 * a1) / (b1*a2 - b2 * a1);
			//cout << "wher？2" << endl;
			//cout << "yu1=" << yu1 << endl;
			//cout << "yu2=" << yu2 << endl;
			//cout << "shang1=" << shang1 << endl;
			//cout << "shang2=" << shang2 << endl;
		}
		if ((yu1|yu2)|shang1<=0|shang2<=0)
		{
			re_x[i] = -1;
			re_y[i] = -1;
			//cout << "where3" << endl;
		}
		else
		{
			re_x[i] = shang1;
			re_y[i] = shang2;
			//cout << "where4" << endl;


		}

	}

	for (int j = 0; j < t; j++)
	{
		if (re_x[j] != -1)
			cout << re_x[j] << re_y[j] << endl;
		else
			cout << "UNKNOWN" << endl;
	}
	delete(re_x);
	delete(re_y);

}
exam_31::~exam_31()
{

}
exam_30::exam_30()
{
	//DO STH here
	//cout << "30" << endl;
	//t个样例 每个样例n个板子
	int t = 0,n=0,now_h=0,now_i=0,temp=0,head=0,count=0,sum=0;
	stack <int> stk1;
	stack <int> stk2;
	cin >> t;
	int *re = new int[t];
	
	for (int i = 0; i < t; i++)
	{
		sum = 0;
		count = 0;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			//第一个
			if (j == 0)
				head = temp;
			else
			{
				if (temp > head)
				{
					sum = sum + head * (count + 1);
					/*cout << "wherer" << endl;
					cout << "head=" << head << endl;
					cout << "count=" << count << endl;
					cout << "re=" << head * (count + 1) << endl;*/
					for (int k = 0; k < count; k++)
						stk1.pop();
					head = temp;
					count = 0;

				}
				else
				{
					count++;
					stk1.push(temp);
					//cout << "here" << endl;
				}
			}
			//cout << "count=" << count << endl;
		}
		cout << "sum="<<sum<<endl;
		int j = 0;
		count = 0;
		while(stk1.size()!=0)
		{
			cout << "stk1.size()=" << stk1.size() << endl;
			temp = stk1.top();
			stk1.pop();
			cout << "stk1.size()=" << stk1.size() << endl;
			cout << "temp=" << temp << endl;
			cout << "head=" << head << endl;
			if (j == 0)
				head = temp;
			if (temp > head)
			{
				sum = sum + head * count;
				head = temp;
				count = 0;
			}
			else
			{

					count++;

				
			}
			
			/*if (temp > head&stk1.size()!=0)
			{
				sum = sum + head * (count+1);
				head = temp;
				count = 0;
			}
			else
			{
				if (stk1.size() != 0)
				{
					count++;
				}
				else
				{
					if (temp > head)
						sum = sum + temp * count;
					else
						sum = sum + head * count;
				}
			}*/
			j++;
			cout << "sum=" << sum << endl;
		}
		cout << "temp=" << temp << endl;
		cout << "count=" << count << endl;
		if(temp>head)
			sum = sum + (count + 1) * temp;
		else
			sum = sum + (count + 1) * head;
		//cout << "sum=" << sum << endl;
		re[i] = sum;
		
		
	}


	for (int j = 0; j < t; j++)
	{
		cout << re[j] << endl;
	}
	delete(re);
}
exam_30::~exam_30()
{

}
exam_29::exam_29()
{
	//DO STH here
	//不超过m 少于a可以继续 1-r个金币
	int m = 0, a = 0, r = 0;
	float p = 0.0;
	cin >> m >> a >> r;
	
	if (a + r - 1 <= m)
	{
		cout.setf(ios::showpoint);
		cout.precision(6);
		p = 1.00;
		cout << p;
	}
	else if (a + 1 >= m + 1)
	{
		cout.setf(ios::showpoint);
		cout.precision(6);
		p = 0.00;
		cout << p;
	}
	else
	{
		cout.flags(ios::fixed);
		cout.precision(5); //设置输出精度，

		p = (m -a+1)*1.0 / (r*1.0);
		cout << p;
	}
}
exam_29::~exam_29()
{

}
exam_28::exam_28()
{
//DO STH here
	//n个商品 m个优惠券
	int n=0, m=0,x=0,y=0,sum=0;
	int *price = new int[n];
	map<int, int>save;
	map<int, int>::iterator iter;
	for (int i = 0; i < n; i++)
	{
		cin >> price[i];
		sum = sum + price[i];
	}
	for (int j = 0; j < m; j++)
	{
		cin >> x;
		cin >> y;
		save.insert(make_pair(x, y));
	}
	for (iter = save.begin(); iter != save.end(); iter++)
	{
		if (iter->first <= sum)
			cout << sum - iter->second;
	}
}
exam_28::~exam_28()
{

}

class map_value_finder
{
public:
	map_value_finder(int &cmp_string) :m_s_cmp_string(cmp_string) {}
	bool operator ()(map<string,int>::value_type &pair)
	{
		return pair.second == m_s_cmp_string;
	}
private:
	int &m_s_cmp_string;
};


exam_27::exam_27()
{
//DO STH here
	map<string, int> save;
	map<string, int>::iterator iter;
	string str,str_t;
	stringstream ss;
	int max = 0;

	getline(cin, str);
	//cin >> str;
	cout << str << endl;
	ss.str(str);
	while (1)
	{
		//分割输入单词
		ss >> str_t;
		if (ss.fail())
			break;
		//去除标点
		if (ispunct(str_t[str_t.length()-1]))
		{
			str_t = str_t.substr(0, str_t.length() - 1);
		}
		//转换小写
		transform(str_t.begin(), str_t.end(), str_t.begin(), ::tolower);
		//在map中查找 ++ or 添加
		//cout << str_t << endl;
		if (save.count(str_t))
		{
			//存在
			iter = save.find(str_t);
			iter->second = iter->second + 1;
			//cout << "second" << iter->second << endl;
			//更改max
			//if (iter->second > max)
				//max = iter->second;
		}
		else
		{
			save.insert(make_pair(str_t, 1));
		}
		//cout << str_t << endl;


	}
	
	//find max
	for (iter = save.begin(); iter != save.end(); iter++)
	{
		//cout << iter->second<<endl;
		if (iter->second > max)
			max = iter->second;
	}
	//cout << max << endl;
		
	//输出
	while (1)
	{
		iter = find_if(save.begin(), save.end(), map_value_finder(max));
		if (iter != save.end())
		{
			cout << iter->first << endl;
			iter->second = 0;
		}
		else
			break;
	}

}
exam_27::~exam_27()
{

}
exam_26::exam_26()
{
//DO STH here
	map<char, char> f;
	map<char, char>::iterator iter;

	//cout << "26" << endl;
	

	/*3
	abcdef
	bcdefg
	abcdef
	bcdbcd
	abcabc
	defdef*/
	/*1
	abcabc
	defdef*/


	int t = 0;
	cin >> t;
	//cout << "t" << endl;
	string str1, str2;
	int *re = new int[t];
	for (int i = 0; i < t; i++)
	{
		re[i] = -1;
	}
	for (int i = 0; i < t; i++)
	{
		f.clear();
		cin >> str1;
		//cout << "str1" << endl;
		cin >> str2;
		//cout << "str2" << endl;
		//cout << typeid(str1).name() << endl;
		//cout << typeid(str1[0]).name() << endl;
		//长度不等
		if (str1.length() != str2.length())
			re[i] = 0;
		else
		{
			int j = 0;
			while (re[i] == -1 & j < str1.length())
			{
				iter = f.find(str1[j]);
				if (iter != f.end())
				{
					//解码
					cout << str2[j] << endl;
					cout << iter->second << endl;
					if (str2[j] != iter->second)
						re[i] = 0;
				}
				else
				{
					//add
					f.insert(map<char, char>::value_type(str1[j], str2[j]));
				}
				j++;
			}
			if (re[i] == -1)
				re[i] = 1;
		}
	}




	for (int i = 0; i < t; i++)
	{
		cout << "re[i]" << re[i] << endl;
		if (re[i])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	delete(re);

}
exam_26::~exam_26()
{

}
exam_25::exam_25()
{
//DO STH here
	cout << "25" << endl;
	//t个问题 n个人 m组
	int t=0,n = 0,m=0,temp1=0,temp2=0;
	cin >> t;
	int *re_min = new int[t];
	int *re_max = new int[t];
	for (int i = 0; i < t; i++)
	{
		cin >> n >> m;
		temp1 = n / m;
		temp2 = n % m;
		re_min[i] = temp2 * (temp1 + 1)*temp1 / 2 + (m - temp2)*temp1*(temp1 - 1) / 2;
		re_max[i] = ((n - m) + 1)*(n - m) / 2;
	}
	for (int i = 0; i < t; i++)
	{
		cout << re_min[i] << " " << re_max[i] << endl;
	}
	delete(re_min);
	delete(re_max);

}
exam_25::~exam_25()
{

}

exam_24::exam_24()
{
//DO STH here
	cout << "24" << endl;
	//k进制 l到r
	int q = 0, k = 0, l = 0, r = 0, l_num = 0,r_num=0, temp = 0, flag = 1;
	//, max_v = 0, max = 0, num = 0;
	cin >> q;
	int *re = new int[q];
	for (int i = 0; i < q; i++)
	{
		cin >> k >> l >> r;
		l_num = 0, r_num = 0;
		while (l / k)
		{
			l = l / k;
			l_num++;
		}
		cout << l_num;

		while (r / k)
		{
			r = r / k;
			r_num++;
		}
		cout << r_num;
		if (r_num != l_num)
		{
			re[i] = pow(k, r_num) - 1;
			//cout << pow(k, r_num) - 1 << endl;
		}
		else
		{
			re[i] = pow(k, r_num-1) - 1;
			//cout << pow(k, r_num-1) - 1 << endl;
		}

		/*while (flag&pow(k,temp)<r)
		{
			if (l < pow(k, temp)&pow(k, temp) < r&r < pow(k, temp + 1))
				flag = 0;
			else
				temp++;
		}
		if (flag == 0)
		{
			re[i] = pow(k, temp) - 1;
			cout << pow(k, temp) - 1;
		}*/




		/*temp = 0,max_v = 0, max = 0;
		cin >> k >> l >> r;
		for (int j = l; j <= r; j++)
		{
			num = j;
			while (num != 0)
			{
				if (num%k == k - 1)
					temp++;
				num = num / k;
			}
			if (temp > max)
			{
				max = temp;
				max_v = j;
			}
		}*/
		//re[i] = max_v;
	}

	for (int i = 0; i < q; i++)
	{
		cout << re[i] << endl;
	}


	delete(re);



}
exam_24::~exam_24()
{

}

exam_23::exam_23()
{
//DO STH here
	cout << "23" << endl;
	int n = 0,sum=0,temp=0,max=0,flag=0;
	cin >> n;
	if (n <= 2)
		cout << -1 << endl;
	else
	{
		cin >> max;
		cin >> temp;
		if (max >= temp)
			sum = temp;
		else
		{
			sum = max;
			max = temp;
		}
		for (int i = 0; i < n-2; i++)
		{
			cin >> temp;
			if (max > temp)
				sum=sum+temp;
			else
			{
				sum = sum + max;
				max = temp;
			}
			if (max < sum&flag == 0)
			{
				flag = 1;
				cout << i + 3 << endl;
			}
		}
		if(flag==0)
			cout << -1 << endl;
	}
}
exam_23::~exam_23()
{

}
exam_22::exam_22()
{
	//DO STH here
	vector<int> vec1,vec2;
	vector<int>::iterator it;
	string str1,str2;
	stringstream ss;
	int temp,count=0,flag=0;
	
	//输入胃口值
	ss.clear();
	getline(cin, str1);
	ss.str(str1);
	//整理成int
	while(1)
	{
		ss >> temp;
		if (ss.fail())
			break;
		vec1.push_back(temp);	
	}
	//排序
	sort(vec1.begin(), vec1.end());

	//输入糖果
	ss.clear();
	getline(cin, str2);
	ss.str(str2);
	//整理成int
	while (1)
	{
		ss >> temp;
		if (ss.fail())
			break;
		vec2.push_back(temp);
	}
	//排序
	sort(vec2.begin(), vec2.end());

	cout << "weikou" << endl;
	for (size_t i = 0; i < vec1.size(); i++)
	{
		cout << vec1[i];
	}
	cout << "tangguo" << endl;
	for (size_t i = 0; i < vec2.size(); i++)
	{
		cout << vec2[i];
	}
	/*cout << "size" << vec2.size()-1 << endl;
	int y = vec2.size() - 1;
	int z = y == 0;
	cout << z;*/
	//从大到小遍历糖果
	for (size_t i = vec2.size()-1; i !=-1; i--)
	{
		flag = 0;
		cout << "where" << endl;
		//从大到小遍历胃口
		for (size_t j = vec1.size()-1; j !=-1&flag==0 ; j--)
		{
			cout << "j"<<j << endl;
			//如果糖果大于胃口
			if (vec2[i] >= vec1[j])
			{
				//计数++ 删除该胃口以及比他大的 该糖果不在继续遍历 break
				count++;
				vec1.erase(vec1.begin()+j);
				flag = 1;
				cout << "weikou" << endl;

			}
			cout << vec1[i]<<endl;
			cout << "where2" << endl;
		}
		cout << "where3" << endl;
		//cout << vec2[i];
	}

	cout << "weikou" << endl;
	for (size_t i = 0; i < vec1.size(); i++)
	{
		cout << vec1[i];
	}
	cout << "tangguo" << endl;
	for (size_t i = 0; i < vec2.size(); i++)
	{
		cout << vec2[i];
	}

	cout << "count" << count << endl;
	
}
exam_22::~exam_22()
{

}
exam_21::exam_21()
{
	//DO STH here
	int n = 0, temp = 0,wrong=0,x=0,change=0,count=0;
	cin >> n;
	/*int y = 1,z=-1;
	z = y + 1;
	cout << "w:" << z << endl;
	z = z & 1;
	cout << "d:" << z << endl;
	z = y & y == 1;
	cout << "f:" << z << endl;*/
	for (int i = 0; i < n; i++)
	{
		change = 0;
		wrong = 0;
		temp = i + 1;
		//cout << "temp:" << temp << endl;
		while (temp>0 & wrong == 0)
		{
			x = temp % 10;
			//cout << "x:" << x << endl;
			//无效 直接跳出
			if (x == 3 | x == 4 | x == 7)
				wrong++;
			//有变化 记录
			else if (x == 2 | x == 5 | x == 6 | x == 9)
				change++;
			temp = temp / 10;
		}
		//cout << "value"<<i + 1 << endl;
		//cout << wrong << endl;
		//cout << change << endl;
		if (wrong == 0 & change != 0)
		{
			cout << "value" << i + 1 << endl;
			count++;

		}


	}
	cout << count << endl;
}
exam_21::~exam_21()
{

}
int exam_20::get_result(int n)
{
	if (n > 2)
		return get_result(n - 1) + get_result(n - 2);
	else
		return n;
}

exam_20::exam_20()
{
//DO STH here
	cout << "20" << endl;
	//n=k*2+m
	int n = 0, m = -1, k = 0, result = 0;
	cin >> n;
	cout << n << endl;
	cout << get_result(n) << endl;




}
exam_20::~exam_20()
{

}
exam_19::exam_19()
{
	//DO STH here
	string str1, str2,temp1,temp2;
	cin >> str1;
	cin >> str2;
	cout << str1 << endl;
	cout << str2 << endl;
	for (int i = 0; i < str2.length(); i++)
	{
		temp2 = str2[i];
		while (str1.find(temp2) != -1)
		{
			cout << str1.find(temp2)<<endl;
			str1.erase(str1.find(temp2),1);
		}
		/*for (int j = 0; j < str1.length(); j++)
		{*/
		//str1.erase(remove(str1.begin(), str1.end(), temp2), str1.end());
			//remove(str1.begin(), str1.end(), temp2);
			/*temp1 = str1[j];
			if (temp2 == temp1)
			{
				str1.substr();
			}*/


		//}
		cout << str1 << endl;
		cout << str2 << endl;

	}
	//cout << str1 << endl;
	//cout << str2 << endl;
}
exam_19::~exam_19()
{

}
//exam_18::
char *exam_18::str_copy(char *result,char *src)
{
	while (src != NULL& *src != '/0')
	{
		*result = *src;
		result++;
		src++;
		//cout << "dfkje" << endl;
		if (*src == '\0')
		{
			//cout << "dfkje" << endl;
			*result = *src;
			break;
		}
	}
	//cout << "35465" << endl;
	//cout << result << endl;

	return result;
}
exam_18::exam_18()
{
	//DO STH here
	char *a=new char[200], *b=new char[200];
	cin >> a;
	//cout << a << endl;
	str_copy(b, a);
	cout << b << endl;
	//cout << &a << endl;
	//cout << &b << endl;
	delete(a);
	delete(b);
}
exam_18::~exam_18()
{

}
exam_17::exam_17()
{
	//DO STH here
	int n = 0, k = 0,n_temp=1,result=0;
	cin >> n >> k;
	for(int i=0;k!=0;i++)
	{
		result = result + pow(n, i)*(k % 2);
		k = k / 2;
		cout << result << endl;
	}

}
exam_17::~exam_17()
{

}
exam_16::exam_16()
{
	//DO STH here
	cout << "16" << endl;
	int x = 0, y = 0, n = 0,min_n=0,min_temp=32768,temp;
	string str;

	getline(cin, str,',');
	x = atoi(str.c_str());
	getline(cin, str, ',');
	y = atoi(str.c_str());
	getline(cin, str, ',');
	n = atoi(str.c_str());
	
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	cout << "n=" << n << endl;
	int *npcx = new int[n];
	int *npcy = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << i << endl;
		getline(cin, str, ',');
		npcx[i] = atoi(str.c_str());
		if(i==n-1)
			cin >> npcy[i];
		else
		{
			getline(cin, str, ',');
			npcy[i] = atoi(str.c_str());
		}

	}
	for (int i = 0; i < n; i++)
	{
		temp = (npcx[i] - x)*(npcx[i] - x) + (npcy[i] - y)*(npcy[i] - y);
		if (temp < min_temp)
		{
			min_temp = temp;
			min_n = i;
		}


		cout << npcx[i]<<endl;

		cout << npcy[i]<<endl;
		//cout << "where3" << endl;
	}

	cout << "(" << npcx[min_n] << "," << npcy[min_n] << ")" << endl;
	free(npcx);
	free(npcy);
}
exam_16::~exam_16()
{

}
exam_15::exam_15()
{
//DO STH here
	int n = 0, m = 0, p = 0,temp = 0,p_num=0,order =0;
	char do_sth = '0';
	cin >> n >> m >> p;
	cout << n << endl;
	cout << m << endl;
	cout << p << endl;
	int *num = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << num[i] << endl;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> do_sth;
		cin >> temp;
		if (do_sth == 'A')
			num[temp-1] = num[temp-1] + 1;
		else
			num[temp-1] = num[temp-1] - 1;
	}
	for (int i = 0; i < n; i++)
	{
		cout << num[i] << endl;
	}
	p_num = num[p-1];
	cout << p_num << endl;
	for (int i = 0; i < n; i++)
	{
		if (num[i] > p_num)
			order++;
	}
	cout << order+1 << endl;


}
exam_15::~exam_15()
{

}

exam_14::exam_14()
{
//DO STH here
	//cout << "14";
	int num = 0, eve[6], sum_f = 0, sum_b = 0,sum_d,min=9;
	cin >> num;
	for (int i = 0; i < 6; i++)
	{
		eve[5-i] = num % 10;
		num = num / 10;
	}
	for (int i = 0; i < 6; i++)
	{
		//cout << eve[i] << endl;
	}
	sum_f = eve[0] + eve[1] + eve[2];
	sum_b = eve[3] + eve[4] + eve[5];
	//cout << sum_f << endl;
	//cout << sum_b << endl;
	//相等 不需要变数字
	if (sum_f == sum_b)
	{
		cout << 0 << endl;
		//跳出
		//return 0;
	}
	else if (sum_f > sum_b)
	{
		sum_d = sum_f - sum_b;
		eve[0] = eve[3];
		eve[1] = eve[4];
		eve[2] = eve[5];
	}
	else
	{
		sum_d = sum_b - sum_f;
		
	}
	//找到最小值
	cout << "min:" << min << endl;
	cout << "min:" << eve[0] << endl;
	cout << "min:" << eve[1] << endl;
	cout << "min:" << eve[2] << endl;
	if (eve[0] <= eve[1] & eve[0] <= eve[2])
		{
			min = eve[0];
			eve[0] = 9;
		}
	else if (eve[1] <= eve[0] & eve[1] <= eve[2])
		{
			min = eve[1];
			eve[1] = 9;
		}
	else
		{
			min = eve[2];
			eve[2] = 9;
		}
	cout << "min:"<<min << endl;
	//是不是一位就可以的
	if (sum_d <= 9 - min)
			cout << 1 << endl;
	else
	{
		cout << sum_d << endl;
		cout << min << endl;
		sum_d = sum_d - (9 - min);

		if (eve[0] <= eve[1] & eve[0] <= eve[2])
		{
			min = eve[0];
			eve[0] = 9;
		}
		else if (eve[1] <= eve[0] & eve[1] <= eve[2])
		{
			min = eve[1];
			eve[1] = 9;
		}
		else
		{
			min = eve[2];
			eve[2] = 9;
		}
		cout << sum_d << endl;
		cout << min << endl;
		if (sum_d <= 9 - min)
			cout << 2 << endl;
		else
		{
			cout << 3 << endl;
		}
	}



}
exam_14::~exam_14()
{

}
exam_13::exam_13()
{
//DO STH here
	//cout << "13" << endl;
	//string str1, str2;

	double str1, str2,re;
	string re_str;
	//char re_str[41] = { 0 };
	cin >> str1 >> str2;
	re = str1 * str2;
	cout << str1 << endl;
	cout << str2 << endl;
	cout << re << endl;

	cout << to_string(str1) << endl;
	cout << to_string(str2) << endl;
	cout << to_string(re) << endl;

	re_str = to_string(re);

	double a = 20000000000000000000.0, b = 30000000000000000000.0,c=0.0;
	c = a * b;
	cout << "text" << endl;
	cout << c<<endl;
	cout << to_string(a) << endl;
	cout << to_string(b) << endl;
	cout<< to_string(c) << endl;

	//double num = -1.235;
	//char str[42];                        // 在字符串中，正负号、小数点、结束符各占一位
	//_gcvt_s(str, sizeof(str), re, 41);    // double转为字符串，显示三位，1.235四舍五入为1.24
	//cout << str << endl;                // 输出结果为-1.24

	//stringstream ss;
	//ss << re;
	//ss >> re_str;
	//cout<<ss.str()<<endl;

	cout << re_str << endl;




}
exam_13::~exam_13()
{

}
exam_12::exam_12()
{
	//DO STH here
	string str,str_temp;
	getline(cin, str);
	//cout << str << endl;
	stringstream ss(str);
	while (ss>>str_temp)
	{
		//cout << str_temp << endl;
		for (int i = str_temp.length()-1; i >=0; i--)
		{
			cout << str_temp[i];

		}
		cout << " ";
	}


	//cout << str << endl;





}
exam_12::~exam_12()
{

}
exam_11::exam_11()
{
//DO STH here
	cout << "exam 11!!" << endl;
	string str;
	//char *word = new char[26];
	string *word = new string[26];
	int flag[26];
	int flag_in = 0;
	int num = -1;
	for (int j = 0; j < 26; j++)
	{
		flag[j] = 0;
		//cout << flag[j] << endl;
		//cout << word[j] << endl;
	}
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		//cout << "where1" << endl;
		flag_in = 0;
		for (int j = 0; j < 26; j++)
		{
			//cout << "where2" << endl;
			//cout << str.substr(i, 1) << endl;
			if (word[j] == str.substr(i,1))
			{
				//cout << "where3" << endl;
				flag[j] = 2;
				flag_in = 1;
			}
		}
		if (flag_in == 0)
		{
			for (int j = 0; j < 26; j++)
			{
				//cout << "where4" << endl;
				if (word[j].size()==0)
				{
					flag[j] = 1;
					word[j] = str.substr(i, 1);
					break;
				}
			}
		}
	}
	for (int j = 0; j < 26; j++)
	{
		//cout << flag[j] << endl;
		//cout << word[j] << endl;
	}
	for (int j = 0; j < 26; j++)
	{
		if (word[j] != "/0"&flag[j] == 1)
			num = j;
	}
	if (num == -1)
	{
		cout << NULL << endl;
		
	}
	else
		cout << word[num] << endl;
	
	//cout << str << endl;

}
exam_11::~exam_11()
{

}



exam_10::exam_10()
{
	//DO STH here
	int t = 0, n = 0, x = 0, y = 0, x_last = 0, y_last = 0, flag = 0;
	cin >> t;
	int *re = new int[t];
	for (int i = 0; i < t; i++)
	{
		flag = 0;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> x >> y;
			if (j != 0 & x != y_last)
				flag = 1;
			y_last = y;

			/*if (j == 0)
				y_last = y;
			else
			{
				if (x != y_last)
					flag = 1;
				else
				{
					y_last = y;
				}

			}*/
		}
		re[i] = flag;
	}
	for (int i = 0; i < t; i++)
	{
		if (flag)
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}
}
exam_10::~exam_10()
{

}
exam_9::exam_9()
{
	//DO STH here
	int m = 4, t = 0,start = 0;
	cin >> t;
	string *re = new string[t];
	string str_temp;
	char temp='0';
	int num = 1;
	for (int i = 0; i < t; i++)
	{
		start = 0;
		temp = '0';
		num = 1;
		cin >> str_temp;
		for (int j = 0; j < str_temp.length(); j++)
		{	
			if ((char)(temp + num) == str_temp[j])
			{
				num = num + 1;
			}
			else
			{
				if (num >= 4)
				{
					str_temp.replace(start, num-2, "-");
					j = j - num;
				}
				start = j+1;
				num = 1;
				temp = str_temp[j];
				
			}
		}
		cout << str_temp << endl;
		re[i] = str_temp;
	}

	for (int i = 0; i < t; i++)
	{

		cout << re[i] << endl;
	}

}
exam_9::~exam_9()
{

}
exam_8::exam_8()
{
//DO STH here
	int n = 0, m = 0, order = 0, k = 0, x = 0,j=0;
	cin >> n >> m;
	long int v;
	long int *b;
	b = (long int*)malloc(sizeof(long int)*n);
	long int *a;
	a = (long int*)malloc(sizeof(long int)*n);
	int *re;
	re = (int*)malloc(sizeof(int)*m);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> order;
		if (order == 1)
		{
			cin >> k;
			k = k - 1;
			re[j] = b[k];
			j++;
		}
		else
		{
			cin >> x >> v;
			x = x - 1;
			while (v != 0)
			{
				if (a[x] == b[x])
					x++;
				else if (a[x] - b[x] >= v)
				{
					b[x] = b[x] + v;
					v = 0;
				}
				else
				{
					v = v - a[x] - b[x];
					b[x] = a[x];
				}
			}
			for (int i = 0; i < n; i++)
			{
				cout << b[i] << endl;
			}
		}
	}
	for (int i = 0; i < j; i++)
	{
		cout<< re[i]<<endl;
	}
}
exam_8::~exam_8()
{

}

exam_7::exam_7()
{
//DO STH here
	long long int  t = 0, m = 0, n = 0;
	cin >> t;

	long long int *re;
	re = (long long int*)malloc(sizeof(long long int)*t);
	for (long int i = 0; i < t; i++)
	{
		cin >> n >> m;
		if (n == 1 & m == 1)
			re[i] = 1;
		else if (n == 1 & m != 1)
			re[i] = m - 2;
		else if (m == 1 & n != 1)
			re[i] = n - 2;
		else if (n == 2 | m == 2)
			re[i] = 0;
		else if (n >= 3 & m >= 3)
			re[i] = (n - 2)*(m - 2);
	}
	for (long int i = 0; i < t; i++)
	{
		cout << re[i] << endl;
	}
	free(re);


}
exam_7::~exam_7()
{

}


exam_6::exam_6()
{
//DO STH here


	long int x = 0;
	cin >> x;
	if (x % 5 == 0)
		cout << x / 5;
	else
		cout << x / 5 + 1;
	//cout << x / 5 + 1;

}
exam_6::~exam_6()
{

}

exam_1::exam_1()
{
	//DO STH here
	cout << "exam 1 work!" << endl;
}

exam_1::~exam_1()
{
}



//https://blog.csdn.net/whl_program/article/details/81156478
exam_2::exam_2()
{
	cout << "start" << endl;
	cin >> sys >> rely;
	cout << "sys:" << sys << endl << "rely:" << rely << endl;

	bool* start = new bool[sys+1];
	int* time = new int[rely+1];
	//不是很懂 为啥+1才行

	for (int i = 0; i < sys; i++ )
	{
		cin >> time[i];
		//save
		cout << time[i] << endl;
	}
	//cout << time[3] << endl;
	for (int i = 0; i < rely; i++)
	{
		cout << start[i] << endl;
		int head=0, tail=0;
		cin >> head >> tail;
		map.insert(make_pair(head,tail));
		start[i] = false;
	}
	for (int i = 0; i < rely; i++)
	{
		cout << start[i] << endl;
	}
	cout << "wrong" << endl;
	delete[] start;
	cout << "dont know" << endl;
	delete[] time;
	cout << "dont know either" << endl;

}
exam_2::~exam_2()
{

}

/*需要修改的*/
exam_3::exam_3()
{
	string in, pis;
	int weizhi = 0, j = 0;
	cin >> in;

	for (int i = 0; i < in.length(); i++)
	{
		bool flag = true;
		if (in[i] >= 'a'&&in[i] <= 'z')
		{

		}
		else
		{
			if (flag == true)
			{
				flag = false;
				pis = in.substr(weizhi, i);

			}
		}


	}
	cout << pis << endl;
}

exam_3::~exam_3()
{

}


exam_4::exam_4()
{
	//DO STH here

	/*2
		5 60
		59 20 30 90 100
		5 60
		59 20 10 10 100*/
	int num = 0, n = 0, soc_p = 0,sum_soc = 0,d_soc = 0,count = 0;
	cin >> num;



	
	for (int j = 0; j < num; j++)
	{
		n = 0, soc_p = 0, sum_soc = 0, d_soc = 0, count = 0;
		cin >> n >> soc_p;
		int *soc = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> soc[i];
			sum_soc += soc[i];
		}

		d_soc = n * soc_p - sum_soc;
		
		while (d_soc >= 0)
		{
			count++;
			d_soc = d_soc - (100 - *min_element(soc, soc + n));
			*min_element(soc, soc + n) = 100;

		}
		
		cout << count << endl;


	
		delete soc;

	}
	
}
exam_4::~exam_4()
{

}





exam_5::exam_5()
{
	//DO STH here
	/*asdfjkl
		5
		as
		asd
		df
		fjkl
		jkl*/
	cout << "text" << endl;

	string txt;
	string *temp;
	long int num = 0;
	cin >> txt;
	cin >> num;
	string *word = new string[num];
	int str_len_max = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> word[i];
		if (word[i].length() > str_len_max)
			str_len_max = word[i].length();
	}
	for (int i = 0; i < num; i++)
	{
		cout << word[i] << endl;
		cout << word[i].length() << endl;
	}
	
	int star = 0;
	for (int i = 1; i < str_len_max; i++)
	{
		temp = find(word, word + num, txt.substr(star,star+i));
		cout << *temp << endl;
		//star = star + temp->length();
		
	}
	temp = find(word, word + num, txt.substr(0, 2));
	cout << *temp << endl;


	cout << str_len_max << endl;
	//cout << txt << endl;
	//delete word;



}
exam_5::~exam_5()
{

}
