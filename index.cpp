#include<iostream>
using namespace std;
class Stack{
    private:
    int* arr;
    int volume;
    int top;
    int count;

    public:

    Stack(int size){
        this->arr = new int[size];
        this->volume = size;
        this->top = -1;
        this->count = 0; 
    }
    ~Stack(){
        delete[] arr;
    }

    void push();
    void pop();
    void display();
    void displayTop();
    void isEmpty();
    void isFull();
    
};
void Stack::push(){
        int data ;
        cout<<"Enter value : ";
        cin>>data;
    if(this->top == volume - 1){
        cout<<"---------------------"<<endl;
        cout<<"Stack is Overflow !"<<endl;
        cout<<"---------------------"<<endl;
    }else{
        this->top++;
        this->arr[top] = data;
    }
    this->count++;
}
void Stack::pop(){
    if(this->top == -1){
        cout<<"---------------------"<<endl;
        cout<<"Stack is underflow !"<<endl;
        cout<<"---------------------"<<endl;
    }else{
        this->arr[top] = 0;
        this->top--;
    }
    this->count--;
}
void Stack::display(){
   if(this->top == -1){
        cout<<"---------------------"<<endl;
        cout<<"Stack is underflow !"<<endl;
        cout<<"---------------------"<<endl;
    }else{
        cout<<"---------------------"<<endl;
        for(int i = this->top;i >= 0; i--){
        cout<<this->arr[i]<<" ";
        }
        cout<<endl;
        cout<<"---------------------"<<endl;
    }
}
void Stack::displayTop(){
    if(this->top == -1){
        cout<<"---------------------"<<endl;
        cout<<"Stack is underflow !"<<endl;
        cout<<"---------------------"<<endl;
    }else{
        cout<<"------------------------------------"<<endl;
        cout<<"The top element of stack is : "<<this->arr[top]<<endl;
        cout<<"------------------------------------"<<endl;
    }

}
void Stack::isEmpty(){
     if(this->top == -1){
        cout<<"------------------"<<endl;
        cout<<"Stack is Empty !"<<endl;
        cout<<"------------------"<<endl;
    }else{
        cout<<"---------------------"<<endl;
        cout<<"Stack is not Empty !"<<endl;
        cout<<"---------------------"<<endl;
    }
}
void Stack::isFull(){
    if(this->top == volume - 1){
        cout<<"------------------"<<endl;
        cout<<"Stack is Full !"<<endl;
        cout<<"------------------"<<endl;
    }else{
        cout<<"---------------------"<<endl;
        cout<<"Stack is not Full !"<<endl;
        cout<<"---------------------"<<endl;
    }
}
int main(){
    Stack stack(5);
    int choice;

 do{
    cout<<"1 for push an element..."<<endl;
    cout<<"2 for pop an element..."<<endl;
    cout<<"3 for display all element..."<<endl;
    cout<<"4 for display top element... "<<endl;
    cout<<"5 for isEmpty ?"<<endl;
    cout<<"6 for isFull..."<<endl;
    cout<<"0 for Exit..."<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice){
        case 1:{
            stack.push();
            break;
        }
        case 2:{
            stack.pop();
            break;
        }
        case 3:{
            stack.display();
            break;
        }
        case 4:{
            stack.displayTop();
            break;
        }
        case 5:{
            stack.isEmpty();
            break;
        }
        case 6:{
            stack.isFull();
            break;
        }
        case 0:
        cout<<"------------"<<endl;
        cout<<"Thank You !"<<endl;
        cout<<"------------"<<endl;
        break;
        default :
        cout<<"-----------------"<<endl;
        cout<<"Invalid choice !"<<endl; 
        cout<<"-----------------"<<endl;
    }
 }while(choice != 0);

return 0;
}