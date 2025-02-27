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

// ??0_InputArray@cv@@QEAA@AEBN@Z
// public: __cdecl cv::_InputArray::_InputArray(double const & __ptr64) __ptr64

// ??0_InputArray@cv@@QEAA@AEBV?$vector@VGpuMat@cuda@cv@@V?$allocator@VGpuMat@cuda@cv@@@std@@@std@@@Z
// public: __cdecl cv::_InputArray::_InputArray(class std::vector<class cv::cuda::GpuMat,class std::allocator<class cv::cuda::GpuMat> > const & __ptr64) __ptr64

// ??0_InputArray@cv@@QEAA@AEBV?$vector@VMat@cv@@V?$allocator@VMat@cv@@@std@@@std@@@Z
// public: __cdecl cv::_InputArray::_InputArray(class std::vector<class cv::Mat,class std::allocator<class cv::Mat> > const & __ptr64) __ptr64

// ??0_InputArray@cv@@QEAA@AEBV?$vector@VUMat@cv@@V?$allocator@VUMat@cv@@@std@@@std@@@Z	public: __cdecl cv::_InputArray::_InputArray(class std::vector<class cv::UMat,class std::allocator<class cv::UMat> > const & __ptr64) __ptr64
// ??0_InputArray@cv@@QEAA@AEBV?$vector@_NV?$allocator@_N@std@@@std@@@Z	public: __cdecl cv::_InputArray::_InputArray(class std::vector<bool,class std::allocator<bool> > const & __ptr64) __ptr64
// ??0_InputArray@cv@@QEAA@AEBVBuffer@ogl@1@@Z	public: __cdecl cv::_InputArray::_InputArray(class cv::ogl::Buffer const & __ptr64) __ptr64
// ??0_InputArray@cv@@QEAA@AEBVGpuMat@cuda@1@@Z	public: __cdecl cv::_InputArray::_InputArray(class cv::cuda::GpuMat const & __ptr64) __ptr64
// ??0_InputArray@cv@@QEAA@AEBVHostMem@cuda@1@@Z	public: __cdecl cv::_InputArray::_InputArray(class cv::cuda::HostMem const & __ptr64) __ptr64
{
  1347
  ??0_InputArray@debug_build_guard@cv@@QEAA@AEBVMat@2@@Z
  ??0_InputArray@cv@@QEAA@AEBVMat@1@@Z
  public: __cdecl cv::_InputArray::_InputArray(class cv::Mat const & __ptr64) __ptr64
}
procedure Constructor_InputArray(const Obj: TInputArray;const m: TMat); overload; external opencv_world_dll
{$IFDEF USE_DEBUG_DLLS}
  name '??0_InputArray@debug_build_guard@cv@@QEAA@AEBVMat@2@@Z'
{$ELSE}
  name '??0_InputArray@cv@@QEAA@AEBVMat@1@@Z'
{$ENDIF}
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};
{
  1348
  ??0_InputArray@debug_build_guard@cv@@QEAA@AEBVMatExpr@2@@Z
  ??0_InputArray@cv@@QEAA@AEBVMatExpr@1@@Z
  public: __cdecl cv::_InputArray::_InputArray(class cv::MatExpr const & __ptr64) __ptr64
}
procedure Constructor_InputArray(const Obj: TInputArray;const m: TMatExpr); overload; external opencv_world_dll
{$IFDEF USE_DEBUG_DLLS}
  name '??0_InputArray@debug_build_guard@cv@@QEAA@AEBVMatExpr@2@@Z'
{$ELSE}
  name '??0_InputArray@cv@@QEAA@AEBVMatExpr@1@@Z'
{$ENDIF}
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};

// ??0_InputArray@cv@@QEAA@AEBVUMat@1@@Z	public: __cdecl cv::_InputArray::_InputArray(class cv::UMat const & __ptr64) __ptr64
// ??0_InputArray@cv@@QEAA@HPEAX@Z	public: __cdecl cv::_InputArray::_InputArray(int,void * __ptr64) __ptr64

