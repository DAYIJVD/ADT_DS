#include <iostream>
using namespace std;
template <class mt>
class QueueAnnular
{
private:
    int front,rear,maxs;
    mt *queue;

public:
    QueueAnnular(int ms){
     maxs=ms+1;
     queue=new mt[maxs];
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
        std::cout << "" << std::endl;
    };
    
    void Add(mt x);
    void Delete();

};

template <class mt>
void QueueAnnular<mt>::Add(mt x){
   int indexR=(rear+1)%maxs;
    if (!(indexR==front))
    {
    rear=indexR;
     queue[rear]=x;
    for (int k = 0; k < maxs; k++)
        {
            cout<<queue[k]<<" ";
        }
      std::cout << "" << std::endl;
    }else{
        std::cout << "sorry,Your Queue is Full :(" << std::endl;
    }
    
    
 
}
template <class mt>
void QueueAnnular<mt>::Delete(){
 if (!(rear==front))
 {
    ++front;
    queue[front%=maxs]="--";
       for (int k = 0; k < maxs; k++)
        {
            cout<<queue[k]<<" ";
        }
    std::cout << "" << std::endl;
 }else
 {
        std::cout << "Your Queue is Empty :(" << std::endl; 
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
