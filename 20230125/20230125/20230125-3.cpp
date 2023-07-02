//#include <iostream>
//using namespace std;
//class point
//{
//private:
//    int xpos, ypos;
//public:
//    point(int x = 0, int y = 0) :xpos(x), ypos(y)
//    {
//
//    }
//    void showposition() const
//    {
//        cout << '[' << xpos << ", " << ypos << ']' << endl;
//    }
//    point& operator+= (const point& ref) // xpos의 값을 고쳐야 하니까 const를 붙여야 함 따라서 클래스 내부에서 정의
//    {
//        xpos += ref.xpos;
//        ypos += ref.ypos;
//        return *this;
//    }
//    point& operator-= (const point& ref)
//    {
//        xpos -= ref.xpos;
//        ypos -= ref.ypos;
//        return *this;
//    }
//    friend bool operator== (const point& ref1, const point& ref2);
//    friend bool operator!= (const point& ref1, const point& ref2);
//};
// bool operator== (const point& ref1, const point& ref2)
//{
//    if ((ref1.xpos == ref2.xpos)&&(ref1.ypos == ref2.ypos))
//        return true;
//    else
//        return false;
//}
//bool operator!= (const point& ref1, const point& ref2)
//{
//    if ((ref1.xpos != ref2.xpos) || (ref1.ypos != ref2.ypos))
//        return true;
//    else 
//        return false;
//}
//int main()
//{
//    point pos1(3, 4);
//    point pos2(10, 20);
//    point pos3(20, 20);
//
//    pos1.showposition();
//    pos2.showposition();
//    pos1 += pos2;
//    pos1.showposition();
//    pos1 -= pos2;
//    pos1.showposition();
//
//    if (pos1 == pos2)
//    {
//        cout << "same"<< endl;
//    }
//    else
//    {
//        cout << "different" << endl;
//    }
//    pos2.showposition();
//    pos3.showposition();
//    if (pos2 != pos3)
//        cout << "different" << endl;
//    else
//        cout << "same" << endl;
//
//    return 0;
//}