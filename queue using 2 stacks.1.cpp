 #include<iostream>
 #include<stack>
 using namespace std;
 //queue using 2 stacks

 void print_forward(stack<int>* s) //top to bottom print
 {
     if(s->empty())
     {
         return;
     }
     int x=s->top();
     s->pop();
     cout<<x<<" ";
     print_forward(s);
     s->push(x);
 }

 void print_reverse(stack<int>* s) //top to bottom print
 {
     if(s->empty())
     {
         return;
     }
     int x=s->top();
     s->pop();
     print_forward(s);
     cout<<x<<" ";
     s->push(x);
 }
 int main()
 {
     stack<int> s1,s2;
     int ch;
     cout<<"1) push\n2) pop\n3) print\n4)exit";
     cin>>ch;

     do
     {
         switch(ch)
         {
         case 1:
            cout<<"\nEnter data:";
            int n;cin>>n;
            s1.push(n);
            break;
         case 2:
            if(s2.empty())
            {
                if(s1.empty())
                {
                    cout<<"\nEmpty queue"<<endl;
                }
                else
                {
                    while(!s1.empty())
                    {
                        int x;
                        x=s1.top();
                        s1.pop();
                        s2.push(x);
                    }
                    cout<<"\nPopped data:"<<s2.top()<<endl;
                    s2.pop();
                }
            }
            else
            {
                    cout<<"\nPopped data:"<<s2.top();
                    s2.pop();
            }
            break;
         case 3:
            //print
            print_forward(&s2);
            print_reverse(&s1);
            cout<<endl;
            break;
         default:
            cout<<"\nwrong choice";
         }
         cout<<"\n1) push\n2) pop\n3) print\n4)exit";
         cin>>ch;
     }while(ch!=4);
     return 0;
 }
