#pragma once
#include "../Standard/common.hpp"

#define MAX_LINE_LENGTH 256

enum LogType{
	Log_Info = 0,
	Log_Warning = 1,
	Log_Error = 2,
};


class CLog
{
public:
	static bool Init(bool bToFile, bool bTruncateLongLog, char* pszLogFileName);
	static bool Uninit();
	static void SetLogType(LogType nLogType);

	static bool PrintLog(int nType, char* pszFmt, ...);
	static bool PrintLog(int nType, char* pszFunctionSign, int nLineNumber, char* pszFmt, ...);
	static bool PrintLog(int nType, char* pszFunctionSign, int nLineNumber, char* pszFmt, ...);

private:
	CLog() = delete;
	~CLog() = delete;
	CLog(const CLog& rhs) = delete;
	CLog& operator = (const CLog& rhs) = delete;

	static void GetTime(char* pszTime, int nTimeStrLength);
private:
	static bool    m_bToFile;
	static bool    m_bTruncateLongLog;
	static LogType m_nLogType;
};

