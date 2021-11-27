#pragma once

#ifdef DLL_EXPORT
#define DLL_API  __declspec(dllexport)
#else
#define DLL_API  __declspec(dllimport)
#endif

class DLL_API Math{
  public:
     double mysqrt(double);
};