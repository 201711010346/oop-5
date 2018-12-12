#include"people.h"
void Date::Set(int y, int m, int d)     //Date类的函数实现
{
	year = y;
	month = m;
	day = d;

}

int Date::GetYear()
{
	return year;
}

int Date::GetMonth()
{
	return month;
}

int Date::GetDay()
{
	return day;
}

Person::Person()        //Person类的函数实现
{
	strcpy(name, "00");
}

char *Person::Getname()
{
	return name;
}

void Person::Input()
{
	cout << "请输入信息\n";
	cout << "姓  名:";
	cin >> name;
	cout << "编  号：";
	cin >> number;
	int y, m, d;
	cout << "出生日期（年份 月份 日期）：";
	cin >> y >> m >> d;
	birthday.Set(y, m, d);
	cout << "性别（m/f）:";
	cin >> sex;

}

void Person::Output()
{
	cout << "姓  名：" << name << endl;
	cout << "编  号：" << number << endl;
	cout << "性  别：";
	if (sex = 'm')
		cout << "女" << endl;
	else
		cout << "男" << endl;
	cout << "出生日期：" << birthday.GetYear() << '-' << birthday.GetMonth() << '-' << birthday.GetDay() << endl;

}

void Student::Input()             //Student类的函数实现
{
	Person::Input();
	cout << "专  业：";
	cin >> speciality;

}

void Student::Output()
{
	Person::Output();
	cout << "专  业:" << speciality << endl;
}

void Graduate::Input()      //Graduate类的函数实现
{
	Student::Input();
	cout << "课  题：";
	cin >> reaserchTopic;
}

void Graduate::Output()
{
	Student::Output();
	cout << "课  题" << reaserchTopic << endl;
}


void Teacher::Input()           //Teacher类的函数实现
{
	cout << "职  称：";
	cin >> academicTitle;
}

void Teacher::Output()
{
	Person::Output();
	cout << "职  称：" << academicTitle << endl;
}

void PostgraduateOnJob::Input()    //PostgraduateOnJob类的函数实现
{
	Graduate::Input();
	cout << "职  称：";
	cin >> academicTitle;
}

void PostgraduateOnJob::Output()
{
	Graduate::Output();
	cout << "职  称：" << academicTitle << endl;
}
