class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
     Node* first=new Node(0);
     first->next=head;
     head=first;
     while(first->next){
         int x=k;
         Node* sec=first->next;
         Node* pre=first;
         Node* cur=first->next;
         while(x && cur){
             Node*front=cur->next;
             cur->next=pre;
             pre=cur;
             cur=front;
             x--;
         }
         first->next=pre;
         sec->next=cur;
         first=sec;
     }
     head=head->next;
     return head;
    }
};