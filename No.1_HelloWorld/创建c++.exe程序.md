## 创建c++.exe程序

使用软件为Visual Studio 2022，安装教程见学习课程The cherno c++

创建新项目选择空模板即可，在源文件中添加新建项命名main.cpp
编写代码
```
#include <iostream>

int main()
{
	std::cout << "Hello World!" << std::endl;
	std::cin.get();
}
```
进行调试，输出显示1>hello world.vcxproj -> H:\c++LearningByZhen\hello world\x64\Debug\hello world.exe
已在该位置下生成Hello World.exe程序。

```
//使用自定义函数替换cout
#include <iostream>

void Log(const char* message)
{
	std::cout << message << std::endl;
}

int main()
{
	Log("Hello World!");
	std::cin.get();
}

```
在源文件中创建Log.cpp将Log函数剪切到Log.cpp中，将main和Log文件连接需要 void Log(const char* message)；函数的声明。

### 代码解释
#include <iostream>预处理指令（preprocessor statement）--发生在编译之前
include的文件一般位于头文件中
int main（）--程序执行的入口
cin.get --等待输入回车

### 代码执行过程
首先将预处理文件添加进我们的文件然后编译器将代码解释为二进制文件
.cpp文件会被编译，头文件不会 -> cpp文件一个一个单独编译成为object文件(.obj) -> 连接器（linker）将各个.obj文件连接起来成为.exe

两个文件Log和main编译整个项目linker会自动寻找log的定义编译整个项目，单独执行main文件则会报错

### 第一次尝试使用git

我成功的在vscode上使用远程连接的方式提交文档，但是要在vs 上使用git将c++程序提交到GitHub上出现了问题：
vs上显示的是git分支和vscode中则是直接连接了github远程仓库，同时发现将vs中直接编辑的md文件在VScode中打开出现乱码，之前同学的github仓库中也出现了类似情况。
尝试使用git失败我将在vs中测试cpp程序在vscode中编写学习笔记。