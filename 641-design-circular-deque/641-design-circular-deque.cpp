class MyCircularDeque {
public:
    deque <int>q;
    int size=0,cap;
    MyCircularDeque(int k) {
        cap=k;
    }
    
    bool insertFront(int value) {
        if(size<cap)
        {
            q.push_front(value);
            size++;
            return true;
        }
        else
            return false;
    }
    
    bool insertLast(int value) {
        if(size<cap)
        {
            q.push_back(value);
            size++;
            return true;
        }
        else
            return false;
    }
    
    bool deleteFront() {
        if(size!=0)
        {
            q.pop_front();
            size--;
            return true;
        }
        else
            return false;
    }
    
    bool deleteLast() {
        if(size!=0)
        {
            q.pop_back();
            size--;
            return true;
        }
        else
            return false;
    }
    
    int getFront() {
        if(size!=0)
            return q.front();
        else
            return -1;
    }
    
    int getRear() {
        if(size!=0)
            return q.back();
        else
            return -1;
    }
    
    bool isEmpty() {
        return (q.empty());
    }
    
    bool isFull() {
        return (size==cap);
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */