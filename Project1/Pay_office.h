#pragma once
/*class Pay_office
{

public:
	Pay_office();
	~Pay_office();
};*/

class Pay_office
{
public:
	virtual bool to_pay() = 0;
	virtual ~Pay_office() {}
};

class Pay_Card : public Pay_office
{
public:
	Pay_Card() {}
	bool to_pay();
};

class Pay_Pushkin : public Pay_office
{
public:
	Pay_Pushkin() {}
	bool to_pay();
};

class Pay_Sertif : public Pay_office
{
public:
	Pay_Sertif() {}
	bool to_pay();
};


// Фабрики объектов
class Pay_Factory
{
public:
	virtual Pay_office* createPay() = 0;
	virtual ~Pay_Factory() {}
};

class CardFactory : public Pay_Factory
{
public:
	Pay_office* createPay() {
		return new Pay_Card;
	}
};

class PushkinFactory : public Pay_Factory
{
public:
	Pay_office* createPay() {
		return new Pay_Pushkin;
	}
};

class SertifFactory : public Pay_Factory
{
public:
	Pay_office* createPay() {
		return new Pay_Sertif;
	}
};
