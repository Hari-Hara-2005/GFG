class myQueue {

  public:
    vector<int>arr;
    int front =0,rear=-1,cap,count=0;
    myQueue(int n) {
        // Define Data Structures
        arr.resize(n);
        cap = n;
    }

    bool isEmpty() {
        // check if the queue is empty
        return count == 0;
    }

    bool isFull() {
        // check if the queue is full
        return count == cap;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(isFull())return;
        rear = (rear+1)%cap;
        arr[rear] = x;
        count++;
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(isEmpty())return;
        front = (front+1)%cap;
        count--;
    }

    int getFront() {
        // Returns the front element of the queue.
        if(isEmpty())return -1;
        return arr[front];
    }

    int getRear() {
        // Return the last element of queue
        if(isEmpty())return -1;
        return arr[rear];
    }
};