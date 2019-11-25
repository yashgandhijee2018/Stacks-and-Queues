 #include<iostream>
 #include<stack>
 using namespace std;
 void transfer(stack<char> &s1,stack<char> &s2,int n)
 {
     for(int i=0;i<n;i++)
     {
         char x=s1.top();
         s1.pop();
         s2.push(x);
     }
 }
 void reverse_stack(stack<char> &s1)
 {
     stack<char> s2;
     int n=s1.size();
     for(int i=0;i<n;i++)
     {
         int x=s1.top();
         s1.pop();
         transfer(s1,s2,n-i-1);
         s1.push(x);
         transfer(s2,s1,n-i-1);
     }
 }
 int main()
 {
     int n;cin>>n;
     stack<char> s;
     for(int i=0;i<n;i++)
     {
         char ch;
         cin>>ch;
         s.push(ch);
     }
     cout<<"\nThe reverse is: ";
     reverse_stack(s);
     while(!s.empty())
     {
         char x=s.top();
         s.pop();
         cout<<x<<" ";
     }
 }
