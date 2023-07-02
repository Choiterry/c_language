#pragma once
#include <iostream>
using namespace std;
const int max_table = 11;

using namespace std;

template <class tablekeytype, class tabledatatype>
class table
{
private:
    struct slot;
    typedef slot* link;
    struct slot
    {
        tablekeytype key;
        tabledatatype data;
        link next;
    };
    link T[max_table]; //structure T by array
    int hash(const tablekeytype& key);
    bool search(link &slotpointer,const tablekeytype& target);
public:
    table();
    void insert(const tablekeytype &key,const tabledatatype &data);
    bool lookup(const tablekeytype &key, tabledatatype& data);
    void deletekey(const tablekeytype &key);
    void dump();
};
template <class tablekeytype, class tabledatatype>
int table < tablekeytype, tabledatatype>::hash(const tablekeytype& key)
{
    return key % max_table;
}
template <class tablekeytype, class tabledatatype>
bool table <tablekeytype, tabledatatype>::search(link &slotpointer, const tablekeytype& target)
{
    for (; slotpointer; slotpointer = slotpointer->next)
    {
        if (slotpointer->key == target)
            return true;
    }
    return false; //else
}
template <class tablekeytype, class tabledatatype>
table < tablekeytype, tabledatatype>::table()
{
    int i;
    for (i = 0; i < max_table; i++)
    {
        T[i] = 0;
    }

}
template <class tablekeytype, class tabledatatype>
bool table < tablekeytype, tabledatatype>::lookup(const tablekeytype&key, tabledatatype& data)
{
    int pos(hash(key));
    link sp(T[pos]);
    if (search(sp,key))
    {
        data = sp->data;
        return true;
    }
    else
    {
        return false;
    }
}
template <class tablekeytype, class tabledatatype>
void table < tablekeytype, tabledatatype>::insert(const tablekeytype &key, const tabledatatype &data)
{
    int pos(hash(key)); //해시함수를 거쳐서 key를 전달받고
    link sp(T[pos]); // 그 위치에 맞는 값을 대입
    if (!search(sp, key)) // sp 에 해당하는 key에 또다른 data 가 있을때 search는 false return 하고
                          //앞에 ! 를 붙여서 그 경우에 아래와 같은 절차를 거친다
    {
        link insertedslot = new slot; //새로 slot 만들기
        insertedslot->key = key; //init key
        insertedslot->data = data; //init data
        insertedslot->next = T[pos]; 
        T[pos] = insertedslot; // 앞에다가 연결하는것
    }
    else
        sp->data = data; //비어있을 때
}
template <class tablekeytype, class tabledatatype>
void table < tablekeytype, tabledatatype>::deletekey(const tablekeytype &key)
{
    int pos(hash(key));
    link p;
    if (0 == T[pos])
    {
        return; //delete 할게 없을 때
    }
    if (T[pos]->key == key) // 지워야 할 게 맨앞에 있을 때
    {
        link deleteslot(T[pos]);
        T[pos] = T[pos]->next;
        delete deleteslot;
    }
    else
        for (p = T[pos]; p->next; p = p->next) // 더 있는 상황에서 지워야 할 때
        {
            if (p->next->key == key)
            {
                link deleteslot = p->next;
                p->next = p->next->next;
                delete deleteslot;
                break;
            }
        }
}
template<class tableKeyType, class tableDataType>
void table<tableKeyType, tableDataType>::dump()
{
    int i;
    for (i = 0; i < max_table; i++)
    {
        cout << i << '\t';
        link p;
        for (p = T[i]; p; p = p->next)
            cout << p->key << '\t';
        cout << '\n';
    }
    cout << '\n';
}
