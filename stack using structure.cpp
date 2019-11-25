 #include<iostream>
 using namespace std;
 struct stack_structure
 {
     int a[100];
     int top;
 };
 bool isfull(struct stack_structure* s)
 {
     if(s->top==99)
        return true;
     else
        return false;
 }
 bool isempty(struct stack_structure* s)
 {
     if(s->top==-1)
        return true;
     else
        return false;
 }
 void init(struct stack_structure* ptr)
 {
     ptr->top=-1;
 }
 void push(int n,struct stack_structure* s)
 {
     if(!isfull(s)){
        s->top++;
        s->a[s->top]=n;
     }
     else
     cout<<"\nfull";
 }
 void pop(struct stack_structure* s)
 {
     if(!isempty(s))
     s->top--;
     else
     cout<<"\nEmpty";
 }
 void disp(struct stack_structure* s)
 {
     for(int i=0;i<=s->top;i++)
     {
         cout<<s->a[i]<<" ";
     }
 }

 void show_top(struct stack_structure* s)
 {
     if(!isempty(s))
        cout<<s->a[s->top]<<" ";
 }
 int main()
 {
     struct stack_structure s;
     init(&s);
     int ch;
     do
     {
          cout<<"\n1) Push\n2) Pop\n3) Display\n4) Exit";
          cin>>ch;
          if(ch==1)
          {
              int n;cin>>n;
              push(n,&s);
          }
          if(ch==2)
          {
              pop(&s);
          }
          if(ch==3)
          {
              disp(&s);
          }
     }while(ch!=4);

     return 0;
 }
