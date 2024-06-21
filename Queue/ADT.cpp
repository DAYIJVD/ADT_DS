#include <iostream>
using namespace std;
template <class mt>
class Queue
{
private:
    int front,rear,maxs;
    mt *queue;

public:
    Queue(int ms){
     maxs=ms;
     queue=new mt[maxs];
     front=rear=-1;
     for (int i = 0; i < maxs; i++)
        {
         queue[i]=" -- ";
        }
        std::cout << "Your Queue was Created" << std::endl;
        for (int k = 0; k < maxs; k++)
        {
            cout<<queue[k];
        }
        std::cout << " " << std::endl;
    };
    bool isFull();
    bool isEmpty();
    void Add(mt x);
    void Delete();

};
template <class mt>
bool Queue<mt>::isFull(){
 if (rear==maxs-1)
 {
    std::cout << "Your Queue Full" << std::endl;
    return true;
 }else{
    return false;
 }
 
}
template <class mt>
bool Queue<mt>::isEmpty(){
 if (rear==front)
 {
    std::cout << "Your Queue isEmpty" << std::endl;
    return true;
 }else{
    return false;
 }
 
}
template <class mt>
void Queue<mt>::Add(mt x){
 if (!(isFull()))
 {
    rear++;
    queue[rear]=x;
    for (int k = 0; k < maxs; k++)
        {
            cout<<" "<<queue[k]<<" ";
        }
    std::cout << " " << std::endl;
 }
}
template <class mt>
void Queue<mt>::Delete(){
 if (!(isEmpty()))
 {
    front++;
     queue[front]="--";
    
   
       for (int k = 0; k < maxs; k++)
        {
            cout<<" "<<queue[k]<<" ";
        }
    std::cout << " " << std::endl;
 }
}


int main()
{
     Queue<string> s1(5);
    s1.Add("05");
    s1.Add("88");
    s1.Add("87"); 
    s1.Delete();
    s1.Delete();
    s1.Delete();
    s1.Delete();

}
