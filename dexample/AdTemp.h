#pragma once

#ifdef _WIN32
  #ifdef DEXAMPLE_EXPORTS
    #define DEXAMPLE_API __declspec(dllexport)   // при сборке DLL
  #else
    #define DEXAMPLE_API __declspec(dllimport)   // при использовании DLL
  #endif
#else
  #define DEXAMPLE_API
#endif

extern "C"
{
    DEXAMPLE_API int Func_From_AdTemp(int a, int b);
}
