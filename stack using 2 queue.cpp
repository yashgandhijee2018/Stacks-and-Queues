 #include<iostream>
 #include<queue>
 using namespace std;
 class pseudoStack
 {
 public:
     int call=0;
     queue<int> q1;
     queue<int> q2;
     void push_data(int data)
     {
         q1.push(data); //O(1)
     }
     void pop_data()
     {
         if(call==0){
         int n=q1.size();
         for(int i=0;i<n-1;i++)
         {
             int x=q1.front();
             q1.pop();
             q2.push(x);
         }
         int x=q1.front();
         q1.pop();
         call=1;
         cout<<x<<"->";
         }
         else if(call==1)
         {
             int n=q2.size();
         for(int i=0;i<n-1;i++)
         {
             int x=q2.front();
             q2.pop();
             q1.push(x);
         }
         int x=q2.front();
         q2.pop();
         call=0;
                  cout<<x<<"->";
         }


     }

 };
 int main()
 {
     pseudoStack s;
     s.push_data(1);
     s.push_data(2);
     s.push_data(3);
     s.push_data(4);
     s.push_data(5);
     s.push_data(6);
     s.pop_data();
     s.pop_data();
     return 0;
 }
