#include "stdafx.h"

extern "C" __declspec( dllexport ) UINT Rollback(MSIHANDLE hInstall)
{
	WcaLog(LOGLEVEL::LOGMSG_STANDARD, "Rollback");
	return ERROR_INSTALL_FAILURE;
}