{
  1351
  ??0_InputArray@debug_build_guard@cv@@QEAA@XZ
  ??0_InputArray@cv@@QEAA@XZ
  cv::_InputArray::_InputArray(void)
}
procedure Constructor_InputArray(const Obj: TInputArray); overload; external opencv_world_dll
{$IFDEF USE_DEBUG_DLLS}
  name '??0_InputArray@debug_build_guard@cv@@QEAA@XZ'
{$ELSE}
  name '??0_InputArray@cv@@QEAA@XZ'
{$ENDIF}
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};
{
  1812
  ??1_InputArray@debug_build_guard@cv@@QEAA@XZ
  ??1_InputArray@cv@@QEAA@XZ
  cv::_InputArray::~_InputArray(void)
}
procedure Destructor_InputArray(const Obj: TInputArray); overload; external opencv_world_dll
{$IFDEF USE_DEBUG_DLLS}
  name '??1_InputArray@debug_build_guard@cv@@QEAA@XZ'
{$ELSE}
  name '??1_InputArray@cv@@QEAA@XZ'
{$ENDIF}
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};
// ??4_InputArray@cv@@QEAAAEAV01@AEBV01@@Z	public: class cv::_InputArray & __ptr64 __cdecl cv::_InputArray::operator=(class cv::_InputArray const & __ptr64) __ptr64
// ?channels@_InputArray@cv@@QEBAHH@Z	public: int __cdecl cv::_InputArray::channels(int)const __ptr64
// ?cols@_InputArray@cv@@QEBAHH@Z	public: int __cdecl cv::_InputArray::cols(int)const __ptr64
// ?copyTo@_InputArray@cv@@QEBAXAEBV_OutputArray@2@@Z	public: void __cdecl cv::_InputArray::copyTo(class cv::_OutputArray const & __ptr64)const __ptr64
// ?copyTo@_InputArray@cv@@QEBAXAEBV_OutputArray@2@AEBV12@@Z	public: void __cdecl cv::_InputArray::copyTo(class cv::_OutputArray const & __ptr64,class cv::_InputArray const & __ptr64)const __ptr64
// ?depth@_InputArray@cv@@QEBAHH@Z	public: int __cdecl cv::_InputArray::depth(int)const __ptr64
// ?dims@_InputArray@cv@@QEBAHH@Z	public: int __cdecl cv::_InputArray::dims(int)const __ptr64
// ?empty@_InputArray@cv@@QEBA_NXZ	public: bool __cdecl cv::_InputArray::empty(void)const __ptr64
// ?getFlags@_InputArray@cv@@QEBAHXZ	public: int __cdecl cv::_InputArray::getFlags(void)const __ptr64
// ?getGpuMat@_InputArray@cv@@QEBA?AVGpuMat@cuda@2@XZ	public: class cv::cuda::GpuMat __cdecl cv::_InputArray::getGpuMat(void)const __ptr64
// ?getGpuMatVector@_InputArray@cv@@QEBAXAEAV?$vector@VGpuMat@cuda@cv@@V?$allocator@VGpuMat@cuda@cv@@@std@@@std@@@Z	public: void __cdecl cv::_InputArray::getGpuMatVector(class std::vector<class cv::cuda::GpuMat,class std::allocator<class cv::cuda::GpuMat> > & __ptr64)const __ptr64
{
  5011
  ?getMat@_InputArray@debug_build_guard@cv@@QEBA?AVMat@3@H@Z
  ?getMat@_InputArray@cv@@QEBA?AVMat@2@H@Z
  public: class cv::Mat __cdecl cv::_InputArray::getMat(int)const __ptr64
}
procedure getMat_InputArray(const Obj: TInputArray; Var m: TMat; idx: int); external opencv_world_dll
{$IFDEF USE_DEBUG_DLLS}
  name '?getMat@_InputArray@debug_build_guard@cv@@QEBA?AVMat@3@H@Z'
{$ELSE}
  name '?getMat@_InputArray@cv@@QEBA?AVMat@2@H@Z'
{$ENDIF}
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};
// ?getMatVector@_InputArray@cv@@QEBAXAEAV?$vector@VMat@cv@@V?$allocator@VMat@cv@@@std@@@std@@@Z	public: void __cdecl cv::_InputArray::getMatVector(class std::vector<class cv::Mat,class std::allocator<class cv::Mat> > & __ptr64)const __ptr64
// ?getMat_@_InputArray@cv@@QEBA?AVMat@2@H@Z	public: class cv::Mat __cdecl cv::_InputArray::getMat_(int)const __ptr64
// ?getOGlBuffer@_InputArray@cv@@QEBA?AVBuffer@ogl@2@XZ	public: class cv::ogl::Buffer __cdecl cv::_InputArray::getOGlBuffer(void)const __ptr64
{
  5051
  ?getObj@_InputArray@debug_build_guard@cv@@QEBAPEAXXZ
  ?getObj@_InputArray@cv@@QEBAPEAXXZ
  void * cv::_InputArray::getObj(void)
}
function getObj_InputArray(const Obj: TInputArray): Pointer; external opencv_world_dll
{$IFDEF USE_DEBUG_DLLS}
  name '?getObj@_InputArray@debug_build_guard@cv@@QEBAPEAXXZ'
{$ELSE}
  name '?getObj@_InputArray@cv@@QEBAPEAXXZ'
{$ENDIF}
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};

