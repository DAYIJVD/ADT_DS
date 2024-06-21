#include <iostream>
using namespace std;


struct node
{
    int data;
    struct node *next=NULL;
};
struct LinkList
{
    node *head;
};
void insert (node *p, int item)
{
    node *temp = new node;
    temp->data = item;
    temp->next = p->next;
    p->next = temp;
}
//DELETE NODE FROM LINK LIST
void Delete(int item , node * head){
node *p=head;;
node *temp=head;
while (temp != NULL)
{
    temp=p->next;
    if(temp->data==item)
    {
     p->next=temp->next;
     delete temp;
     break;
    }
    p=p->next;
}
}
//print Link list
void print(node *head){
    node * temp=head;
    while (temp!=head)
    {
        std::cout << " " <<temp->data<<" "<< std::endl;
        temp=temp->next;
    }
    
}
//concat LinkList
node* concate(node *head1, node *head2)
{
    if (head1 == NULL)
        return head2;
    else if (head2 != NULL)
    {
        
        for (node *p = head1; p->next != NULL; p = p->next)
        p->next = head2;
        return head1;
    }
}

//varoon
void printV(node *head){
if (head== NULL )
return ; 
printV (head->next) ;
cout << head->data<<" "; 
}
int main()
{
     LinkList myList;
  insert(myList.head, 10);
    insert(myList.head, 20);
    insert(myList.head, 30);
    
    // حذف یک گام از لیست
    Delete(20, myList.head);
    
    // چاپ لیست پس از حذف
    print(myList.head);
}
