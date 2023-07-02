//#include <iostream>
//#include "BinaryTree.h"
//using namespace std;
//
//int main() {
//    cout << "20192647 최준혁" << endl;
//
//    typedef BinaryTree<char> charTree;
//    typedef charTree* charTreePtr;
//    charTreePtr bt1(new charTree);
//    bt1->insert('G');
//
//    charTreePtr bt2(new charTree);
//    bt2->insert('E');
//
//    charTreePtr bt3(new charTree);
//    bt3->insert('F');
//
//    bt1->makeLeft(bt2);
//    bt1->makeRight(bt3);
//
//    charTreePtr bt4(new charTree);
//    bt4->insert('A');
//
//    charTreePtr bt5(new charTree);
//    bt5->insert('B');
//
//    bt2->makeLeft(bt4);
//    bt2->makeRight(bt5);
//
//    charTreePtr bt6(new charTree);
//    bt6->insert('C');
//
//    charTreePtr bt7(new charTree);
//    bt7->insert('D');
//
//    bt3->makeLeft(bt6);
//    bt3->makeRight(bt7);
//
//    cout << "Root contains: " << bt1->getData() << endl;
//    cout << "Left subtree root: " << bt1->left()->getData() << endl;
//    cout << "Right subtree root: " << bt1->right()->getData() << endl;
//    cout << "Leftmost child is: " << bt1->left()->left()->getData() << endl;
//    cout << "Rightmost child is: " << bt1->right()->right()->getData() << endl;
//
//    return 0;
//}