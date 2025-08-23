class Node{
    int key, value; 
    Node *prev, *next ; 
    Node(int x=-1, int y=-1):key(x), value(y), prev(NULL), next(NULL){}
    friend class LRUCache ; 
};

class LRUCache {
  
  public:
    // Constructor for initializing the cache capacity with the given value.
    int size, currSize  ;
    unordered_map<int, Node*> mp ; 
    Node* start, *end  ;

    LRUCache(int capacity) {
        currSize = 0 ; 
        size = capacity  ; 
        start = new Node();
        end = new Node(); 
        end ->prev = start ; 
        start ->next = end ; 
    }
    
    int get(int key) {
       
        if(mp.find(key) != mp.end()){

            Node* Target = mp[key];
            
            Target->prev->next = Target->next; 
            Target->next->prev = Target->prev ; 
            Target->prev = start ; 
            Target->next = start->next ; 
            start->next->prev = Target;
            start->next = Target; 
            return mp[key]->value ; 
        }
        else{
            return -1;
        }
    }
    
    void put(int key, int value) {
        
        if(mp.find(key) != mp.end()){
            Node* Target = mp[key];
            mp[key]->value = value ;

            Target->prev->next = Target->next ; 
            Target->next->prev = Target->prev; 
            Target->next = start->next ; 
            start->next->prev = Target ; 
            Target->next = start->next; 
            Target->prev = start; 
            start->next = Target; 

        }
        else{
            if(size==currSize){
                Node* Last = end->prev ; 
                Last->prev->next = end ; 
                end->prev = Last->prev;
                
                mp.erase(Last->key);
            }
            else{
                currSize++; 
            } 
            Node* newNode = new Node(key, value);
            newNode->prev = start ; 
            newNode->next = start->next ; 
            start->next->prev = newNode ; 
            start->next = newNode ; 
            mp[key]= newNode ;
        } 
    }
};