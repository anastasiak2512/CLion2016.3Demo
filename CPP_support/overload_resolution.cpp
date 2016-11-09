
//Sample 1
template<int N>
class A {
public:
    template<class T>
    A foo(const T &o)
    {
        return *this;
    }

    template<int M>
    A<M> foo(const A<M> &o)
    {
        return o;
    }
};

void check()
{
    A<1> a;
    A<2> b;
    //Go to declaration (Ctrl+B/Cmd+B) to check the correct function is selected
    b = a.foo(b);
}

//Sample 2: Ambiguous call inspection
int foo(const int &); // overload #1
int foo(int);         // overload #2

int i;
int k = foo(i); // lvalue i -> const int& ranks Exact Match
                // lvalue i -> rvalue int ranks Exact Match

//Sample 3: No matching function to call inspection
struct X {};

void boo(X &x);
void boo(X &&x);

void test(const X cx)
{
    boo(cx);
}
