#pragma once
#include <string>

using namespace std;
class Education
{
private:
	int Status; //��� ���� �����, ��� ����� ������ ������
	string University;
	string Special;
public:
	Education();
	Education(int, string, string);
	~Education();

	int get_stat();
	string get_un();
	string get_sp();

	void set_stat(int);
	void set_un(string);
	void set_sp(string);
};

