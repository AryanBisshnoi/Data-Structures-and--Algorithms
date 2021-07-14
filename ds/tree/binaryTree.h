template <class T>
class btn
{
    public:

    T data;
    btn *lchild;
    btn *rchild;

    btn(T d)
    {
        data = d;
        lchild=NULL;
        rchild=NULL;
    }
};