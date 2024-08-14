在局部作用域中可以使用static来声明一个变量，这和前两种有所不同。这一种情况需要考虑变量的生命周期和作用域。

- 生命周期：变量实际存在的时间；作用域：指可以访问变量的范围。

- 静态局部（local static）变量允许我们声明一个变量，它的生命周期基本相当于整个程序的生命周期，然而它的作用范围被限制在这个作用域内

```c++
#include <iostream>
int i = 0；//声明一个全局变量
void Function（）
{ 
 i++;
 std::cout << i << std::endl;
}

int main()
{
 Function（）;
 Function（）;
 Function（）; //输出 1 2 3
 std:：cin.get（）
}
```

在局部作用域里进行声明
```c++
#include <iostream>

void Function（）
{ 
    static int i = 0;//局部作用域中的静态声明
 i++;
 std::cout << i << std::endl;
}

int main()
{
 Function（）;
 Function（）;
 Function（）; //输出 1 2 3
 std:：cin.get（）
}
```