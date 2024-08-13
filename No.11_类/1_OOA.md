## 面向对象的程序设计
Java和C#都是面向对象的编程语言，C++不仅仅支持面向对象编程(面向过程，基于对象，面向对象，泛型编程)，c语言就不支持面向对象了。

面向对象编程需类和对象等这样的概念。

### 类class
类是一种将数据和函数组织在一起的方式。类内的函数称为方法(method)

```c++
class Player
{
    public:
    int x,y;
    int speed;

    void Move(int xa ,int ya)
{
    x += xa *speed;
    y += ya *speed;
}
};

/*void Move(Player& palyer ,int xa ,int ya)
{
    player.x += xa *player.speed;
    player.y += ya *player.speed;
}*/
int main()
{
    Player player;
    player.x=5;
    player.move(1,-1);
}
```

### 结构体struct
class的成员一般默认是私有的(private)，类的成员不可见

结构体的的成员一般默认公有(public)

结构体的存在是为了适应c语言的存在，使用`#define struct class`可直接替换，发现两者并没有差别。

### 二者的选用
二者的使用只是一种编程风格

- 使用一些plain old data或者只是包含一些变量的结构时，喜欢用struct
  - 数学中的向量类
  ```c++
  struct Vec2
  {
    float x,y;

    void Add(const Vec2& other)//结构体中的方法
    {
        x += other.y;
        y =+ other.y;
    }
  }
  ```

- class则适用于可能发生使用继承的情况
