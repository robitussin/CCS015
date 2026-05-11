class StaticStack
{
private:
    int *stackArray;
    int stackSize;
    int top;

public:
    StaticStack(int size);
    void push(int num);
    void pop(int &num);
    bool isFull();
    bool isEmpty();
};