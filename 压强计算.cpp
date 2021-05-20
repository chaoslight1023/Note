#include<iostream>
#include<stdio.h>
using namespace std;
//压强计算0.1
void showmenu();//声明主菜单函数
int pressure(double F, double s);//声明计算压强函数
int force(double p, double s);//声明计算压力函数
int square(double p, double F);//声明计算受力面积函数
int main()
{
	double F, s, p;
	while (1)
	{
		showmenu();//使用主菜单函数
		int select;
		cout << "请输入数字: ";
		cin >> select;
		cout << endl;
		system("cls");
		switch (select)
		{
		case 1://1.求压强
			cout << "请输入压力(F/N):";
			cin >> F;
			cout << "请输入受力面积(s/m2):";
			cin >> s;
			p = pressure(F, s);
			cout << "压强(p/Pa)(约)等于:" << p << endl;
			cout << "是否换算成科学计数法形式?" << endl;
			cout << "1.是  2.否" << endl;
			cin >> select;
			if (select == 1)
				printf("压强(p/Pa)(约)等于:%e", p);
			else
				cout << "压强(p/Pa)(约)等于:" << p << endl;
			system("pause");
			system("cls");
			break;
		case 2://2.求压力
			cout << "请输入压强(p/Pa):";
			cin >> p;
			cout << "请输入受力面积(s/m2):";
			cin >> s;
			F = force(p, s);
			cout << "压力(F/N)(约)等于:" << F << endl;
			cout << "是否换算成科学计数法形式?" << endl;
			cout << "1.是  2.否" << endl;
			cin >> select;
			if (select == 1)
				printf("压力(F/N)(约)等于:%e", F);
			else
				cout << "压力(F/N)(约)等于:" << F << endl;
			system("pause");
			system("cls");
			break;
		case 3://3.受力面积
			cout << "请输入压强(p/Pa):";
			cin >> p;
			cout << "请输入压力(F/N):";
			cin >> F;
			s = square(p, F);
			cout << "受力面积(s/m2)(约)等于:" << s << endl;
			cout << "是否换算成科学计数法形式?" << endl;
			cout << "1.是  2.否" << endl;
			cin >> select;
			if (select == 1)
				printf("受力面积(s/m2)(约)等于:%e", s);
			else
				cout << "受力面积(s/m2)(约)等于:" << s << endl;
			system("pause");
			system("cls");
			break;
		case 0://0.退出
			cout << "欢迎下次使用，再见！" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "无法识别，请重新输入" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}
void showmenu()//定义主菜单函数
{
	cout << "**************************\t" << endl;
	cout << "*****1.计算压强***********\t" << endl;
	cout << "*****2.计算压力***********\t" << endl;
	cout << "*****3.计算受力面积*******\t" << endl;
	cout << "*****4.敬请期待...********\t" << endl;
	cout << "*****0.退出程序***********\t" << endl;
	cout << "**************************\t" << endl;
}
int pressure(double F, double s)//定义计算压强函数
{
	double p;
	p = F / s;
	return p;
}
int force(double p, double s)//定义计算压力函数
{
	double F;
	F = p * s;
	return F;
}
int square(double p, double F)//定义计算受力面积函数
{
	double s;
	s = F / p;
	return s;
}