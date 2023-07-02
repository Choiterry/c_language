//#include "arrayhash.h"
//#include "CPhone.h"
//int StringToInt(string strName);
//int main() 
//{
//  cout << "20192647 최준혁" << "\n";
//	table<int, int>myTable;
//
//	myTable.insert(230101, 230101);
//	myTable.insert(230202, 230202);
//	myTable.insert(230303, 230303);
//	myTable.insert(230404, 230404);
//	myTable.insert(230505, 230505);
//	myTable.insert(230606, 230606);
//	myTable.insert(230707, 230707);
//	myTable.dump();
//
//	myTable.deletekey(230101);
//	myTable.deletekey(230202);
//
//	myTable.insert(230808, 230808);
//	myTable.dump();
//
//	table<int, CPhone> myTable2;
//	myTable2.insert(230101, CPhone("Kim", 230101));
//	myTable2.insert(230202, CPhone("Choi", 230202));
//	myTable2.insert(230303, CPhone("Park", 230303));
//	myTable2.dump();
//
//	CPhone aPhone;
//	myTable2.lookup(230101, aPhone);
//
//	cout << aPhone;
//
//	table<int, CPhone> myTable3;
//	myTable3.insert(StringToInt("Kim"), CPhone("Kim", 230101));
//	myTable3.insert(StringToInt("Choi"), CPhone("Choi", 230202));
//	myTable3.insert(StringToInt("Park"), CPhone("Park", 230303));
//	myTable3.dump();
//
//	CPhone bPhone;
//	myTable3.lookup(StringToInt("Choi"), bPhone);
//
//	cout << bPhone;
//}
//ostream& operator<<(ostream& outStream, const CPhone& aPhone) {
//	outStream << "Name : " << aPhone.strName << " Birthday : " << aPhone.Birthday << "\n" << endl;
//	return outStream;
//}
//int StringToInt(string strName) {
//	int nSum = 0;
//	int nLength = strName.size();
//	for (int i = 0; i < nLength; i++) {
//		nSum += strName.at(i);
//	}
//	return nSum;
//}