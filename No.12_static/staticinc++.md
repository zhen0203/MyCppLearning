## 静态（static）
根据上下文有两种意思
- 一种是在结构体或者类中使用static，表示这个类的所有实例是共享的
- 一种是在结构体或类外使用static，局部的只对该文件的编译单元.obj可见。


使用static的情况就等同于类使用私有变量，事实上是实验的越多越好。
### 类外静态变量/全局变量

```c++
static.cpp

static s_Variable = 5;
```

```c++
main.cpp
#include <iostream>

int s_Variable = 10;

int main()
{
    std::cout << s_Variable << std::endl;
    std::cin.get();
}
```
对此进行编译`s_Variable = 10`,static关键词使得static文件中的变量s_Variable不起作用

将static关键词删除导致错误，将main.cpp中的全局变量修改，变成对另一文件的引用
```c++
extern int s_Variable;//s_Variable = 5
```
如果static文件中又加上了static关键词将导致引用错误。