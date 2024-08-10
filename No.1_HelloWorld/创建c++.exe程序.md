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


### 第一次尝试使用git

我成功的在vscode上使用远程连接的方式提交文档，但是要在vs 上使用git将c++程序提交到GitHub上出现了问题：
vs上显示的是git分支和vscode中则是直接连接了github远程仓库，同时发现将vs中直接编辑的md文件在VScode中打开出现乱码，之前同学的github仓库中也出现了类似情况。
尝试使用git失败我将在vs中测试cpp程序在vscode中编写学习笔记。