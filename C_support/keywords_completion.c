
//Sample 1: support for _Generic keyword
#define type_idx(T) _Generic( (T), \
        char: 1, \
        int: 2, \
        long: 3, \
        double: 4, \
        default: 0)

int type_id0 = type_idx('q');
int type_id1 = type_idx('a');
int type_id2 = type_idx("a");
int type_id3 = type_idx(2);
int type_id4 = type_idx(2.0);

//Sample 2: completion for _Static_assert
void program_checks()
{
    _Static_assert(sizeof(int) == 2 * sizeof(char) ,
                   "this program requires that char is twice less than int");
}

//Sample 3: completion for _Alignas
struct data {
    char x;
    _Alignas(128) char cacheline[128];
};
