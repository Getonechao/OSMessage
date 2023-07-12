/**
 * @file CPU.hh
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-07-11
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <cstdint>
#include <functional>
#include <string>
#include <vector>
#ifndef _CPU_HH_
#define _CPU_HH_

class CPU {
  enum class ByteOrder { LittleEndian, BigEndian };
  std::string CPUFileName;
  // struct processor {
  //   std::string processor;  // 处理器
  //   std::string vendor_id;  // 厂商
  //   std::string cpu_family; // 系列
  //   std::string model;    // 型号
  //   std::string model_name; // 型号名称 
  //   std::string stepping;  // 步进
  //   std::string microcode;  // 微码
  //   std::string cpu_MHz;  // 主频
  //   std::string cache_size; // 缓存大小
  //   std::string physical_id;  // 物理ID
  //   std::string siblings; // 兄弟
  //   std::string core_id;  // 核心ID
  //   std::string cpu_cores;  // 核心数 
  //   std::string apicid; // APICID
  //   std::string initial_apicid; // 初始APICID
  //   std::string fpu;  // 浮点运算单元
  //   std::string fpu_exception;  // 浮点异常
  //   std::string cpuid_level;  // CPUID等级
  //   std::string wp; // WP
  //   std::string flags;  // 标志 
  //   std::string bogomips; // Bogomips
  //   std::string clflush_size; // CLFLUSH大小
  //   std::string cache_alignment;  // 缓存对齐
  //   std::string address_sizes;  // 地址大小
  //   std::string power_management; // 电源管理
  // };
private:
  // std::vector<struct processor> processors;
  
  uint32_t CPUCoreNum;      // 核心数
  uint32_t processorNum;    // 线程数
  std::string Architecture; // 架构
  ByteOrder ByteOrder;      // 大端小端
  std::string CPUModel;     // CPU型号
  std::string CPUModelName; // CPU型号名称
  std::string CPUMHz;       // CPU主频
  std::string CPUVendor;    // CPU厂商
  std::string CPUFamily;    // CPU系列

public:
  CPU();
  CPU(const CPU &) = default;
  CPU(CPU &&) = default;
  CPU &operator=(const CPU &) = default;
  CPU &operator=(CPU &&) = default;
  void GetCPUMessage();
};

#endif