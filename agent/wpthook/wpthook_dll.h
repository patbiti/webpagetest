#pragma once

extern "C" {
__declspec( dllimport ) void WINAPI InstallHook(HANDLE process);
__declspec( dllimport ) void WINAPI 
                                SetResultsFileBase(const WCHAR * file_base);
__declspec( dllimport ) void WINAPI SetTestTimeout(DWORD timeout);
__declspec( dllimport ) void WINAPI SetForceDocComplete(bool force);
}