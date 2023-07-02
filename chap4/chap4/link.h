#pragma once
#include <iostream>
#include<cassert>
typedef int elementtype;

class list
{
private:
	struct node; //노드 라는 구조체 하나 생성
	//typedef node *link; // 구조체의 typoedef 를 하나 생성
	struct node //노드라는 구조체 정의
	{
		node* next; // 다음노드의 주소를 가리키는 변수 생성
		elementtype elem; //노드 안에 들어있는 데이터
	};
	node* head; //head 라는 구조체생성
	node* tail; // tail이라는 구조체생성
	node* current; // current라는 구조체 생성
public:
	list(); 
	~list();
	void inserttail(const elementtype& elem);
	void inserthead(const elementtype& elem);
	bool first(elementtype& elem);
	bool next(elementtype& elem);
	
};
