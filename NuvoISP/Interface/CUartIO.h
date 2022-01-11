#ifndef INC__UART_HPP__
#define INC__UART_HPP__

class CUartIO
{
protected:
    HANDLE m_hCOMHandle;

public:
    CUartIO();
    virtual ~CUartIO();
    void CloseDevice();
    BOOL OpenDevice(CString strComNum);
    BOOL SetParity(const char mode);
    BOOL ReadFile(char *pcBuffer, DWORD szMaxLen, DWORD *pdwLength, DWORD dwMilliseconds);
    BOOL WriteFile(const char *pcBuffer, DWORD szLen, DWORD *pdwLength, DWORD dwMilliseconds);
    //OVERLAPPED m_overlapped;
};

#endif
