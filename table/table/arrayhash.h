//#pragma once
//#include <iostream>
//#include<cassert>
//
//using namespace std;
//const int max_table = 11;
//
//template <class tablekeytype, class tabledatatype>
//class table
//{
//private:
//    enum slottype { empty, deleted, inuse };
//    struct slot;
//    struct slot
//    {
//        slottype slotstatus;
//        tablekeytype key;
//        tabledatatype data;
//    };
//    slot T[max_table];
//    int entries;
//    int hash(const tablekeytype& key);
//    int probe(const int pos);
//    bool search(int& pos, const tablekeytype& target);
//public:
//    table();
//    bool lookup(const tablekeytype& key, tabledatatype& data);
//    void insert(const tablekeytype& key, const tabledatatype& data);
//    void deletekey(const tablekeytype &key);
//    void dump();
//};
//template <class tablekeytype, class tabledatatype>
//int table <tablekeytype,tabledatatype>::hash(const tablekeytype& key)
//{
//    return key % max_table; //finally return the last key
//}
//template <class tablekeytype, class tabledatatype>
//int table <tablekeytype, tabledatatype>::probe(const int pos)
//{
//    if (pos < max_table - 1)
//        return pos + 1; // pos를 하나씩 늘려가며 선형탐색을 한다
//    else
//        return 0; // 만약 넘어가면 0부터 다시 선형탐색을 한다
//}
//template <class tablekeytype, class tabledatatype>
//bool table <tablekeytype, tabledatatype>::search(int& pos, const tablekeytype& target)
//{
//    for (; T[pos].slotstatus != empty; pos = probe(pos)) // empty하지 않으면 pos를 하나씩 늘리는 선형탐색을 한다.
//    {
//        if (T[pos].slotstatus == inuse && T[pos].key == target)
//        {
//            return true; // 이미 사용중인 key를 찾음 이때 pos는 값을 기억하고 있다
//        }
//    }
//    return false; // 만약 위에서 못 찾고 empty한 pos를 찾으면 false 반환
//}
//
//template <class tablekeytype, class tabledatatype>
//table <tablekeytype, tabledatatype>::table()
//{
//    entries = 0; 
//    int i;
//    for (i = 0; i < max_table; i++)
//    {
//        T[i].slotstatus = empty;
//        //모두 empty로 초기화
//    }
//}
//template <class tablekeytype, class tabledatatype>
//bool table <tablekeytype, tabledatatype>::lookup(const tablekeytype &key, tabledatatype& data)
//{
//    int pos(hash(key)); //pos = hash(key)
//    if (search(pos, key))//pos랑 key 값이 일치하는 곳에 data가 있으면
//    {
//        data = T[pos].data;
//        return true; //data 가져오고 true
//    }
//    else
//    {
//        return false;//비어있으면 false
//    }
//}
//template <class tablekeytype, class tabledatatype>
//void table <tablekeytype, tabledatatype>::insert(const tablekeytype &key, const tabledatatype &data)
//{
//    assert(entries < max_table-1); //일단 들어갈 공간이 있는지 확인 
//    int pos(hash(key));  //pos값을 hash 함수로 일단 찾기
//    if (!search(pos, key))  // key값에 해당하는 pos에 비어있지 않은 상태라면
//    {
//        pos = hash(key); //다시 pos값을 hash 함수로 일단 찾기
//        while (T[pos].slotstatus == inuse) //inuse한 한 상태이면 
//        {
//            pos = probe(pos); //선형탐색을 하여 빈칸을 찾는다
//        }
//        entries++; // 빈칸을 찾으면 그때야 entries를 하나 늘리고
//    }
//    T[pos].slotstatus = inuse; //상태저장
//    T[pos].key = key; //key값 저장
//    T[pos].data = data; //data값 저장
//}
//template <class tablekeytype, class tabledatatype>
//void table <tablekeytype, tabledatatype>::deletekey(const tablekeytype &key)
//{
//    int pos(hash(key)); //key에 해당하는 pos를 검색
//    if (search(pos,key)) //pos와 key가 일치하는 곳에 값이 있어서 inuse 상태라면 지운다 
//    {
//        T[pos].slotstatus = deleted; //deleted 상태로 변경
//        entries--; //entries 한 줄임
//    }
//}
//template <class tablekeytype, class tabledatatype>
//void table <tablekeytype, tabledatatype>::dump()
//{
//    int i;
//    for (i = 0; i < max_table; i++)
//    {
//        cout << i << '\t';
//        switch (T[i].slotstatus)
//        {
//        case inuse:
//            cout << "in use\t" << T[i].key << endl;
//            break;
//        case deleted:
//            cout << "deleted\t" << T[i].key << endl;
//            break;
//        case empty:    
//            cout << "empty\t" << T[i].key << endl;
//            break;
//        }
//    }
//    cout << "entries = " << entries << "\n\n";
//}