// ?getSz@_InputArray@cv@@QEBA?AV?$Size_@H@2@XZ	public: class cv::Size_<int> __cdecl cv::_InputArray::getSz(void)const __ptr64
// ?getUMat@_InputArray@cv@@QEBA?AVUMat@2@H@Z	public: class cv::UMat __cdecl cv::_InputArray::getUMat(int)const __ptr64
// ?getUMatVector@_InputArray@cv@@QEBAXAEAV?$vector@VUMat@cv@@V?$allocator@VUMat@cv@@@std@@@std@@@Z	public: void __cdecl cv::_InputArray::getUMatVector(class std::vector<class cv::UMat,class std::allocator<class cv::UMat> > & __ptr64)const __ptr64
// ?init@_InputArray@cv@@IEAAXHPEBX@Z	protected: void __cdecl cv::_InputArray::init(int,void const * __ptr64) __ptr64
// ?init@_InputArray@cv@@IEAAXHPEBXV?$Size_@H@2@@Z	protected: void __cdecl cv::_InputArray::init(int,void const * __ptr64,class cv::Size_<int>) __ptr64
// ?isContinuous@_InputArray@cv@@QEBA_NH@Z	public: bool __cdecl cv::_InputArray::isContinuous(int)const __ptr64
// ?isGpuMat@_InputArray@cv@@QEBA_NXZ	public: bool __cdecl cv::_InputArray::isGpuMat(void)const __ptr64
// ?isGpuMatVector@_InputArray@cv@@QEBA_NXZ	public: bool __cdecl cv::_InputArray::isGpuMatVector(void)const __ptr64
{
  5383
  ?isMat@_InputArray@debug_build_guard@cv@@QEBA_NXZ
  ?isMat@_InputArray@cv@@QEBA_NXZ
  bool cv::_InputArray::isMat(void)
}
function isMat_InputArray(const Obj: TInputArray): BOOL; external opencv_world_dll
{$IFDEF USE_DEBUG_DLLS}
  name '?isMat@_InputArray@debug_build_guard@cv@@QEBA_NXZ'
{$ELSE}
  name '?isMat@_InputArray@cv@@QEBA_NXZ'
{$ENDIF}
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};

// ?isMatVector@_InputArray@cv@@QEBA_NXZ	public: bool __cdecl cv::_InputArray::isMatVector(void)const __ptr64
// ?isMatx@_InputArray@cv@@QEBA_NXZ	public: bool __cdecl cv::_InputArray::isMatx(void)const __ptr64
// ?isSubmatrix@_InputArray@cv@@QEBA_NH@Z	public: bool __cdecl cv::_InputArray::isSubmatrix(int)const __ptr64
// ?isUMat@_InputArray@cv@@QEBA_NXZ	public: bool __cdecl cv::_InputArray::isUMat(void)const __ptr64
// ?isUMatVector@_InputArray@cv@@QEBA_NXZ	public: bool __cdecl cv::_InputArray::isUMatVector(void)const __ptr64
// ?isVector@_InputArray@cv@@QEBA_NXZ	public: bool __cdecl cv::_InputArray::isVector(void)const __ptr64
// ?kind@_InputArray@cv@@QEBA?AW4KindFlag@12@XZ	public: enum cv::_InputArray::KindFlag __cdecl cv::_InputArray::kind(void)const __ptr64
// ?offset@_InputArray@cv@@QEBA_KH@Z	public: unsigned __int64 __cdecl cv::_InputArray::offset(int)const __ptr64
// ?rows@_InputArray@cv@@QEBAHH@Z	public: int __cdecl cv::_InputArray::rows(int)const __ptr64
// ?sameSize@_InputArray@cv@@QEBA_NAEBV12@@Z	public: bool __cdecl cv::_InputArray::sameSize(class cv::_InputArray const & __ptr64)const __ptr64
// ?size@_InputArray@cv@@QEBA?AV?$Size_@H@2@H@Z	public: class cv::Size_<int> __cdecl cv::_InputArray::size(int)const __ptr64
// ?sizend@_InputArray@cv@@QEBAHPEAHH@Z	public: int __cdecl cv::_InputArray::sizend(int * __ptr64,int)const __ptr64
// ?step@_InputArray@cv@@QEBA_KH@Z	public: unsigned __int64 __cdecl cv::_InputArray::step(int)const __ptr64
// ?total@_InputArray@cv@@QEBA_KH@Z	public: unsigned __int64 __cdecl cv::_InputArray::total(int)const __ptr64
// ?type@_InputArray@cv@@QEBAHH@Z	public: int __cdecl cv::_InputArray::type(int)const __ptr64
