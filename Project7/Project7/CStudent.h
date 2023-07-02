#pragma once

#include <string>
#include <iostream>

using namespace std;

class CStudent
{
private:
	CStudent();
	CStudent(int nid, string strname);
public:
	int m_nid;
	string m_strname;
	int Getid();
	void Setid(int nid);

	friend ostream& operator << (ostream& outputStream, const CStudent AStudent);
};

