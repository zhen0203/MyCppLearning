#incldue <iostream>

class Log
{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 3;
private:
    int m_LogLevel;
public:
    void SetLevel(int level)
    {
        m_LogeLevel = level;
    }

    void Error(const char* message)
    {
        if(m_LogeLevel >= LogLevelError)
        std::cout << "[Error]:" << message << std::endl;
    }

    void Warn(const char* message)
    {
        if(m_LogeLevel >= LogLevelWarning)
        std::cout << "[Warning]:" << message << std::endl;
    }

    void Info(const char* message)
    {
        if(m_LogeLevel >= LogLevelInfo)
        std::cout << "[Info]:" << message << std::endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(log.LogLevelWarning);//SetLevel方法，只有warning和error级的信息才会显示
    log.warn("Hello");
    std::cin.get();
}