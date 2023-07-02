#include <iostream>
using namespace std;
class point
{
private:
    int xpos, ypos;
public:
    point(int x, int y): xpos(x),ypos(y)
    {}
    void showinfo()const
    {
        cout << xpos << ", " << ypos << endl;
    }
    template <class t1,class t2>
    void swapdata(t1 x, t2 y)
    {
        int tmp;
        tmp = x;
        x = y;
        y = tmp;
    }
};

int main()
{
    point p(2, 3);
    p.showinfo();
    p.swapdata<int,int>();
    p.showinfo();
    return 0;
}
