class IntQueue{
private:
    int* queueArray;
    int queueSize;
    int front;
    int rear;
    int numItems;

public:
    IntQueue(int size);
    ~IntQueue();
    void enqueue(int num);
    void dequeue(int &num);
    bool isFull();
    bool isEmpty();
    void clear();
};