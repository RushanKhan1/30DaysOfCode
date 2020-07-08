#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
  Node(int d){ // only constructor available
            data=d;
            next=NULL; //an element gets created.
             }
};
class Solution{
    public:
          Node* removeDuplicates(Node *head)
          {
	           int current;
	           Node* prev;
            if(head == NULL)
	          {
		            return head;
	          }
	       prev = head; //copy of the current head variable
	       Node* update; //A pointer to remember the original linked list's starting point.
	       update = head;
	       while(prev != NULL)
	       {
		         current = prev->data; //element to be checked
		         head = prev -> next;
		  while(head != NULL) //while the current element is not null
		    {
		      if(current == head->data) //if data is found to be same as a particular node's data
		        {
		    	     prev->next = head->next; //we are throwing head, the duplicate element, out of the chain.
		        }
		      head = head->next; //we have to check each element of the linked list hence moving onto the next element
		    }
 		      prev  = prev->next; //prev points to the next element now.
	      }
	        return update;
        }

  Node* insert(Node *head,int data) //function to insert a node
          {
	           Node* p;
	           p = new Node(data); //p is a new instance of node. data gets passed on the Node cunstructor.
               if(head==NULL){
		                head=p;  //if the head is empty meaning that the node is empty then we insert the node at the starting pointer.
               }
               else if(head->next==NULL){
		               head->next=p; //if the next element is empty then we insert the node at the next position.
               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){ //if both the above conditions are not true then we find an empty pointer and insert the node there
                       start=start->next;
                   }
                   start->next=p;
               }
                    return head;
          }
          void display(Node *head)
          {
                  Node *start=head;
		              while(start) //while start is not equal to null.
                     {
                         cout<<start->data<<" ";
                         start=start->next;
                     }
           }
};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  Node* head=NULL;
  Solution mylist;
  int T,data;
  cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }
    head=mylist.removeDuplicates(head);

	mylist.display(head);

}
