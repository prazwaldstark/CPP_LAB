#include <cstdio>
namespace square
{
    int fun(int num){
        int square;
        square = num * num;
        return square;
    }
}

namespace cube 
{
    int fun(int num){
        int cube;
        cube  = num* num * num;
        return cube;
    }
}
int main ()
{
    int num2 = square::fun(10);
    int num1 = cube::fun(5);
    printf("The square of the result obtained from cube namespace is:\n >%d",square::fun(num1));
    printf("The square of the result obtained from cube namespace is:\n >%d",cube::fun(num2));
    return 0;
}