 #include<iostream>
 #define SIZE 100
 using namespace std;
 class stk
 {
 public:

     int top;
     int val;
     int a[SIZE];
     stk()
     {
         top=-1;
     }
     void push(int data)
     {
         top++;
         a[top]=data;
     }
     void pop()
     {
         top--;
     }
     int top_data()
     {
         return a[top];
     }
     bool isempty()
     {
         if(top==-1)
            return true;
         else
            return false;
     }
     bool isfull()
     {
         if(top==SIZE-1)
            return true;
         else
            return false;
     }
 }s;
 istream& operator|(istream &is,int n)
 {
     cin>>n;
     s.push(n);
     return is;
 }
 ostream& operator<(ostream& os,int f)
 {
     cout<<s.top_data()<<"->";
     return os;
 }
 int main()
 {
     cin|1|2|3|4|5|6|7|8;

     cout<<s.top_data();
     s.pop();
     cout<1<2<3<4<5<6<7<8;
     return 0;
 }
