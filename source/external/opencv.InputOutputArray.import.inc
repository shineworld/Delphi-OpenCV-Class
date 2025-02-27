(*
  This file is part of Delphi-OpenCV-Class project.
  https://github.com/Laex/Delphi-OpenCV-Class

  It is subject to the license terms in the LICENSE file found in the top-level directory
  of this distribution and at https://www.apache.org/licenses/LICENSE-2.0.txt

  Copyright 2021, Laentir Valetov, laex@bk.ru

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*)

// ??0_InputOutputArray@cv@@QEAA@AEAV?$vector@VMat@cv@@V?$allocator@VMat@cv@@@std@@@std@@@Z        public: __cdecl cv::_InputOutputArray::_InputOutputArray(class std::vector<class cv::Mat,class std::allocator<class cv::Mat> > & __ptr64) __ptr64
// ??0_InputOutputArray@cv@@QEAA@AEAV?$vector@VUMat@cv@@V?$allocator@VUMat@cv@@@std@@@std@@@Z      public: __cdecl cv::_InputOutputArray::_InputOutputArray(class std::vector<class cv::UMat,class std::allocator<class cv::UMat> > & __ptr64) __ptr64
// ??0_InputOutputArray@cv@@QEAA@AEAVBuffer@ogl@1@@Z       public: __cdecl cv::_InputOutputArray::_InputOutputArray(class cv::ogl::Buffer & __ptr64) __ptr64
// ??0_InputOutputArray@cv@@QEAA@AEAVGpuMat@cuda@1@@Z      public: __cdecl cv::_InputOutputArray::_InputOutputArray(class cv::cuda::GpuMat & __ptr64) __ptr64
// ??0_InputOutputArray@cv@@QEAA@AEAVHostMem@cuda@1@@Z     public: __cdecl cv::_InputOutputArray::_InputOutputArray(class cv::cuda::HostMem & __ptr64) __ptr64
{
  1357
  ??0_InputOutputArray@debug_build_guard@cv@@QEAA@AEAVMat@2@@Z
  ??0_InputOutputArray@cv@@QEAA@AEAVMat@1@@Z
  public: __cdecl cv::_InputOutputArray::_InputOutputArray(class cv::Mat & __ptr64) __ptr64
}
procedure Constructor_InputOutputArray(const Obj: TInputOutputArray;const m: TMat); overload; external opencv_world_dll
{$IFDEF USE_DEBUG_DLLS}
  name '??0_InputOutputArray@debug_build_guard@cv@@QEAA@AEAVMat@2@@Z'
{$ELSE}
  name '??0_InputOutputArray@cv@@QEAA@AEAVMat@1@@Z'
{$ENDIF}
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};

// ??0_InputOutputArray@cv@@QEAA@AEAVUMat@1@@Z     public: __cdecl cv::_InputOutputArray::_InputOutputArray(class cv::UMat & __ptr64) __ptr64
// ??0_InputOutputArray@cv@@QEAA@AEBV?$vector@VGpuMat@cuda@cv@@V?$allocator@VGpuMat@cuda@cv@@@std@@@std@@@Z        public: __cdecl cv::_InputOutputArray::_InputOutputArray(class std::vector<class cv::cuda::GpuMat,class std::allocator<class cv::cuda::GpuMat> > const & __ptr64) __ptr64
// ??0_InputOutputArray@cv@@QEAA@AEBV?$vector@VMat@cv@@V?$allocator@VMat@cv@@@std@@@std@@@Z        public: __cdecl cv::_InputOutputArray::_InputOutputArray(class std::vector<class cv::Mat,class std::allocator<class cv::Mat> > const & __ptr64) __ptr64
// ??0_InputOutputArray@cv@@QEAA@AEBV?$vector@VUMat@cv@@V?$allocator@VUMat@cv@@@std@@@std@@@Z      public: __cdecl cv::_InputOutputArray::_InputOutputArray(class std::vector<class cv::UMat,class std::allocator<class cv::UMat> > const & __ptr64) __ptr64
// ??0_InputOutputArray@cv@@QEAA@AEBVBuffer@ogl@1@@Z       public: __cdecl cv::_InputOutputArray::_InputOutputArray(class cv::ogl::Buffer const & __ptr64) __ptr64
// ??0_InputOutputArray@cv@@QEAA@AEBVGpuMat@cuda@1@@Z      public: __cdecl cv::_InputOutputArray::_InputOutputArray(class cv::cuda::GpuMat const & __ptr64) __ptr64
// ??0_InputOutputArray@cv@@QEAA@AEBVHostMem@cuda@1@@Z     public: __cdecl cv::_InputOutputArray::_InputOutputArray(class cv::cuda::HostMem const & __ptr64) __ptr64
{
  1365
  ??0_InputOutputArray@debug_build_guard@cv@@QEAA@AEBVMat@2@@Z
  ??0_InputOutputArray@cv@@QEAA@AEBVMat@1@@Z
  public: __cdecl cv::_InputOutputArray::_InputOutputArray(class cv::Mat const & __ptr64) __ptr64
}
procedure Constructor_InputOutputArray_const(const Obj: TInputOutputArray;const m: TMat); overload; external opencv_world_dll
{$IFDEF USE_DEBUG_DLLS}
  name '??0_InputOutputArray@debug_build_guard@cv@@QEAA@AEBVMat@2@@Z'
{$ELSE}
  name '??0_InputOutputArray@cv@@QEAA@AEBVMat@1@@Z'
{$ENDIF}
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};

