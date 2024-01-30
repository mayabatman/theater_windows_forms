#pragma once
class Place
{
private:
	int Money;
	bool Status; // 1 - свободен
	bool Pressed;
public:
	Place();
	Place(int);
	~Place();

	void set_mon(int);
	void set_stat(bool);
	void set_pres(bool);

	int get_mon();
	bool get_stat();
	bool get_pres();

	//Place& operator=(Place const& second);
};

