template <class T>
class queue
{
    T *data;
    int capacity, front, rear, size;

    public:
    queue(int s)
    {
        data = new T[s];
        capacity=s;
        front=-1;
        rear=0;
        size=0;
    }

    bool empty()
    {
        if (size==0)
        return true;
        else
        return false;
    }

    void push(T item)
    {
        if(size==capacity)
        printf("Queue is full.\n");
        else
        {
            data[rear] = item;
            rear=(rear+1)%capacity;//To make it circular queue.
            size++;
            if(front==-1)
            front=0;
        }
    }

    void pop()
    {
        if(empty())
        printf("Queue is empty\n");
        else
        {
            front=(front+1)%capacity;//To make it circular queue.
            size--;
        }
    }

    T top()
    {
        if(empty())
        return 0;
        else
        return data[front];
    }

};