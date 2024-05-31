class MyStack {
public:
    queue<int> q1;
    queue<int> q2;

    MyStack() {
        
    }
    
    void push(int x) {

        // O(n)
        // if queue1 is empty simply push the element
        if(q1.empty()){
            q1.push(x);
        }

        else{
            // transfer all elements of q1 to q2
            while(!q1.empty()){
                int data = q1.front();
                q1.pop();
                q2.push(data);
            }
            // push the element in q1
            q1.push(x);
            //transfer all elements from q2 to q1
            while(!q2.empty()){
                int val = q2.front();
                q2.pop();
                q1.push(val);
            }
        }

    }
    
    int pop() {
    
        int element = q1.front();
        q1.pop();
        return element;
    }
    
    int top() {
       
        int element = q1.front();
        return element;
    }
    
    bool empty() {
        if(q1.size()==0){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */