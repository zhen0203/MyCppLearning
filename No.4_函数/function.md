## 函数function
某种不属于class的东西

input->output就是函数

函数为了防止代码重复

``` c++
int /*返回值类型*/Multiply/*函数名*/(int a, int b)/*输入值*/
{
    return a*b;//返回值
}

//扩充内容直接打印
void MultiplyAndLog(int a, int b)
{
    int result=Multiply(a,b);
    std::cout << result << std::endl;
}
```

### 函数执行过程
每一次选择调用函数，编译器生成调用指令，创造一整个stack frame（栈框架）把参数传到栈上，最后再从栈返回。