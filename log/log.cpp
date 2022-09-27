#include "log.h"

void CLog::GetTime(char* pszTime, int nTimeStrLength)
{
}

bool CLog::Init(bool bToFile, bool bTruncateLongLog, char* pszLogFileName)
{
	m_bToFile = bToFile;
	m_bTruncateLongLog = bTruncateLongLog;

	if (pszLogFileName == nullptr || pszLogFileName[0] == '\0')
	{
		return false;
	}

	char pszHomePath[MAX_LINE_LENGTH] = {0};


	return true;
}

bool CLog::Uninit()
{
	return false;
}

void CLog::SetLogType(LogType nLogType)
{
}

bool CLog::PrintLog(int nType, char* pszFmt, ...)
{
	return false;
}

bool CLog::PrintLog(int nType, char* pszFunctionSign, int nLineNumber, char* pszFmt, ...)
{
	return false;
}
