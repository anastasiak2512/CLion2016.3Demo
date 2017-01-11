
template<typename T>
struct Maybe;

template<typename T>
Maybe<T> maybe(T *context)
{
    return Maybe<T>(context);
}

// Press /// and type Enter to get Doxygen comments generated
template<typename T>
struct Maybe {
    T *context;

    Maybe(T *context) : context(context)
    {}
    
    // Press /// and type Enter to get Doxygen comments generated
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
