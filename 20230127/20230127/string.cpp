//#include "string.h"
//String::String()
//{
//
//}
//String::~String()
//{
//
//}
//String::String (const char* mStr)
//{
//	len = strlen(mStr) + 1;
//	Str = new char[len];
//	strcpy(Str, mStr);
//}
//String::String (const String& ref)
//{
//	len = strlen(ref.Str) + 1;
//	Str = new char[len];
//	strcpy(Str, ref.Str);
//}
//String& String::operator=(const String& ref)
//{
//	if (Str != NULL)
//		delete[]Str;
//	len = strlen(ref.Str) + 1;
//	Str = new char[len];
//	strcpy(Str, ref.Str);
//	return *this;
//}
//bool String::operator==(const String& ref)
//{
//	if (strcmp(Str, ref.Str) == 0)
//		return true;
//	else
//		return false;
//}
//String& String::operator+=(const String& ref)
//{
//	len += (ref.len - 1);
//	char* tmp = new char[len];
//	strcpy(tmp, Str);
//	strcat(tmp, ref.Str);
//	if (Str != NULL)
//		delete[]Str;
//	Str = tmp; // 디폴트 연산자 사용
//	return *this; // return 값을 본 개체를 돌려준다.
//}
//String String::operator+(const String& ref)
//{
//	len += (ref.len - 1);
//	char* tmp = new char[len];
//	strcpy(tmp, Str);
//	strcat(tmp, ref.Str);
//
//	String temp(tmp); //copy conStructor로 복제하고 
//	delete[]tmp; // tmp 는 delete 한다
//	return temp; // 새로 생성한 객체를 돌려준다
//}
//ostream&operator<<(ostream& oS, const String& ref)
//{
//	oS << ref.Str;
//	return oS;
//}
//istream&operator>>(istream& iS, String& ref)
//{
//	char Str[100];
//	iS >> Str;
//	ref = String(Str);
//	return iS;
//}
