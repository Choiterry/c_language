//insert는 무조건 root에서 넣는다 
//virtual 함수를 쓰는 이유는 객체가 함수를 부를 때 컴파일 해서 실행하기 전에 적용 할 수 있어서
//부모클래스* 객체1;
//객체1 = new 부모클래스;
//객체1 = new 자식클래스;
//둘 다 가능하므로 잘 보고 판단할 것!!
//bst delete 알아야 함( 전략: 지우려는 노드의 서브트리를 잘 관리해야 함 )
//지우려는 노드의 왼족에서 가장 오른쪽 값을 올리거나 오른쪽에서 가장 왼쪽 값을 올린다 그리고 올린 값을 지운다
//https://www.techiedelight.com/deletion-from-bst/ 참고

#include"binarysearchtree.h"
template <class btelementtype>
class bst : public binarytree <btelementtype>
{
	using binarytree<btelementtype>::nulltree;
	using binarytree<btelementtype>::lefttree;
	using binarytree<btelementtype>::righttree;
	using binarytree<btelementtype>::treedata;
public:
	bst();
	virtual void insert(const btelementtype& d);
	binarytree <btelementtype>* retrieve(const btelementtype& d);
};
template <class btelementtype>
bst<btelementtype>::bst():binarytree<btelementtype>()
{
}

template <class btelementtype>
void bst <btelementtype>::insert(const btelementtype &d)
{
	if (nulltree)
	{
		nulltree = false;
		lefttree = new bst;
		righttree = new bst;
		treedata = d;
	}
	else if (d == treedata)
		treedata = d;
	else if (d < treedata)
		lefttree->insert(d);
	else
		righttree->insert(d);
}
template <class btelementtype>
binarytree<btelementtype>* bst <btelementtype>::retrieve(const btelementtype& d)
{
	if (nulltree || d == treedata)
		return this;
	else if (d < treedata)
		 return ((bst<btelementtype>*)lefttree)->retrieve(d);
	else
		return ((bst<btelementtype>*)righttree)->retrieve(d);

}
