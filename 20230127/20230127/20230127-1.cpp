//#include <iostream>
//#include <cstring>
//using namespace std;
//class book
//{
//private:
//	char* title;
//	char* isbn;
//	int price;
//public:
//	book(const char* btitle, const char* bisbn, int bprice)
//	{
//		int len1 = strlen(btitle) + 1;
//		title = new char(len1);
//		strcpy(title, btitle);
//		int len2 = strlen(bisbn) + 1;
//		isbn = new char(len2);
//		strcpy(isbn, bisbn);
//		price = bprice;
//	}
//	book operator=(const book& ref)
//	{
//		delete[]title;
//		delete[]isbn;
//
//		int len1 = strlen(ref.title) + 1;
//		title = new char(len1);
//		strcpy(title, ref.title);
//		int len2 = strlen(ref.isbn) + 1;
//		isbn = new char(len2);
//		strcpy(isbn, ref.isbn);
//		price = ref.price;
//		return *this;
//	}
//	void showinfo()
//	{
//		cout << title << isbn << price << endl;
//	}
//};
//class ebook : public book
//{
//private:
//	char* drmkey;
//public:
//	ebook(const char* btitle, const char* bisbn, int bprice, const char* drmkey) :book(btitle, bisbn, bprice)
//	{
//		int len3 = strlen(drmkey) + 1;
//		this->drmkey = new char(len3);
//		strcpy(this->drmkey, drmkey);
//	}
//	ebook operator=(const ebook& ref)
//	{
//		delete[]drmkey;
//		book::operator=(ref);
//		int len1 = strlen(ref.drmkey) + 1;
//		drmkey = new char(len1);
//		strcpy(drmkey, ref.drmkey);
//		return *this;
//	}
//	void showinfo()
//	{
//		book::showinfo();
//		cout << drmkey << endl;
//	}
//};
//int main()
//{
//	ebook book1("title1", "isbn1", 1, "123");
//	ebook book2("title3", "isbn4", 2, "456");
//	book1 = book2;
//
//	book1.showinfo();
//	book2.showinfo();
//
//	return 0;
//}