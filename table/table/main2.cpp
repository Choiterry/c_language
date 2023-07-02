#include<iostream>
#include"linkedlisthash.h"
using namespace std;
int StringToInt(string strName);
int StringToInt(string strName) {
	int nSum = 0;
	int nLength = (int)strName.size();
	for (int i = 0; i < nLength; i++) {
		nSum += strName.at(i);
	}
	return nSum;
}

int main() 
{
  cout << "20192647 최준혁" << "\n";

	table<int, CPhone> myTable2;
	myTable2.insert(230101, CPhone("Kim", 230101));
	myTable2.insert(230202, CPhone("Choi", 230202));
	myTable2.insert(230303, CPhone("Park", 230303));
	myTable2.dump();

	CPhone bPhone;
	myTable2.lookup(StringToInt("Choi"), bPhone);

	cout << bPhone;
}
ostream& operator<<(ostream& outStream, const CPhone& aPhone) {
	outStream << "Name : " << aPhone.strName << " Birthday : " << aPhone.Birthday << "\n" << endl;
	return outStream;
}
