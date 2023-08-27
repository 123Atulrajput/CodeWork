#include<stdio.h>
#include<conio.h>
using namespace std ;
class SLL
{
    private
    struct node
    {
         int item ;
         node*next;

    };
    node*start ;
    public
    SLL(){start==NULL};
    void insertatlast(int data);
    void insertafter(int value, int data);
    void insertatfirst(int data );
    void deletefirst();
    void deletelast();
    void deletenode(int value)
    void viewlist();



};
    void SLL::insertatlast(int data )
    {
        node*t;
        node*n=new node ;
        n->item=data;
        n->next=NULL;
        if(start==NULL)
        {
            start =n;
        }
        else
        {   t =start;
        //t phle node ko point kar rha hai means vhi hai phla node or jab dusre node ko point kre toh hai dusra node kon khud t hi
            while(t->next!==null);
            t= t->next;
            t->next=n;

        }

    }
    void SLL::insertatfirst(int data)
    {
        node*n= new node;
        n->item =data;
        n->next=start;
        start=n;
    }
    void SLL::deleteatfirst()
    {//dangling pointer ka concept ayega abb  esa ponter joh kiskiko point nhi karta adreess leak ho jayega 2nd node ke baad sara
        // r 1st node ko point kar rha hoga or usi smay star dangling na ho isliye voh 2nd node ko point karega
        node*r;
        r=start

        start=r->next;

        delete r;

    }
    void SLL::deleteatlast()
    {
        node*t1,t2;
         if(start==NULL)
            {
                cout<<"condition of underflow";

            }
        while(t->next!=NULL)
        {
            t2=t1;
            t=t->next;
        }
        if(t2=NULL)

            start==NULL;
            else
        t2->next=NULL;

        delete t1;

        }
    void SLL::viewlist()
    {
        t= start;
        while(t)
        {
            t=t->next;
            cout<<"t->item"<<"";
        }

    }

    void SLL::insertafter(int value ,int data )
    {
        node*t,n;
        while(t)
        {
            if (t->item==value)
                break;
                t=t->next;
        }
        if(t!=NULL)
        n=new node;
        n->item=data;
        n->next=t->next;

    }
    void SLL::deletenode(int value )
    {
        t1=start;
        t2=NULL;
        while(t)
        {
            if(t->item==value)
            break;

            t=t->next;

        }
        if(t1==NULL)
            cout<<"no item with the value"<<value  <<"in the list";
        else
        if(t2==NULL)
        start=t1->next;
        else
            t2->next=t1->next;
            delete t1;


    }
