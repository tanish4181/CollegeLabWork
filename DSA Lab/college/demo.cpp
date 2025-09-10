#include <iostream>
#include <vector>
using namespace std;

#define size 4

class queue{
    public:
    int arr[size];
    int front;
    int rear;


    queue()
    {
        front = -1;
        rear = -1;
    }

    void push(int element)
    {
        if(front==-1&&rear==-1){
            arr[rear]=element;
            front++;
        }
        if (rear == size - 1)
        {
            cout << "Overflow :" << endl;
        }
        else
        {
            arr[rear] = element;
            rear++;
        }
    }

    void pop()
    {
        if (front ==-1 && rear == -1)
        {
            cout << "Empty" << endl;
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            cout << "deleted item: " << arr[front] << endl;
            front++;
        }
    }

    void display()
    {

        if (front == -1 && rear == -1)
        {
            cout << "Empty :" << endl;
        }

        else
        {
            for (int i = front; i < rear; i++)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
};

int main()
{
    queue q;
    cout<<q.front<<" "<<q.rear<<endl;
    q.push(40);
    cout<<q.front<<" "<<q.rear<<endl;
    q.push(10);
    cout<<q.front<<" "<<q.rear<<endl;
    q.pop();
    cout<<q.front<<" "<<q.rear;
}

/*
#include <iostream>
using namespace std;

class queue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    queue(){
        size = 100001;
        arr = new int[size];
        front = -1;
        rear = -1;

    }

    void push(int data){

        if((front == 0 && rear == size -1) || (rear == (front - 1)% (size - 1))){
            cout << "Empty :" << endl;
            return;
        }

        if(front == -1){
            front = rear = 0;
            arr[rear] = data;
        }

        else if(rear == size - 1 && front!=0){
            rear = 0;
            arr[rear] = data;
        }

        else{
            rear ++;
            arr[rear] = data;
        }

    }

    void pop(){
        if(front == -1){
            cout << "Overflow : " << endl;
        }

        else if(front == rear){
            front = rear = -1;
        }

        else if(front == size -1){
            front = 0 ;
        }

        else{
            front++ ;
        }
    }

    void display(){
        if(front == -1){
            cout << "Empty: " << endl;
        }

        if(rear>=front){
            for(int i = front ; i <= rear ; i++){
                cout << arr[i] << endl;

            }
        }
        else{
            for(int i = front ; i < size ; i++){
                cout << arr[i] << endl;
            }
            for(int i = 0 ; i<=rear ; i++ ){
                cout << arr[i] << endl;
            }
        }
        cout << endl;
    }
};

int main(){
    queue q;
    q.push (10);
    q.push(20);
    q.push(30);
    q.push(50);
    q.pop();
    q.display();
    q.pop();
    q.push(10);
    q.display();

}*/

/*
#include <iostream>
using namespace std;

class queue{
   int *arr;
   int front;
   int rear;
   int size;

   public:
   queue(){
    size = 100001;
    arr = new int[size];
    front = -1;
    rear = -1;
   }

   void insertfront(int x){
    if(front == 0 && rear == size-1 || rear == (front - 1 ) %(size - 1)){
              cout << "Overflow :" << endl;
    }

    else if(front == -1){
        front = rear = 0 ;
    }

    else if(front == 0){
        front = size-1;
    }

    else{
        front--;
    }

    arr[front] = x;
   }

   void delet(){

    if(front == -1){
        cout << "Empty:" << endl;
              return;
    }

        if (front == rear) { // only one element
            front = rear = -1;
        }
        else if (front == size - 1) {
            front = 0;
        }
        else {
            front++;
        }
    }


    void display(){
        if(front == -1){
            cout << "Empty: " << endl;
        }

        if(rear>=front){
            for(int i = front ; i <= rear ; i++){
                cout << arr[i] << endl;

            }
        }
        else{
            for(int i = front ; i < size ; i++){
                cout << arr[i] << endl;
            }
            for(int i = 0 ; i<=rear ; i++ ){
                cout << arr[i] << endl;
            }
        }
        cout << endl;
    }
};

int main(){
    queue q;
    q.insertfront(10);
    q.insertfront(20);
    q.insertfront(30);

    q.display();
    q.delet();
    q.display();



    return 0;

}
*/