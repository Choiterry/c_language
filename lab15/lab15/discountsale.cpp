//#include "discountsale.h"
//
//namespace savitchsale
//{
//
//	discountsale::discountsale()
//	{
//		sale(); // 부모클래스의 객체를 가져와 쓸수있다.
//		discount = 0;
//	}//discoutsale::discountsale() : sale(), discount(0) 과 동일하다
//
//	discountsale::discountsale(double theprice, double thediscount) : sale(theprice), discount(thediscount)
//	{
//
//	}
//
//	double discountsale::getdiscount() const
//	{
//		return discount;
//	}
//	void discountsale::setdiscount(double newdiscount)
//	{
//		discount = newdiscount;
//	}
//	double discountsale::bill() const
//	{
//		double fraction = discount / 100;
//		return (1 - fraction) * getprice();
//	}
//}
