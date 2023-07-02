//#include "sale.h"
//#include <iostream>
//
//using namespace std; 
//
//namespace savitchsale // namespace를 할때에는 모두 다 해준다 그리고 
//{
//	sale::sale() 
//	{
//		price = 0; 
//	}//default constructor sale::sale() : price(0) 과 동일하다
//	
//	sale::sale(double theprice)
//	{
//		if (theprice >= 0)
//			price = theprice;
//		else
//		{
//			cout << "error : cannot have as negative price \n";
//			exit(1);
//		}
//	}// constructor
//
//	double sale::getprice() const
//	{
//		return price;
//	}// const로 받고 getprice는 return double로 진행
//	
//	void sale::setprice(double newprice)
//	{
//		if (newprice >= 0)
//		{
//			price = newprice;
//		}
//		else
//		{
//			cout << "error : cannot have a negative price \n ";
//			exit(1);
//		}
//	}// newprice를 받아서 0보다 크면 price로 넣는다 아니면 오류
//	
//	double sale::bill() const
//	{
//			return price;
//	}// bill이라는 함수는 const로 이동하지만 또 virtual 함수로 자식 클래스에서 썼읋 때 자식 클래스에서 재정의 한 bill함수로 사용
//	
//	double sale::savings(const sale& other) const
//	{
//		return (bill() - other.bill());
//	} 
//
//	bool operator<(const sale& first, const sale& second)
//	{
//		return (first.bill() < second.bill());
//	}
//}
