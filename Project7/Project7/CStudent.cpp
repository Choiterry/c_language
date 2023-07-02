#include "CStudent.h"
CStudent::CStudent()
{

}

CStudent::CStudent(int nid, string strname)
{
	m_nid = nid;
	m_strname = strname;
}

int CStudent::Getid()
{
	return m_nid;
	// TODO: 여기에 구현 코드 추가.
}


void CStudent::Setid(int nid)
{
	m_nid = nid;
}
ostream& operator << (ostream& outputstream, const CStudent& AStudent)
{
	ostream << "id =" << AStudent m_nid << endl;
	ostream << "name =" << AStudent m_strname << endl;
}