template <class T>
class stack
{
  
    T *data;
    int index;
    int capacity;

      public:    
    stack(int size)
    {
        data = new T[size];
        index = 0;
        capacity = size;
    }



bool isEmpty()
{
    if(index==0)
        return true;
    else
        return false;
}

int size()
{
    return capacity;
}

void push(T item)
{
    if(index==capacity)
        printf("stack is full\n");
    else
    {
        data[index]=item;
        index++;
    }
    
}

void pop()
{
    if(isEmpty())
    {
        printf("stack is empty\n");
    }  
    else
    {
        index--;
    }
}

T top()
{
    if(isEmpty())
    {
        printf("stack is empty\n");
        return 0;
    }
    else
    return data[index-1];
}

};

