 #include<iostream>
 #include<stack>
 using namespace std;
 template<class T>
 class Queue
 {
 public:
     T *a;
     int f,r,cs,ms;
     Queue(int ds=4)
     {
         f=0;//initialize f to first element of array
         ms=ds;//passed size by user
         r=ms-1;//initialize r to last element of array
         a=new T[ms];//dynamically create a of size ms
         cs=0;// 0 elements initially
     }
     bool isfull()
     {
         if(cs==ms)
            return true;
         else
            return false;
     }

     bool isempty()
     {
         if(cs==0)
            return true;
         else
            return false;
     }

     void enqueue(T data)
     {
         if(!isfull())
         {
             r=(r+1)%ms;
             a[r]=data;
             cs++;
         }
         else if(isfull())
            cout<<"\nOverflow";
     }
     void dequeue()
     {
         if(!isempty())
         {
             T x=a[f];
             f=(f+1)%ms;
             cs--;
         }
         else if(isempty())
         {
             cout<<"\nUnderflow";
         }
     }
     int front()
     {
         T x=a[f];
         return x;
     }
 };
 int main()
 {
     Queue<int> o(9);
     o.enqueue(1);
     o.enqueue(2);
     o.enqueue(3);
     o.enqueue(4);
     o.enqueue(5);
     o.enqueue(6);
     o.enqueue(7);
     o.enqueue(8);
     o.enqueue(9);
     o.enqueue(10);

 }
