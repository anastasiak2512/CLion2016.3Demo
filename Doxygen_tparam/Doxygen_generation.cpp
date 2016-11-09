
template<typename T>
struct Maybe;

template<typename T>
Maybe<T> maybe(T *context)
{
    return Maybe<T>(context);
}

template<typename T>
struct Maybe {
    T *context;

    Maybe(T *context) : context(context)
    {}
    
    template<typename TFunc>
    auto With(TFunc evaluator)
    {
        return context != nullptr ? maybe(evaluator(context)) : nullptr;
    };

    template<typename TFunc>
    auto Do(TFunc action)
    {
        if (context != nullptr) action(context);
        return *this;
    }
};
