#include <iostream>
using namespace std;

template <class MultiType>
class Stack
{
private:
    int top;
    int maxS;
    MultiType *stack;
public:
    Stack(int max){
        maxS=max;
        top=-1;
        stack=new MultiType[maxS];
        for (int i = 0; i < maxS; i++)
        {
         stack[i]=" -- ";
        }
        std::cout << "Your Stack was Created" << std::endl;
        for (int k = 0; k < maxS; k++)
        {
            cout<<stack[k];
        }
        std::cout << " " << std::endl;
        
        
    };
    
    void Push(MultiType W);
    bool isEmpty();
    bool  isFull();
    void pop();  
    void showTop();
};
template <class MultiType>
bool Stack<MultiType>::isEmpty(){
    if (top==-1)
    {
        std::cout << "Your Stack is Empty :(" << std::endl;
        return true;
    }else{
        return false;
    }
    
}
template <class MultiType>
bool Stack<MultiType>::isFull(){
    if (top==maxS-1)
    {
               std::cout << "Your Stack is Full :)" << std::endl;
               return true;
    }else{
        return false;
    }
}
template <class MultiType>
void Stack<MultiType>::Push(MultiType W){
    if(!(isFull())){
         top++;
    stack[top]=W;
    for (int k = 0; k < maxS; k++)
        {
            cout<<" "<<stack[k]<<" ";
        }
    std::cout << " " << std::endl;
    }
}
template <class MultiType>
void Stack<MultiType>::pop(){
    stack[top]="--";
    --top;
     for (int k = 0; k < maxS; k++)
        {
            cout<<" "<<stack[k]<<" ";
        }
    std::cout << " " << std::endl;
    
}
template <class MultiType>
void Stack<MultiType>::showTop(){
    std::cout << "indexTop:"<<top<< std::endl;
    std::cout << "ValueTop:"<<stack[top] << std::endl;
}
int main()
{
    Stack<string> s1(5);
    s1.Push("05");
    s1.Push("88");
    s1.Push("87");
    s1.pop();
    s1.Push("54");
    s1.Push("65");
    s1.Push("68");
    s1.showTop();
}
