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

{$ifdef OPENCV_BACKGROUND_SEGM_HPP}

{ TBackgroundSubtractorMOG2 }

procedure TBackgroundSubtractorMOG2.apply(const image: TInputArray; const fgmask: TOutputArray; learningRate: double);
Type
  Tapply = procedure(const Obj: TBackgroundSubtractorMOG2; const image: TInputArray; const fgmask: TOutputArray; learningRate: double);
begin
  Tapply(vftable(Self.vft, $38 div SizeOf(Pointer)))(Self, image, fgmask, learningRate);
end;

class operator TBackgroundSubtractorMOG2.Finalize(var Dest: TBackgroundSubtractorMOG2);
begin
  destructor_BackgroundSubtractorMOG2(Dest);
end;

procedure TBackgroundSubtractorMOG2.setVarThreshold(varThreshold: double);
Type
  TsetVarThreshold = procedure(const Obj: TBackgroundSubtractorMOG2; varThreshold: double);
begin
  TsetVarThreshold(vftable(Self.vft, $80 div SizeOf(Pointer)))(Self, varThreshold);
end;

{ TBackgroundSubtractorHelper }

procedure TBackgroundSubtractorHelper.apply(const image:TInputArray;const fgmask:TOutputArray; learningRate:double);
Type
  Tapply = procedure(const Obj: TBackgroundSubtractor; const image: TInputArray; const fgmask: TOutputArray; learningRate: double);
begin
  Tapply(vftable(Self.vft, $38 div SizeOf(Pointer)))(Self, image, fgmask, learningRate);
end;

procedure TBackgroundSubtractorHelper.getBackgroundImage(const backgroundImage:TOutputArray);
Type
  TgetBackgroundImage = procedure(const Obj: TBackgroundSubtractor; const backgroundImage:TOutputArray);
begin
  TgetBackgroundImage(vftable(Self.vft, $40 div SizeOf(Pointer)))(Self, backgroundImage);
end;

{$endif}