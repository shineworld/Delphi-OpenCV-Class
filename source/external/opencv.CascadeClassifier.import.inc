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

// ??0CascadeClassifier@cv@@QEAA@AEBV01@@Z public: __cdecl cv::CascadeClassifier::CascadeClassifier(class cv::CascadeClassifier const & __ptr64) __ptr64
// ??0CascadeClassifier@cv@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z       public: __cdecl cv::CascadeClassifier::CascadeClassifier(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64

// index 209
// ??0CascadeClassifier@cv@@QEAA@XZ
// public: __cdecl cv::CascadeClassifier::CascadeClassifier(void) __ptr64
procedure Constructor_CascadeClassifier(const Obj: TCascadeClassifier); external opencv_world_dll
  name '??0CascadeClassifier@cv@@QEAA@XZ'
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};

// index 1480
// ??1CascadeClassifier@cv@@QEAA@XZ
// public: __cdecl cv::CascadeClassifier::~CascadeClassifier(void) __ptr64
procedure Destructor_CascadeClassifier(const Obj: TCascadeClassifier); external opencv_world_dll
  name '??1CascadeClassifier@cv@@QEAA@XZ'
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};

// ??4CascadeClassifier@cv@@QEAAAEAV01@AEBV01@@Z   public: class cv::CascadeClassifier & __ptr64 __cdecl cv::CascadeClassifier::operator=(class cv::CascadeClassifier const & __ptr64) __ptr64
// ?convert@CascadeClassifier@cv@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z public: static bool __cdecl cv::CascadeClassifier::convert(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __ptr64,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __ptr64)

