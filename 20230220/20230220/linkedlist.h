//한 노드에는 현재의 데이터와 다음 데이터를 가리키는값과 
//이전의 데이터를 가리키는 값이 있고 linked list는 이러한 노드들을
//쭈욱 선형적으로 나열한 것이다. 즉 내가 어디에서 받았는지 그값이 얼마인지 이 다음에는 어디에줄지가 정해져있다.

#pragma once
#include <assert.h>

template <typename T>
class listnode //노드를 구성하는 함수
{
	template <typename T>
	friend class linkedlist; // linkedlist 에서 listnode를 가져다가 쓸 수 있도록 함
private:
	T			 m_data;
	listnode<T>* m_prev;
	listnode<T>* m_next;

private: //함부로 가져다 쓸 수 없게 하기 위해서 이렇게 private 선언

	listnode()
	{
		m_prev = NULL; //포인터	변수는 NULL로 초기화
		m_next = NULL; //포인터 변수는 NULL로 초기화
	}
	~listnode()
	{

	}

};

template <typename T> // template function
class linkedlist // 노드들을 연결하여 전체적인 구조를 만드는 함수
{
private:
	typedef listnode<T> NODE;
	typedef listnode<T>* PNODE;
private:
	PNODE m_begin; //처음 값
	PNODE m_end; // 나중 값 
	int m_size; //사이즈 변수
public:
	linkedlist()
	{
		m_begin = new NODE; //동적할당
		m_end = new NODE; //동적할당
		m_begin->m_next = m_end; // 첫번째값의 next값은 마지막 값의 주소를 가리키게 한다.
		m_end->m_prev = m_begin; // 마지막 값의 prev값은 첫번째 값의 주소를 가리키게 한다.
		m_size = 0; // 사이즈는 0으로 초기화
	}
	~linkedlist()
	{
		clear();
		delete m_end;
		delete m_begin;
	}

public:
	void push_back(const T& data) // end와 end 사이에 붙여 넣는 함수 선언
	{
		PNODE p_node = new NODE;//새로 들어올 노드를 새로 동적할당
		PNODE p_prevnode = m_end->m_prev; // end 이전의 가장 마지막 값을 가져온다.
		p_node->m_data = data; // 새로 만든 노드에다가 값을 저장
		
		p_prevnode->m_next = p_node;//가장 마지막값의 다음값을 새로 들어올 노드를 가리키게 한다.

		p_node->m_prev = p_prevnode; // 새로 만든 노드의 이전값을 원래 마지막 값을 가리키게 한다.
		p_node->m_next = m_end;// 새로 만든 노드의 다음값을 마지막을 가리키게 한다.

		m_end->m_prev = p_node; // 마지막 엔딩 값의 이전값을 새로 끼워넣은 노드를 가리키게 한다.

		m_size++;
	}
	void push_front(const T& data) // begin과 begin 사이에 붙여 넣는 함수 선언
	{
		PNODE p_node = new NODE;//새로 들어올 노드를 새로 동적할당
		PNODE p_nextnode = m_begin->m_next; // begin 다음 값을 가져온다.
		p_node->m_data = data; // 새로 만든 노드에다가 값을 저장

		p_nextnode->m_prev = p_node;//가장 마지막값의 다음값을 새로 들어올 노드를 가리키게 한다.

		p_node->m_prev = m_begin; // 새로 만든 노드의 이전값을 원래 마지막 값을 가리키게 한다.
		p_node->m_next = p_nextnode;// 새로 만든 노드의 다음값을 마지막을 가리키게 한다.

		m_begin->m_next = p_node; // 마지막 엔딩 값의 이전값을 새로 끼워넣은 노드를 가리키게 한다.

		m_size++;
	}
	void clear()const
	{
		PNODE node = m_begin->m_next;
		while (node != m_end)
		{
			PNODE pnode = node->m_next;
			delete node;
			node = pnode;
		}
		m_size = 0;

		
	}
	int size() const
	{
		return m_size;
	}
	bool empty() const
	{
		return m_size == 0;
	}
};

