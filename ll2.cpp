#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

    ~Node(){
        // cout<<"dis called";
        if(next!=NULL){
            delete next;
            next = NULL;
        }
    }
};
class List{
    public:
    Node*head;
    Node*tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    ~List(){
        //  cout<<"dis of ll  called";
        if(head!=NULL){
            delete head;
            head = NULL;
        }
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print_list(){
        Node* temp = head;
        while(temp!=0){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    void  insert_position(int val , int pos){
        Node* newNode = new Node(val);
        if(pos==0){
            push_front(val);
            return;
        }
        Node* temp = head;
        for(int i=0 ; i<pos-1;i++){\
        if(temp==NULL){
            cout<<"invalid";
            return;
        }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void pop_front(){
        if(head== NULL){
            cout<<"List Is Empty";
        }else{
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }
    void pop_back(){
        if(head==NULL){
            cout<<"List Is Empty";
        }else if(head==tail){
            delete tail;
        }else{
            Node* temp = head;
            while(temp->next->next!=NULL){
                temp = temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail = temp;
        }
    }
     int searchKey(int val){
        Node* temp = head;
        int idx=0;
        while(temp !=NULL){
            if(temp->data==val){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
      return -1;
    }
    void reverse(){
        Node* curr = head;
        Node* prev = NULL;

        while (curr!=NULL)
        {
           Node* next = curr-> next;
           curr->next = prev;

           //updation
           prev=curr;
           curr=next;
        }
        head = prev;  
    }
    // void removeNth(int n){

    // }
    
};
int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(5);
    ll.push_front(6);
    // ll.print_list();
    // ll.push_back(7);
    // ll.push_back(8);
    // ll.push_back(9);
    // // ll.print_list();
    // ll.insert_position(100 , 0);
    // ll.print_list();
    // cout<<endl;
    // ll.pop_front();
    // ll.print_list();
    // cout<<endl;
    // ll.pop_back();
    ll.print_list();
    cout<<endl;
    ll.reverse();
     ll.print_list();
    // cout<<endl;
    // cout<<ll.searchKey(4);
    

    return 0;
}