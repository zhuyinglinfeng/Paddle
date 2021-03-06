/* Copyright (c) 2016 PaddlePaddle Authors. All Rights Reserve.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#include "paddle/operators/pool_cudnn_op.h"

namespace ops = paddle::operators;

REGISTER_OP(pool2d_cudnn, ops::PoolOp, ops::Pool2dOpMaker, pool2d_cudnn_grad,
            ops::PoolOpGrad);

REGISTER_OP_CPU_KERNEL(
    pool2d_cudnn, ops::PoolKernel<paddle::platform::CPUDeviceContext, float>,
    ops::PoolKernel<paddle::platform::CPUDeviceContext, double>);
REGISTER_OP_CPU_KERNEL(
    pool2d_cudnn_grad,
    ops::PoolGradKernel<paddle::platform::CPUDeviceContext, float>,
    ops::PoolGradKernel<paddle::platform::CPUDeviceContext, double>)

REGISTER_OP(pool3d_cudnn, ops::PoolOp, ops::Pool3dOpMaker, pool3d_cudnn_grad,
            ops::PoolOpGrad);

REGISTER_OP_CPU_KERNEL(
    pool3d_cudnn, ops::PoolKernel<paddle::platform::CPUDeviceContext, float>,
    ops::PoolKernel<paddle::platform::CPUDeviceContext, double>);
REGISTER_OP_CPU_KERNEL(
    pool3d_cudnn_grad,
    ops::PoolGradKernel<paddle::platform::CPUDeviceContext, float>,
    ops::PoolGradKernel<paddle::platform::CPUDeviceContext, double>)
