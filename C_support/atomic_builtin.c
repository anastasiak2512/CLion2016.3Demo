
//Sample 1: support for atomic builtins
static inline void atomic_add(int i, int *v) {
    __atomic_add_fetch(v, i, __ATOMIC_RELAXED);
}

