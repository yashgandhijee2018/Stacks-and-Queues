 #include<iostream>
 using namespace std;
 #include <stack>
 void transfer(stack<char> &a,stack<char> &b)
 {
     while(!a.empty())
     {
         char ch=(a).top();
         (a).pop();
         (b).push(ch);
     }
 }
 int main()
 {
     stack<char> s1,s2,s3;
     cout<<"\nEnter size: ";
     int n;
     cin>>n;
     cout<<"\nEnter the numbers: ";
     for(int i=0;i<n;i++)
     {
         char ch;
         cin>>ch;
         s1.push(ch);
     }
     cout<<s1.size()<<" "<<s2.size()<<" "<<s3.size()<<"\n";
     transfer(s1,s2);
     cout<<s1.size()<<" "<<s2.size()<<" "<<s3.size()<<"\n";
     transfer(s2,s3);
     cout<<s1.size()<<" "<<s2.size()<<" "<<s3.size()<<"\n";
     transfer(s3,s1);
     cout<<s1.size()<<" "<<s2.size()<<" "<<s3.size()<<"\n";
     cout<<"\nreverse stack is: ";
     while(!s1.empty())
     {
         char val=s1.top();
         s1.pop();
         cout<<val<<" ";
     }

 }
