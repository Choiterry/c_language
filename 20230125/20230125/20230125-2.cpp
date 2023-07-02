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
//    friend point operator+= (const point& ref1, const point& ref2)
//    {
//        point pos((ref1.xpos + ref2.xpos), (ref1.ypos + ref2.ypos));
//        return pos;
//    }
//    friend point operator-= (const point& ref1, const point& ref2)
//    {
//        point pos((ref1.xpos - ref2.xpos), (ref1.ypos - ref2.ypos));
//        return pos;
//    }
//};
//int main()
//{
//    point pos1(3, 4);
//    point pos2(10, 20);
//    point pos3 (pos1 += pos2);
//    point pos4 (pos1 -= pos2);
//
//    pos1.showposition();
//    pos2.showposition();
//    pos3.showposition();
//    pos4.showposition();
//
//    return 0;
//}