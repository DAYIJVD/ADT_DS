#include <iostream>
using namespace std;
template <class mt>
class QueueAnnular
{
private:
    int front,rear,maxs,counter;
    mt *queue;

public:
    QueueAnnular(int ms){
     maxs=ms;
     queue=new mt[maxs];
     counter=0;
     front=rear=0;
     for (int i = 0; i < maxs; i++)
        {
            
         queue[i]="-- ";  
            
            
        }
        std::cout << "Your Queue was Created" << std::endl;
        for (int k = 0; k < maxs; k++)
        {
            cout<<queue[k]<<" ";
        }
        std::cout <<""<< std::endl;
    };
    bool isFull();
    bool isEmpty();
    void Add(mt x);
    void Delete();

};
template <class mt>
bool QueueAnnular<mt>::isFull(){
 if (counter==maxs)
 {
        std::cout << "sorry im Not Add value,Your Queue is Full :(" << std::endl;
    return true;
 }else{
    return false;
 }
}
template <class mt>
bool QueueAnnular<mt>::isEmpty(){
 if (counter==0)
 {
    std::cout << "Your Queue is Empty :(" << std::endl; 
    return true;
 }else{
    return false;
 }
}
template <class mt>
void QueueAnnular<mt>::Add(mt x){
   
    if (!(isFull()))
    {
        counter+=1;
     queue[++rear%=maxs]=x;
    for (int k = 0; k < maxs; k++)
        {
            cout<<queue[k]<<" ";
        }
      std::cout << "" << std::endl;
    }
}
template <class mt>
void QueueAnnular<mt>::Delete(){
 if (!(isEmpty()))
 {
    counter-=1;
    ++front;
    queue[front%=maxs]="--";
       for (int k = 0; k < maxs; k++)
        {
            cout<<queue[k]<<" ";
        }
    std::cout << "" << std::endl;
 }
 
}


int main()
{
    QueueAnnular<string>s1(5);
    s1.Add("05");
    s1.Add("88");
    s1.Delete();
    s1.Add("87"); 
    s1.Add("81"); 
    s1.Delete();
    s1.Add("82"); 
    s1.Add("83"); 
    s1.Add("84"); 
    s1.Delete();
    s1.Add("85"); 
    s1.Add("86"); 
    s1.Add("87"); 
    

}
