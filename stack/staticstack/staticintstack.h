class StaticIntStack
{
private:
    int *stackArray;
    int stackSize;
    int top;

public:
    StaticIntStack(int size);
    void push(int num);
    void pop(int &num);
    bool isFull();
    bool isEmpty();
};