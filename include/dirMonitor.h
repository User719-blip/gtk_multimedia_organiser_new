#pragma once
#include "../include/core.h"
#include "../include/global.h"
#include "core.h"
#include <string_view>

class DirMonitor : public fileOperations {
public:
  virtual void startMonitoring(const std::vector<string> &SOURCE) = 0;
  virtual ~DirMonitor() {}
  static std::unique_ptr<DirMonitor> create();
};
