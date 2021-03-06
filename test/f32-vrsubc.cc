// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/f32-vrsubc.yaml
//   Generator: tools/generate-vbinary-test.py


#include <gtest/gtest.h>

#include <xnnpack/common.h>
#include <xnnpack/isa-checks.h>

#include <xnnpack/vbinary.h>
#include "vbinaryc-microkernel-tester.h"


#if XNN_ARCH_WASMSIMD
  TEST(F32_VRSUBC__WASMSIMD_X4, batch_eq_4) {
    VBinOpCMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vrsubc_ukernel__wasmsimd_x4, VBinOpCMicrokernelTester::OpType::RSubC);
  }

  TEST(F32_VRSUBC__WASMSIMD_X4, batch_div_4) {
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsubc_ukernel__wasmsimd_x4, VBinOpCMicrokernelTester::OpType::RSubC);
    }
  }

  TEST(F32_VRSUBC__WASMSIMD_X4, batch_lt_4) {
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsubc_ukernel__wasmsimd_x4, VBinOpCMicrokernelTester::OpType::RSubC);
    }
  }

  TEST(F32_VRSUBC__WASMSIMD_X4, batch_gt_4) {
    for (size_t batch_size = 5; batch_size < 8; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsubc_ukernel__wasmsimd_x4, VBinOpCMicrokernelTester::OpType::RSubC);
    }
  }

  TEST(F32_VRSUBC__WASMSIMD_X4, inplace) {
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsubc_ukernel__wasmsimd_x4, VBinOpCMicrokernelTester::OpType::RSubC);
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_VRSUBC__WASMSIMD_X8, batch_eq_8) {
    VBinOpCMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vrsubc_ukernel__wasmsimd_x8, VBinOpCMicrokernelTester::OpType::RSubC);
  }

  TEST(F32_VRSUBC__WASMSIMD_X8, batch_div_8) {
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsubc_ukernel__wasmsimd_x8, VBinOpCMicrokernelTester::OpType::RSubC);
    }
  }

  TEST(F32_VRSUBC__WASMSIMD_X8, batch_lt_8) {
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsubc_ukernel__wasmsimd_x8, VBinOpCMicrokernelTester::OpType::RSubC);
    }
  }

  TEST(F32_VRSUBC__WASMSIMD_X8, batch_gt_8) {
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsubc_ukernel__wasmsimd_x8, VBinOpCMicrokernelTester::OpType::RSubC);
    }
  }

  TEST(F32_VRSUBC__WASMSIMD_X8, inplace) {
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsubc_ukernel__wasmsimd_x8, VBinOpCMicrokernelTester::OpType::RSubC);
    }
  }
#endif  // XNN_ARCH_WASMSIMD
