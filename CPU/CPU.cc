#include "CPU.hh"
#include <cstdio>
#include <fstream>
#include <iostream>
#include <unistd.h>
#include <sys/utsname.h>

void CPU::GetCPUMessage() {
  // 获取Linux中的cpu信息
  processorNum=  sysconf(_SC_NPROCESSORS_CONF);
                  uname(struct utsname *name);
  
}