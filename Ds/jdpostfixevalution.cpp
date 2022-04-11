#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
 class Node
{
    public:
    char data;
    Node*next;
};
class Stack
{
    private :
    Node*Top;
    public:
     Stack()
     {
        Top=NULL;
     }
    void Display();
    void Push(char x);
    char Pop();
    int isMatch(char*);
    int isBalenced(char *);
    char* infixtopostfix(char *);
    int isOperand(char x);
    int pre(char x);
    char topOfStack();
    int Evalution(char *);
};
void Stack::Push(char x)
{
    Node*t=new Node;
    if(t==NULL)//when heap is full;
    {
        cout<<"\nStack OverFlow";
    }
    else
    {
        t->data=x;
        t->next=Top;
        Top=t;
    }
}
void Stack::Display()
{
    Node*p=Top;
    cout<<"\nYour Satack Data";
    while(p)
    {
        cout<<"\nData Element : "<<p->data;
        p=p->next;
    }
}
char Stack::Pop()
{
    char x='1';
    if(Top==NULL)
    cout<<"\nStack UnderFlow";
    else
    { 
        Node*temp=Top;
        x=Top->data;
        Top=Top->next;
        delete temp;
    }
    return x;
}
int Stack:: isBalenced(char *exp)
{
    int i;
    for( i=0;exp[i];i++)
    {
        if(exp[i]=='(')
        Push(exp[i]);
        else if((exp[i]==')'))
        {if(Top==NULL||Top->data!='(')
        {return 0;}// stack is empty;
          Pop();
        }
        else if(exp[i]=='{')
        Push(exp[i]);
        else if((exp[i]=='}'))
        {if(Top==NULL||(Top->data!='{'))
        {return 0;}// stack is empty;
        Pop();
        }
        else if(exp[i]=='[')
        Push(exp[i]);
        else if((exp[i]==']'))
        {if(Top==NULL||(Top->data!='['))
        {return 0;}// stack is empty;
        Pop();
       }

    } if(Top==NULL)
        return 1;//par mathces
        else return 0;
}
int Stack::isMatch(char *exp)
{
   int i;
   for(i=0;exp[i];i++)
   {
       if(exp[i]=='(')
       Push(exp[i]);
       else if(exp[i]==')')
       {
         if(Top)//stack is not empty
         {
             Pop();
         }
         else return 0;// when your stack is full;
       }
   }  if(Top==NULL)
       return 1;
       else 
       return 0;
}
int Stack ::isOperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/')
     return 0;
     else
     return 1;
}
int Stack::pre(char x)
{
    if(x=='+'||x=='-')
    return 1;
     else if(x=='*'||x=='/')
    return 2;
return 0;
}
char Stack::topOfStack()
{
    if(Top)
    return Top->data;
}
char* Stack:: infixtopostfix(char *infix)
{
    int i=0,j=0;
    char*postfix=new char[strlen(infix)+2];
    while(infix[i])
    {
        if(isOperand(infix[i]))
        {
            postfix[j++]=infix[i++];//except operatre we store in array first;
        }
        else 
        {
            if(pre(infix[i])>pre(topOfStack()))//top->data
            Push(infix[i++]);
            else
            postfix[j++]=Pop();
        }
       
    } while(Top)
        {
             postfix[j++]=Pop();
        }
        postfix[j]='\0';
    return postfix;
}
int  Stack:: Evalution (char *postfix)
{
    int i,x1,x2,r;
    for(i=0;postfix[i];i++)
    {
        if(isOperand(postfix[i]))
        Push(postfix[i]-'0');
    
    else
    {
        x2=Pop();
        x1=Pop();
        switch(postfix[i])
       {
           case '+':r=x1+x2;Push(r);break;
           case '-':r=x1-x2;Push(r);break;
           case '*':r=x1*x2;Push(r);break;
           case '/':r=x1/x2;Push(r);break;
       }
    }   
    }   return Pop();
}
int main()
{
    Stack st;
    /*int n,x;
    cout<<"\nEnter How Many Data U want to Push in to Stack";
    cin>>n;
    cout<<"\nEnter Your Data";
    while(n--)
    {
       cin>>x;
       st.Push(x);
      
    }
    st.Display();
    cout<<"\nPoped UP Data : "<<st.Pop();
    cout<<"\nPoped UP Data : "<<st.Pop();
    st.Display();/
    char str1[]="((a+b)(*(c-)d))";
    char str2[]="{([a+b]*[c-d)])/e}";
    if(st.isMatch(str1))
    cout<<"\nYes Expression Mathches";
    else
    {cout<<"\nexpression not Match";}
    if(st.isBalenced(str2))
    cout<<"\nYes Expression Mathches";
    else
    cout<<"\nexpression not Match";*/
    // st.Push('#');
    char *infix="6+5+3*4";
    char*post = st.infixtopostfix(infix);
    cout<<"\n Postfix Form : "<<post;
    cout<<"\n Value : "<<st.Evalution(post);
}
