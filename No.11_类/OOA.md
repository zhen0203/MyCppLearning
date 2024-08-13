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