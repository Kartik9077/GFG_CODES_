class Solution {
  public:
  
    int findLength (Node*first){
        int count = 0;
        while(first){
            count ++;
            first = first->next;
        }
        return count;
    }
    
    Node*reverse(Node*first){
        Node*temp = first;
        Node*prev = NULL;
        while(temp){
            temp = temp->next;
            first->next = prev ;
            prev = first;
            first = temp;
        }
        return prev;
    }
    
    Node*removeLeadingZero (Node*first){
        while(first && first->data == 0){
            first = first->next;
        }
        if(first == NULL){
            return new Node(0);
        }
        return first;
    }
    
    Node* subLinkedList(Node* head1, Node* head2) {
        // Your implementation of subLinkedList goes here
        // Make sure to return the head of the resulting linked list
        head1 = removeLeadingZero(head1);
        head2 = removeLeadingZero(head2);
        
        Node*temp1 = head1;
        Node*temp2 = head2;
        
        int len1 = findLength(head1);
        int len2 = findLength(head2);
        
        Node*greater = head1;
        Node*small = head2;
        
        if(len1 > len2){
            greater = head1;
            small = head2;
        }
        else if(len1 < len2){
            greater = head2;
            small = head1;
        }
        else{
            while(head1 && head2){
                if(head1->data > head2->data){
                    greater = temp1;
                    small = temp2;
                    break;
                }
                else if(head1->data < head2->data){
                    greater = temp2;
                    small = temp1;
                    break;
                }
                else{
                    head1 = head1->next;
                    head2 = head2->next;
                }
            }
        }
        
        greater = reverse(greater);
        small = reverse(small);
        
        Node*ans = new Node(-1);
        Node*ansHead = ans;
        
        int borrow = 0;
        while(greater && small){
            if((greater->data + borrow) < small->data){
                int val = greater->data + 10 - small->data + borrow;
                borrow = -1;
                Node*newNode = new Node(val);
                ans->next = newNode;
                ans = newNode;
                
            }
            else{
                int val = greater->data + borrow - small->data;
                borrow = 0;
                Node*newNode = new Node(val);
                ans->next = newNode;
                ans = newNode;
            }
            
            greater = greater->next;
            small = small->next;
        }
        
        while(greater){
            if((greater->data + borrow) < 0 ){
                int val = greater->data + 10  + borrow;
                borrow = -1;
                Node*newNode = new Node(val);
                ans->next = newNode;
                ans = newNode;
            }
            else{
                int val = greater->data + borrow ;
                borrow = 0;
                Node*newNode = new Node(val);
                ans->next = newNode;
                ans = newNode;
            }
            greater = greater->next;
            
        }
        ansHead = reverse(ansHead->next);
        return removeLeadingZero(ansHead);
    }
};