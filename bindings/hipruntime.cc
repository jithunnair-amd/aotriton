// Copyright © 2023-2024 Advanced Micro Devices, Inc.
// SPDX-License-Identifier: MIT

#include <aotriton/runtime.h>
#include <pybind11/pybind11.h>
namespace py = pybind11;

namespace pyaotriton {
#define EV(name) value(#name, name)
  void def_hipruntime(py::module_& m) {
    py::enum_<hipError_t>(m, "hipError_t")
      .EV(hipSuccess)
      .EV(hipErrorInvalidValue)
      .EV(hipErrorOutOfMemory)
      .EV(hipErrorMemoryAllocation)
      .EV(hipErrorNotInitialized)
      .EV(hipErrorInitializationError)
      .EV(hipErrorDeinitialized)
      .EV(hipErrorProfilerDisabled)
      .EV(hipErrorProfilerNotInitialized)
      .EV(hipErrorProfilerAlreadyStarted)
      .EV(hipErrorProfilerAlreadyStopped)
      .EV(hipErrorInvalidConfiguration)
      .EV(hipErrorInvalidPitchValue)
      .EV(hipErrorInvalidSymbol)
      .EV(hipErrorInvalidDevicePointer)
      .EV(hipErrorInvalidMemcpyDirection)
      .EV(hipErrorInsufficientDriver)
      .EV(hipErrorMissingConfiguration)
      .EV(hipErrorPriorLaunchFailure)
      .EV(hipErrorInvalidDeviceFunction)
      .EV(hipErrorNoDevice)
      .EV(hipErrorInvalidDevice)
      .EV(hipErrorInvalidImage)
      .EV(hipErrorInvalidContext)
      .EV(hipErrorContextAlreadyCurrent)
      .EV(hipErrorMapFailed)
      .EV(hipErrorMapBufferObjectFailed)
      .EV(hipErrorUnmapFailed)
      .EV(hipErrorArrayIsMapped)
      .EV(hipErrorAlreadyMapped)
      .EV(hipErrorNoBinaryForGpu)
      .EV(hipErrorAlreadyAcquired)
      .EV(hipErrorNotMapped)
      .EV(hipErrorNotMappedAsArray)
      .EV(hipErrorNotMappedAsPointer)
      .EV(hipErrorECCNotCorrectable)
      .EV(hipErrorUnsupportedLimit)
      .EV(hipErrorContextAlreadyInUse)
      .EV(hipErrorPeerAccessUnsupported)
      .EV(hipErrorInvalidKernelFile)
      .EV(hipErrorInvalidGraphicsContext)
      .EV(hipErrorInvalidSource)
      .EV(hipErrorFileNotFound)
      .EV(hipErrorSharedObjectSymbolNotFound)
      .EV(hipErrorSharedObjectInitFailed)
      .EV(hipErrorOperatingSystem)
      .EV(hipErrorInvalidHandle)
      .EV(hipErrorInvalidResourceHandle)
      .EV(hipErrorIllegalState)
      .EV(hipErrorNotFound)
      .EV(hipErrorNotReady)
      .EV(hipErrorIllegalAddress)
      .EV(hipErrorLaunchOutOfResources)
      .EV(hipErrorLaunchTimeOut)
      .EV(hipErrorPeerAccessAlreadyEnabled)
      .EV(hipErrorPeerAccessNotEnabled)
      .EV(hipErrorSetOnActiveProcess)
      .EV(hipErrorContextIsDestroyed)
      .EV(hipErrorAssert)
      .EV(hipErrorHostMemoryAlreadyRegistered)
      .EV(hipErrorHostMemoryNotRegistered)
      .EV(hipErrorLaunchFailure)
      .EV(hipErrorCooperativeLaunchTooLarge)
      .EV(hipErrorNotSupported)
      .EV(hipErrorStreamCaptureUnsupported)
      .EV(hipErrorStreamCaptureInvalidated)
      .EV(hipErrorStreamCaptureMerge)
      .EV(hipErrorStreamCaptureUnmatched)
      .EV(hipErrorStreamCaptureUnjoined)
      .EV(hipErrorStreamCaptureIsolation)
      .EV(hipErrorStreamCaptureImplicit)
      .EV(hipErrorCapturedEvent)
      .EV(hipErrorStreamCaptureWrongThread)
      .EV(hipErrorGraphExecUpdateFailure)
      .EV(hipErrorUnknown)
      .EV(hipErrorRuntimeMemory)
      .EV(hipErrorRuntimeOther)
      .EV(hipErrorTbd)
      .export_values();
#undef EV
  }
} // namespace pyaotriton
