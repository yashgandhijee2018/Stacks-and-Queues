 #include<iostream>
 using namespace std;
 class node
 {
 public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
 };

 class make_list
 {
 public:
    node* head=NULL;
    void add_node(int data)
    {
        node* n=new node(data);
        if(head==NULL)
        {
            head=n;
        }
        else
        {
            n->next=head;
            head=n;
        }
    }
    int delete_node()
    {
        int x=head->data;
        node* temp=head->next;
        delete head;
        head=temp;
        return x;
    }
    void print()
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
 }l;

 class stack_structure
 {
 public:
    node* top;
    stack_structure()
    {
        top=NULL;
    }
    void push(int data)
    {
        l.add_node(data);
        top=l.head;
    }
    int show_top()
    {
        return top->data;
    }
    int pop()
    {
        int x=top->data;
        l.delete_node();
        top=l.head;
        return x;
    }
    bool empty()
    {
        if(head==NULL)
            return true;
        else
            return false;
    }
 };
 int main()
 {
     stack_structure s;
     s.push(1);
     s.push(2);
     s.push(3);
     cout<<s.show_top();
     s.pop();
     cout<<s.show_top();
 }
