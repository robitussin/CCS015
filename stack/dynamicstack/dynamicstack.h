class DynamicStack
{
private:
    struct StackNode
    {
        int value;
        StackNode *next;
    };

    StackNode *top;

public:
    DynamicStack()
    {
        top = nullptr;
    }
    void push(int num);
    void pop(int &num);
    bool isEmpty();
};
