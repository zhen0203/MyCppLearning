class内的static代表着一个特殊的东西，只有唯一，在不同的实例当中修改static变量会使得所有修改(类中的全局属性)

```c++
#include<iostream>

struct Entity
{
    static x,y;
    void Print()
    {
        std::cout << x << "," << y << std::endl;
    }
};

int Entity::x;//
int Entity::y;//相当于已经对静态变量进行了定义

int main()
{
    Entity e;
    e.x = 2;
    e.y = 3;

    Entity e1;
    e1.x = 5;
    e1.y = 8;

    e.Print();//都是5，8
    e1.Print();//
}
```
上述代码等同于这样
```c++
Entity e;
Entity::x = 2;
Entity::y = 3;

Entity e1;
Entity::x = 5;
Entity::y = 8;//两条语句对x，y的修改是一样的
```
### 静态方法不能访问非静态变量，静态方法没有类实例
- 静态方法不能访问非静态变量
- 静态方法没有类实例
- 本质上你在类里写的每个非静态方法都会获得当前的类实例作为参数`this指针`
静态成员变量在编译时存储在静态存储区，即定义过程应该在编译时完成，因此一定要在类外进行定义，但可以不初始化。 静态成员变量是所有实例共享的，但是其只是在类中进行了声明，并未定义或初始化（分配内存），类或者类实例就无法访问静态成员变量，这显然是不对的，所以必须先在类外部定义，也就是分配内存。