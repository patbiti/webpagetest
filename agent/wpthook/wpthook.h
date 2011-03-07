#pragma once
#include "hook_winsock.h"
#include "hook_gdi.h"
#include "wpt_driver.h"

extern HINSTANCE global_dll_handle; // DLL handle

class WptHook
{
public:
  WptHook(void);
  ~WptHook(void);

  void Init();
  void BackgroundThread();
  bool OnMessage(UINT message, WPARAM wParam, LPARAM lParam);

private:
  CGDIHook  _gdi_hook;
  CWsHook   _winsock_hook;
  HANDLE    _background_thread;
  HWND      _message_window;
  WptDriver _driver;
  CString   _file_base;

  // winsock event tracking
  TrackDns      _dns;
  TrackSockets  _sockets;

  TestState     _test_state;
  Results       _results;
};