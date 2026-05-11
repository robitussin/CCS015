class DynamicIntstack
{
private:
    struct StackNode
    {
        int value;
        StackNode *next;
    };

    StackNode *top;

public:
    DynamicIntstack()
    {
        top = nullptr;
    }
    void push(int num);
    void pop(int &num);
    bool isEmpty();
};
