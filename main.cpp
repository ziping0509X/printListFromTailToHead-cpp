//剑指第三题
//输入一个链表，按链表从尾到头的顺序返回一个ArrayList。

//链表的学习：
//#include <iostream>
//
//using namespace std;
//
//struct student{
//    int num;
//    float score;
//    struct student *next;
//};
//
//int main(void){
//    student a,b,c,*head,*p;
//    a.num=31001;a.score=89.5;
//    b.num=31001;b.score=89.5;
//    c.num=31001;c.score=89.5;
//    head=&a;
//    a.next=&b;
//    b.next=&c;
//    c.next=NULL;//这里链表已经建立好了
//    p=head;
//    do{
//        cout<<p->num<<"  "<<p->score<<endl;//endl本身就是换行符
//        p=p->next;
//    }while (p != NULL);
//
//}

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
   ListNode(int x) :
          val(x), next(NULL) {
   }
};

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        stack<ListNode*>node;
        vector<int>result;
        ListNode* p=head;
        while(p != nullptr){
            node.push(p);
            p=p->next;
        }

        while(!node.empty()){
            p=node.top();
            result.push_back(p->val);
            node.pop();

        }

    }
};

//调试成功！