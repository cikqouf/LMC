#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<string>
#include<regex>
using namespace std;
main()
{
	string z,var;
	int n;
	cout<< "The expression is "; cin>> z;
	//For the First and Second
	cout<< "How many vars are there?(shoud be an integer) "; cin>> n;
	if (n<=0)
	{
		cout<< "The fuction is " << z;
	}
	else
	{
		for (int i=1; i<=n; i++)
		{
			cout<< "Please input the exact vars(s) "; cin>> var;
			if ()//���var�����ֻ��ڱ��ʽ(expression)�У��򱨴�
		        cout<< "var" << i << " = " << var <<endl;
		}
	}

        regex p ("(\\+)"); //һ��ǳª��˼·���϶���ܼ���
	/* First ��������˼·������Գ��ú�����(sin, cos...)���б�ע(mathematica�ı����д����ĸ�Ǹ�˼·)���������
	 * Second ͬʱ�����ʽ���е��������(+, -, *, /...)�Ժ���������ʽ���֣�Ҳ����б�ע���������
	 */
	/*if (regex_search(z,p))
	{
		cout<< " + " << endl;
	}
	system("pause");*/
	return 0;
}
		

