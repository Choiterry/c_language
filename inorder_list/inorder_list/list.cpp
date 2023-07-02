////dummy를 사용하므로 head를 사용할 때 생각해야할 부분들이 줄어든다.
//#include "list.h"
//list::list()
//{
//	//head = 0; // standard head
//	//tail = 0; 
//	//current = 0;
//	
//	head = new node; // dummy head
//	assert(head);
//	head->next = 0;
//	current = 0;
//}
//list::~list()
//{
//	node* delnode = head; // delnode에 head 를 넣는디
//	head = head->next; // 
//	delete delnode;
//}
//bool list::first(elementtype& elem)
//{
//	//if (head == 0) //standard
//	assert(head);//dummy
//	if( head->next == 0) // dummy
//	{
//		return false;
//	}
//	else
//	{
//		/*elem = head ->elem; // head의 elem을 elem에 넣어준다
//		current = head;// current에 head의 주소를 준다. 이는 다음에 나올 next를 대비해 head부터 시작하도록 하기 위함이다.
//		return true;*/ //standard
//		current = head->next; //currnet를 head의 next를 준다
//		elem = current->elem; // elem에는 currnet 의 값인 elem 을 넣어준다
//		return true; //dummy
//	}
//}
//bool list::next(elementtype& elem)
//{
//	assert(current); //standard 와 dummy 둘다 똑같다
//	if (current->next == 0)
//	{
//		return false;
//	}
//	else
//	{
//		current = current->next;
//		elem = current -> elem;
//		return true;
//	}
//}
////void list::inserthead(elementtype& elem)
////{
////	node* addednode = new node;
////	assert(addednode);
////	addednode->elem = elem;
////	if (tail == 0)
////	{
////		tail = addednode;
////	}
////	else
////	{
////		addednode->next = head;
////	}
////	head = addednode;
////}
////void list::insertail(elementtype& elem)
////{
////	node* addednode = new node;
////	assert(addednode);
////	addednode->elem = elem;
////	if (head == 0)
////	{
////		head = addednode;
////	}
////	else
////	{
////		tail->next = addednode;
////	}
////	tail = addednode;
////  addednode->next = 0;
////}
//void list::insertinorder(elementtype& elem)
//{
//	node* addednode = new node;
//	assert(addednode);
//	addednode->elem = elem;
//	if (head == 0 || elem < head->elem) //head가 비어있거나 head가 가리키는 주소의 값보다 elem이 작을 때
//	{
//		addednode->next = head;
//		head = addednode; // head에 addednode의 주소를 준다
//	}
//	else //그게 아닌 나머지 경우
//	{
//		node* pred(head); //pred 라는 노드를 새로 생성 후
//		while (pred->next != 0 && pred->next->elem <= addednode->elem) // pred가 맨마지막이 아니면서 elem의크기를 비교한 후 제자리를 찾을 경우
//		{
//			pred = pred->next; //자리를 찾을 때까지 크기비교 하면서 하나씩 pred를 증가함
//		}
//		addednode->next = pred->next; //크기 비교 후 addednode의 next에 pred->next를 넣은다 만약 pred->next가 0이면 tail의 값이므로 이때도 성립한다.
//		pred->next = addednode; // pred 의 다음값을 addednode로 대체해준다
//	}
//}
////head는 이제 dummy를 가리키고 dummy 가 앞으로 가리키는 값이 달라진다
//void list::insertdummy(elementtype& elem)
//{
//	//addenode 설정하는 거 까지는inorder list와 동일하다
//	//dummy 가 있으니 pred를 dummy인 head 부터 시작하여 각 노드의 next와 크기를 비교할 수 있도록 한다
//	node* addednode = new node;
//	assert(addednode);
//	addednode->elem = elem;
//	node* pred	 = head;
//	while ((pred->next != 0) && (pred->next->elem <= addednode->elem)) 
//	{
//		pred = pred->next; // pred 의 next의 elem이 addednode의 elem 보다 작을 때까지 pred는 하나씩 이동
//	}
//	addednode->next = pred->next; //제위치를찾으면 이제 연결해준다
//	pred->next = addednode;
//}
//void list::remove(const elementtype& target)
//{
//	//처음에 head 가 비어있는지 확인
//	//일단 target 보다 작은 값들은 지나치게 한다 inoder list이므로
//	//만약 target보다 큰 값을가지게 되면 for문에서 나오게 된다 이때 pred 값은 그 주소를 기억하고 있으므로 이를 나중에 이용한다
//	//pred 의 next의 주소의 elem이 target과 일치한다면 지운다
//	//먼저 delnode에 pred->next를 건네준다 / delnode의 next값을 pred의 next에 건네주어 없애 노드를 문제없이 건너뛸 수 있도록한다
//	//이제 delnode를 삭제한다.
//	assert(head); 
//	node* pred;
//	node* delnode;
//
//	for (pred = head; pred->next!=0&&pred->next->elem < target; pred  = pred->next);
//	// <=를 안쓴 이유는 같은 경우가 없는 경우에 찰출하게 끔 하려고, 어차피 inorder한거기 때문에
//	//for문의 body를 만들지 않은 이유는 그냥 잘 찾아서 팅겨나오기만 하면 되기 때문이다.
//	if (pred &&(pred->next) && (pred->next->elem == target)) // (pred->next->elem == elem)을 만족하고 여기에서 (pred->next)가 살아있고 이어서 pred가 살아있는 지 확인
//	{
//		delnode = pred->next; //지우고자 하는 노드
//		pred->next = delnode->next; // 
//		delete delnode;
//	}
//}