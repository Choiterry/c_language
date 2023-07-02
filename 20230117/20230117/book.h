//#pragma once
//#include <iostream>
//#include<cstring>
//using namespace std;
//
//class book
//{
//private:
//	char* title;
//	char* isbn;
//	int price;
//public:
//	book(const char* title,const char* isbn, int price)
//	{
//		int len1 = strlen(title) + 1;
//		this->title = new char[len1];
//		strcpy(this->title, title);
//
//		int len2 = strlen(isbn) + 1;
//		this->isbn = new char[len2];
//		strcpy(this->isbn,isbn);
//		
//		this->price = price;
//	}
//	void showbookinfo()
//	{
//		cout << "제목: " << title << endl;
//		cout << "isbn: " << isbn << endl;
//		cout << "가격: " << price << endl;
//	}
//};
//class ebook : public book
//{
//private:
//	char* drmkey;
//public:
//	ebook(const char* title, const char* isbn, int price,const char* drmkey) :book(title, isbn, price)
//	{
//		int len1 = strlen(drmkey) + 1;
//		this->drmkey = new char[len1];
//		strcpy(this->drmkey, drmkey);
//	}
//	void showebookinfo()
//	{
//		showbookinfo();
//		cout << "인증키: " << drmkey << endl;
//	}
//};
