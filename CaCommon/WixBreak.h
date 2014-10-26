#pragma once
#include "MsiBreak.h"

#ifdef _DEBUG

#define BreakExitOnFailure(x, s)			if (FAILED(x)) { MsiDebugBreak(); } ExitOnFailure(x, s)				 
#define BreakExitOnFailure1(x, f, s)		if (FAILED(x)) { MsiDebugBreak(); } ExitOnFailure1(x, f, s)			 
#define BreakExitOnFailure2(x, f, s, t)		if (FAILED(x)) { MsiDebugBreak(); } ExitOnFailure2(x, f, s, t)		 
#define BreakExitOnFailure3(x, f, s, t, u)	if (FAILED(x)) { MsiDebugBreak(); } ExitOnFailure3(x, f, s, t, u) 
#define BreakExitOnNull(p, x, e, s)			if (NULL == p) { MsiDebugBreak(); } ExitOnNull(p, x, e, s)			 
#define BreakExitOnNull1(p, x, e, f, s)		if (NULL == p) { MsiDebugBreak(); } ExitOnNull1(p, x, e, f, s)		 
#define BreakExitOnNull2(p, x, e, f, s, t)  if (NULL == p) { MsiDebugBreak(); } ExitOnNull2(p, x, e, f, s, t)  

#else

#define BreakExitOnFailure(x, s)			ExitOnFailure(x, s)				
#define BreakExitOnFailure1(x, f, s)		ExitOnFailure1(x, f, s)			
#define BreakExitOnFailure2(x, f, s, t)		ExitOnFailure2(x, f, s, t)		
#define BreakExitOnFailure3(x, f, s, t, u)	ExitOnFailure3(x, f, s, t, u)
#define BreakExitOnNull(p, x, e, s)			ExitOnNull(p, x, e, s)			
#define BreakExitOnNull1(p, x, e, f, s)		ExitOnNull1(p, x, e, f, s)		
#define BreakExitOnNull2(p, x, e, f, s, t)	ExitOnNull2(p, x, e, f, s, t) 

#endif