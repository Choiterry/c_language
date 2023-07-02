#pragma once
class person
{
private:
	char *name;
	int age;
public:
	person();
	person(char* myname, int myage);
	~person();
	void setpersoninfo(char* myname, int myage);
	void showpersoninfo() const;

};