// 4431
// ?detectMultiScale@CascadeClassifier@cv@@QEAAXAEBV_InputArray@2@AEAV?$vector@V?$Rect_@H@cv@@V?$allocator@V?$Rect_@H@cv@@@std@@@std@@AEAV?$vector@HV?$allocator@H@std@@@5@AEAV?$vector@NV?$allocator@N@std@@@5@NHHV?$Size_@H@2@4_N@Z
// public: void __cdecl cv::CascadeClassifier::detectMultiScale(class cv::_InputArray const & __ptr64,class std::vector<class cv::Rect_<int>,class std::allocator<class cv::Rect_<int> > > & __ptr64,class std::vector<int,class std::allocator<int> > & __ptr64,class std::vector<double,class std::allocator<double> > & __ptr64,double,int,int,class cv::Size_<int>,class cv::Size_<int>,bool) __ptr64
// 4432
// ?detectMultiScale@CascadeClassifier@cv@@QEAAXAEBV_InputArray@2@AEAV?$vector@V?$Rect_@H@cv@@V?$allocator@V?$Rect_@H@cv@@@std@@@std@@AEAV?$vector@HV?$allocator@H@std@@@5@NHHV?$Size_@H@2@3@Z
// public: void __cdecl cv::CascadeClassifier::detectMultiScale(class cv::_InputArray const & __ptr64,class std::vector<class cv::Rect_<int>,class std::allocator<class cv::Rect_<int> > > & __ptr64,class std::vector<int,class std::allocator<int> > & __ptr64,double,int,int,class cv::Size_<int>,class cv::Size_<int>) __ptr64
{
  4433
  ?detectMultiScale@CascadeClassifier@cv@@QEAAXAEBV_InputArray@debug_build_guard@2@AEAV?$vector@V?$Rect_@H@cv@@V?$allocator@V?$Rect_@H@cv@@@std@@@std@@NHHV?$Size_@H@2@2@Z
  ?detectMultiScale@CascadeClassifier@cv@@QEAAXAEBV_InputArray@2@AEAV?$vector@V?$Rect_@H@cv@@V?$allocator@V?$Rect_@H@cv@@@std@@@std@@NHHV?$Size_@H@2@2@Z
  public: void __cdecl cv::CascadeClassifier::detectMultiScale(class cv::_InputArray const & __ptr64,class std::vector<class cv::Rect_<int>,class std::allocator<class cv::Rect_<int> > > & __ptr64,double,int,int,class cv::Size_<int>,class cv::Size_<int>) __ptr64
  //
  CV_WRAP void detectMultiScale(
  InputArray image,
  CV_OUT std::vector<Rect>& objects,
  double scaleFactor = 1.1,
  int minNeighbors = 3,
  int flags = 0,
  Size minSize = Size(),
  Size maxSize = Size() );
}
procedure detectMultiScale_CascadeClassifier(const Obj: TCascadeClassifier; //
  const image: TInputArray; //
  objects: vector<TRect>; //
  scaleFactor: double;  //
  minNeighbors: int;    //
  flags: int;           //
  minSize: UInt64 { TSize }; //
  maxSize: UInt64 { TSize } ); //
  external opencv_world_dll
{$IFDEF USE_DEBUG_DLLS}
  name '?detectMultiScale@CascadeClassifier@cv@@QEAAXAEBV_InputArray@debug_build_guard@2@AEAV?$vector@V?$Rect_@H@cv@@V?$allocator@V?$Rect_@H@cv@@@std@@@std@@NHHV?$Size_@H@2@2@Z'
{$ELSE}
  name '?detectMultiScale@CascadeClassifier@cv@@QEAAXAEBV_InputArray@2@AEAV?$vector@V?$Rect_@H@cv@@V?$allocator@V?$Rect_@H@cv@@@std@@@std@@NHHV?$Size_@H@2@2@Z'
{$ENDIF}
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};
{
  4584
  ?empty@CascadeClassifier@cv@@QEBA_NXZ
  ?empty@CascadeClassifier@cv@@QEBA_NXZ
  bool cv::CascadeClassifier::empty(void)
}
function empty_CascadeClassifier(const Obj: TCascadeClassifier): Bool; external opencv_world_dll name '?empty@CascadeClassifier@cv@@QEBA_NXZ'
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};
// ?getFeatureType@CascadeClassifier@cv@@QEBAHXZ   public: int __cdecl cv::CascadeClassifier::getFeatureType(void)const __ptr64
// ?getMaskGenerator@CascadeClassifier@cv@@QEAA?AU?$Ptr@VMaskGenerator@BaseCascadeClassifier@cv@@@2@XZ     public: struct cv::Ptr<class cv::BaseCascadeClassifier::MaskGenerator> __cdecl cv::CascadeClassifier::getMaskGenerator(void) __ptr64
// ?getOldCascade@CascadeClassifier@cv@@QEAAPEAXXZ public: void * __ptr64 __cdecl cv::CascadeClassifier::getOldCascade(void) __ptr64
// ?getOriginalWindowSize@CascadeClassifier@cv@@QEBA?AV?$Size_@H@2@XZ      public: class cv::Size_<int> __cdecl cv::CascadeClassifier::getOriginalWindowSize(void)const __ptr64
// ?isOldFormatCascade@CascadeClassifier@cv@@QEBA_NXZ      public: bool __cdecl cv::CascadeClassifier::isOldFormatCascade(void)const __ptr64
{
  5473
  ?load@CascadeClassifier@cv@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
  ?load@CascadeClassifier@cv@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
  public: bool __cdecl cv::CascadeClassifier::load(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64
}
function load_CascadeClassifier(const Obj: TCascadeClassifier; const s: CppString): Bool;
  external opencv_world_dll name '?load@CascadeClassifier@cv@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z'
{$IFDEF DELAYED_LOAD_DLL} delayed{$ENDIF};
// ?read@CascadeClassifier@cv@@QEAA_NAEBVFileNode@2@@Z     public: bool __cdecl cv::CascadeClassifier::read(class cv::FileNode const & __ptr64) __ptr64
// ?setMaskGenerator@CascadeClassifier@cv@@QEAAXAEBU?$Ptr@VMaskGenerator@BaseCascadeClassifier@cv@@@2@@Z   public: void __cdecl cv::CascadeClassifier::setMaskGenerator(struct cv::Ptr<class cv::BaseCascadeClassifier::MaskGenerator> const & __ptr64) __ptr64