// ??0_InputOutputArray@cv@@QEAA@AEBVUMat@1@@Z     public: __cdecl cv::_InputOutputArray::_InputOutputArray(class cv::UMat const & __ptr64) __ptr64
// ??0_InputOutputArray@cv@@QEAA@HPEAX@Z   public: __cdecl cv::_InputOutputArray::_InputOutputArray(int,void * __ptr64) __ptr64

{
  index 1368
  ??0_InputOutputArray@debug_build_guard@cv@@QEAA@XZ
  ??0_InputOutputArray@cv@@QEAA@XZ
  public: __cdecl cv::_InputOutputArray::_InputOutputArray(void) __ptr64
}
procedure Constructor_InputOutputArray(const Obj: TInputOutputArray); overload; external opencv_world_dll
{$IFDEF USE_DEBUG_DLLS}
  name '??0_InputOutputArray@debug_build_guard@cv@@QEAA@XZ'
{$ELSE}
  name '??0_InputOutputArray@cv@@QEAA@XZ'
{$ENDIF}
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};
{
  index 1813
  ??1_InputOutputArray@debug_build_guard@cv@@QEAA@XZ
  ??1_InputOutputArray@cv@@QEAA@XZ
  public: __cdecl cv::_InputOutputArray::~_InputOutputArray(void) __ptr64
}
procedure Destructor_InputOutputArray(const Obj: TInputOutputArray); overload; external opencv_world_dll
{$IFDEF USE_DEBUG_DLLS}
  name '??1_InputOutputArray@debug_build_guard@cv@@QEAA@XZ'
{$ELSE}
  name '??1_InputOutputArray@cv@@QEAA@XZ'
{$ENDIF}
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};

// ??4_InputOutputArray@cv@@QEAAAEAV01@$$QEAV01@@Z public: class cv::_InputOutputArray & __ptr64 __cdecl cv::_InputOutputArray::operator=(class cv::_InputOutputArray && __ptr64) __ptr64
// ??4_InputOutputArray@cv@@QEAAAEAV01@AEBV01@@Z   public: class cv::_InputOutputArray & __ptr64 __cdecl cv::_InputOutputArray::operator=(class cv::_InputOutputArray const & __ptr64) __ptr64

{
  5740
  ?noArray@cv@@YAAEBV_InputOutputArray@debug_build_guard@1@XZ
  ?noArray@cv@@YAAEBV_InputOutputArray@1@XZ
  class cv::_InputOutputArray const & cv::noArray(void)
}
procedure noArray_InputOutputArray(const Obj: TInputOutputArray); overload; external opencv_world_dll
{$IFDEF USE_DEBUG_DLLS}
  name '?noArray@cv@@YAAEBV_InputOutputArray@debug_build_guard@1@XZ'
{$ELSE}
  name '?noArray@cv@@YAAEBV_InputOutputArray@1@XZ'
{$ENDIF}
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};
