#include "Checking.h"



Checking::Checking()
{
}


Checking::~Checking()
{
}

bool Checking::file_exist(string filename)
{
	ifstream f1;
	f1.open(filename, ios_base::in); //������� ����
	if (!f1.is_open() || f1.fail()) //�������� �� ������������ ��������
	{
		return false;
	}
	return true;
}
