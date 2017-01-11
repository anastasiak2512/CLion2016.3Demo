
// Press /// and type Enter to get Doxygen comments generated
void printf(int format, ...) {
    //...
}

// Press /// and type Enter to get Doxygen comments generated
template<typename...>
struct Tuple {
};

template<typename T1 , typename T2>
struct Pair {
};

template<class ...Args1>
struct zip {
    template<class ...Args2>
    struct with {
        typedef Tuple<Pair<Args1 , Args2>...> type;
    };
};

typedef zip<short , int>::with<unsigned short , unsigned>::type T1;
