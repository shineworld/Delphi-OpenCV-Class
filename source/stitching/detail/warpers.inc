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

{$ifndef OPENCV_STITCHING_WARPERS_HPP}
{$define OPENCV_STITCHING_WARPERS_HPP}

{$i 'core.inc'}
{$i 'core/cuda.inc'}
{$i 'imgproc.inc'}
{$i 'opencv_modules.inc'}

//namespace cv {
//namespace detail {

//! @addtogroup stitching_warp
//! @{

(** @brief Rotation-only model image warper interface.
 *)

//class CV_EXPORTS RotationWarper
//{
//public:
//    virtual ~RotationWarper() {}
//
//    (** @brief Projects the image point.
//
//    @param pt Source point
//    @param K Camera intrinsic parameters
//    @param R Camera rotation matrix
//    @return Projected point
//     *)
//    virtual Point2f warpPoint(const Point2f &pt, InputArray K, InputArray R) = 0;
//
//    (** @brief Projects the image point backward.
//
//    @param pt Projected point
//    @param K Camera intrinsic parameters
//    @param R Camera rotation matrix
//    @return Backward-projected point
//    *)
//#if CV_VERSION_MAJOR == 4
//    virtual Point2f warpPointBackward(const Point2f& pt, InputArray K, InputArray R)
//    {
//        CV_UNUSED(pt); CV_UNUSED(K); CV_UNUSED(R);
//        CV_Error(Error::StsNotImplemented, "");
//    }
//#else
//    virtual Point2f warpPointBackward(const Point2f& pt, InputArray K, InputArray R) = 0;
//#endif
//
//    (** @brief Builds the projection maps according to the given camera data.
//
//    @param src_size Source image size
//    @param K Camera intrinsic parameters
//    @param R Camera rotation matrix
//    @param xmap Projection map for the x axis
//    @param ymap Projection map for the y axis
//    @return Projected image minimum bounding box
//     *)
//    virtual Rect buildMaps(Size src_size, InputArray K, InputArray R, OutputArray xmap, OutputArray ymap) = 0;
//
//    (** @brief Projects the image.
//
//    @param src Source image
//    @param K Camera intrinsic parameters
//    @param R Camera rotation matrix
//    @param interp_mode Interpolation mode
//    @param border_mode Border extrapolation mode
//    @param dst Projected image
//    @return Project image top-left corner
//     *)
//    virtual Point warp(InputArray src, InputArray K, InputArray R, int interp_mode, int border_mode,
//                       CV_OUT OutputArray dst) = 0;
//
//    (** @brief Projects the image backward.
//
//    @param src Projected image
//    @param K Camera intrinsic parameters
//    @param R Camera rotation matrix
//    @param interp_mode Interpolation mode
//    @param border_mode Border extrapolation mode
//    @param dst_size Backward-projected image size
//    @param dst Backward-projected image
//     *)
//    virtual void warpBackward(InputArray src, InputArray K, InputArray R, int interp_mode, int border_mode,
//                              Size dst_size, CV_OUT OutputArray dst) = 0;
//
//    (**
//    @param src_size Source image bounding box
//    @param K Camera intrinsic parameters
//    @param R Camera rotation matrix
//    @return Projected image minimum bounding box
//     *)
//    virtual Rect warpRoi(Size src_size, InputArray K, InputArray R) = 0;
//
//    virtual float getScale() const { return 1.f; }
//    virtual void setScale(float) {}
//};

(** @brief Base class for warping logic implementation.
 *)
//struct CV_EXPORTS_W_SIMPLE ProjectorBase
//{
//    void setCameraParams(InputArray K = Mat::eye(3, 3, CV_32F),
//                         InputArray R = Mat::eye(3, 3, CV_32F),
//                         InputArray T = Mat::zeros(3, 1, CV_32F));
//
//    float scale;
//    float k[9];
//    float rinv[9];
//    float r_kinv[9];
//    float k_rinv[9];
//    float t[3];
//};

(** @brief Base class for rotation-based warper using a detail::ProjectorBase_ derived class.
 *)
//template <class P>
//class CV_EXPORTS_TEMPLATE RotationWarperBase : public RotationWarper
//{
//public:
//    Point2f warpPoint(const Point2f &pt, InputArray K, InputArray R) CV_OVERRIDE;
//
//    Point2f warpPointBackward(const Point2f &pt, InputArray K, InputArray R) CV_OVERRIDE;
//
//    Rect buildMaps(Size src_size, InputArray K, InputArray R, OutputArray xmap, OutputArray ymap) CV_OVERRIDE;
//
//    Point warp(InputArray src, InputArray K, InputArray R, int interp_mode, int border_mode,
//               OutputArray dst) CV_OVERRIDE;
//
//    void warpBackward(InputArray src, InputArray K, InputArray R, int interp_mode, int border_mode,
//                      Size dst_size, OutputArray dst) CV_OVERRIDE;
//
//    Rect warpRoi(Size src_size, InputArray K, InputArray R) CV_OVERRIDE;
//
//    float getScale() const  CV_OVERRIDE{ return projector_.scale; }
//    void setScale(float val) CV_OVERRIDE { projector_.scale = val; }
//
//protected:
//
//    // Detects ROI of the destination image. It's correct for any projection.
//    virtual void detectResultRoi(Size src_size, Point &dst_tl, Point &dst_br);
//
//    // Detects ROI of the destination image by walking over image border.
//    // Correctness for any projection isn't guaranteed.
//    void detectResultRoiByBorder(Size src_size, Point &dst_tl, Point &dst_br);
//
//    P projector_;
//};


//struct CV_EXPORTS PlaneProjector : ProjectorBase
//{
//    void mapForward(float x, float y, float &u, float &v);
//    void mapBackward(float u, float v, float &x, float &y);
//};

(** @brief Warper that maps an image onto the z = 1 plane.
 *)
//class CV_EXPORTS PlaneWarper : public RotationWarperBase<PlaneProjector>
//{
//public:
//    (** @brief Construct an instance of the plane warper class.
//
//    @param scale Projected image scale multiplier
//     *)
//    PlaneWarper(float scale = 1.f) { projector_.scale = scale; }
//
//    Point2f warpPoint(const Point2f &pt, InputArray K, InputArray R) CV_OVERRIDE;
//    Point2f warpPoint(const Point2f &pt, InputArray K, InputArray R, InputArray T);
//
//    Point2f warpPointBackward(const Point2f& pt, InputArray K, InputArray R) CV_OVERRIDE;
//    Point2f warpPointBackward(const Point2f& pt, InputArray K, InputArray R, InputArray T);
//
//    virtual Rect buildMaps(Size src_size, InputArray K, InputArray R, InputArray T, CV_OUT OutputArray xmap, CV_OUT OutputArray ymap);
//    Rect buildMaps(Size src_size, InputArray K, InputArray R, CV_OUT OutputArray xmap, CV_OUT OutputArray ymap) CV_OVERRIDE;
//
//    Point warp(InputArray src, InputArray K, InputArray R,
//               int interp_mode, int border_mode, CV_OUT OutputArray dst) CV_OVERRIDE;
//    virtual Point warp(InputArray src, InputArray K, InputArray R, InputArray T, int interp_mode, int border_mode,
//        CV_OUT OutputArray dst);
//
//    Rect warpRoi(Size src_size, InputArray K, InputArray R) CV_OVERRIDE;
//    Rect warpRoi(Size src_size, InputArray K, InputArray R, InputArray T);
//
//protected:
//    void detectResultRoi(Size src_size, Point &dst_tl, Point &dst_br) CV_OVERRIDE;
//};


(** @brief Affine warper that uses rotations and translations

 Uses affine transformation in homogeneous coordinates to represent both rotation and
 translation in camera rotation matrix.
 *)
//class CV_EXPORTS AffineWarper : public PlaneWarper
//{
//public:
//    (** @brief Construct an instance of the affine warper class.
//
//    @param scale Projected image scale multiplier
//     *)
//    AffineWarper(float scale = 1.f) : PlaneWarper(scale) {}
//
//    (** @brief Projects the image point.
//
//    @param pt Source point
//    @param K Camera intrinsic parameters
//    @param H Camera extrinsic parameters
//    @return Projected point
//     *)
//    Point2f warpPoint(const Point2f &pt, InputArray K, InputArray H) CV_OVERRIDE;
//
//    (** @brief Projects the image point backward.
//
//    @param pt Projected point
//    @param K Camera intrinsic parameters
//    @param H Camera extrinsic parameters
//    @return Backward-projected point
//    *)
//    Point2f warpPointBackward(const Point2f &pt, InputArray K, InputArray H) CV_OVERRIDE;
//
//    (** @brief Builds the projection maps according to the given camera data.
//
//    @param src_size Source image size
//    @param K Camera intrinsic parameters
//    @param H Camera extrinsic parameters
//    @param xmap Projection map for the x axis
//    @param ymap Projection map for the y axis
//    @return Projected image minimum bounding box
//     *)
//    Rect buildMaps(Size src_size, InputArray K, InputArray H, OutputArray xmap, OutputArray ymap) CV_OVERRIDE;
//
//    (** @brief Projects the image.
//
//    @param src Source image
//    @param K Camera intrinsic parameters
//    @param H Camera extrinsic parameters
//    @param interp_mode Interpolation mode
//    @param border_mode Border extrapolation mode
//    @param dst Projected image
//    @return Project image top-left corner
//     *)
//    Point warp(InputArray src, InputArray K, InputArray H,
//               int interp_mode, int border_mode, OutputArray dst) CV_OVERRIDE;
//
//    (**
//    @param src_size Source image bounding box
//    @param K Camera intrinsic parameters
//    @param H Camera extrinsic parameters
//    @return Projected image minimum bounding box
//     *)
//    Rect warpRoi(Size src_size, InputArray K, InputArray H) CV_OVERRIDE;
//
//protected:
//    (** @brief Extracts rotation and translation matrices from matrix H representing
//        affine transformation in homogeneous coordinates
//     *)
//    void getRTfromHomogeneous(InputArray H, Mat &R, Mat &T);
//};
//
//
//struct CV_EXPORTS_W_SIMPLE SphericalProjector : ProjectorBase
//{
//    CV_WRAP void mapForward(float x, float y, float &u, float &v);
//    CV_WRAP void mapBackward(float u, float v, float &x, float &y);
//};


(** @brief Warper that maps an image onto the unit sphere located at the origin.

 Projects image onto unit sphere with origin at (0, 0, 0) and radius scale, measured in pixels.
 A 360 panorama would therefore have a resulting width of 2 * scale * PI pixels.
 Poles are located at (0, -1, 0) and (0, 1, 0) points.
*)
//class CV_EXPORTS SphericalWarper : public RotationWarperBase<SphericalProjector>
//{
//public:
//    (** @brief Construct an instance of the spherical warper class.
//
//    @param scale Radius of the projected sphere, in pixels. An image spanning the
//                 whole sphere will have a width of 2 * scale * PI pixels.
//     *)
//    SphericalWarper(float scale) { projector_.scale = scale; }
//
//    Rect buildMaps(Size src_size, InputArray K, InputArray R, OutputArray xmap, OutputArray ymap) CV_OVERRIDE;
//    Point warp(InputArray src, InputArray K, InputArray R, int interp_mode, int border_mode, OutputArray dst) CV_OVERRIDE;
//protected:
//    void detectResultRoi(Size src_size, Point &dst_tl, Point &dst_br) CV_OVERRIDE;
//};


//struct CV_EXPORTS CylindricalProjector : ProjectorBase
//{
//    void mapForward(float x, float y, float &u, float &v);
//    void mapBackward(float u, float v, float &x, float &y);
//};


(** @brief Warper that maps an image onto the x\*x + z\*z = 1 cylinder.
 *)
//class CV_EXPORTS CylindricalWarper : public RotationWarperBase<CylindricalProjector>
//{
//public:
//    (** @brief Construct an instance of the cylindrical warper class.
//
//    @param scale Projected image scale multiplier
//     *)
//    CylindricalWarper(float scale) { projector_.scale = scale; }
//
//    Rect buildMaps(Size src_size, InputArray K, InputArray R, OutputArray xmap, OutputArray ymap) CV_OVERRIDE;
//    Point warp(InputArray src, InputArray K, InputArray R, int interp_mode, int border_mode, OutputArray dst) CV_OVERRIDE;
//protected:
//    void detectResultRoi(Size src_size, Point &dst_tl, Point &dst_br) CV_OVERRIDE
//    {
//        RotationWarperBase<CylindricalProjector>::detectResultRoiByBorder(src_size, dst_tl, dst_br);
//    }
//};


//struct CV_EXPORTS FisheyeProjector : ProjectorBase
//{
//    void mapForward(float x, float y, float &u, float &v);
//    void mapBackward(float u, float v, float &x, float &y);
//};


//class CV_EXPORTS FisheyeWarper : public RotationWarperBase<FisheyeProjector>
//{
//public:
//    FisheyeWarper(float scale) { projector_.scale = scale; }
//};


//struct CV_EXPORTS StereographicProjector : ProjectorBase
//{
//    void mapForward(float x, float y, float &u, float &v);
//    void mapBackward(float u, float v, float &x, float &y);
//};


//class CV_EXPORTS StereographicWarper : public RotationWarperBase<StereographicProjector>
//{
//public:
//    StereographicWarper(float scale) { projector_.scale = scale; }
//};


//struct CV_EXPORTS CompressedRectilinearProjector : ProjectorBase
//{
//    float a, b;
//
//    void mapForward(float x, float y, float &u, float &v);
//    void mapBackward(float u, float v, float &x, float &y);
//};


//class CV_EXPORTS CompressedRectilinearWarper : public RotationWarperBase<CompressedRectilinearProjector>
//{
//public:
//    CompressedRectilinearWarper(float scale, float A = 1, float B = 1)
//    {
//        projector_.a = A;
//        projector_.b = B;
//        projector_.scale = scale;
//    }
//};


//struct CV_EXPORTS CompressedRectilinearPortraitProjector : ProjectorBase
//{
//    float a, b;
//
//    void mapForward(float x, float y, float &u, float &v);
//    void mapBackward(float u, float v, float &x, float &y);
//};


//class CV_EXPORTS CompressedRectilinearPortraitWarper : public RotationWarperBase<CompressedRectilinearPortraitProjector>
//{
//public:
//   CompressedRectilinearPortraitWarper(float scale, float A = 1, float B = 1)
//   {
//       projector_.a = A;
//       projector_.b = B;
//       projector_.scale = scale;
//   }
//};


//struct CV_EXPORTS PaniniProjector : ProjectorBase
//{
//    float a, b;
//
//    void mapForward(float x, float y, float &u, float &v);
//    void mapBackward(float u, float v, float &x, float &y);
//};


//class CV_EXPORTS PaniniWarper : public RotationWarperBase<PaniniProjector>
//{
//public:
//   PaniniWarper(float scale, float A = 1, float B = 1)
//   {
//       projector_.a = A;
//       projector_.b = B;
//       projector_.scale = scale;
//   }
//};


//struct CV_EXPORTS PaniniPortraitProjector : ProjectorBase
//{
//    float a, b;
//
//    void mapForward(float x, float y, float &u, float &v);
//    void mapBackward(float u, float v, float &x, float &y);
//};


//class CV_EXPORTS PaniniPortraitWarper : public RotationWarperBase<PaniniPortraitProjector>
//{
//public:
//   PaniniPortraitWarper(float scale, float A = 1, float B = 1)
//   {
//       projector_.a = A;
//       projector_.b = B;
//       projector_.scale = scale;
//   }
//
//};


//struct CV_EXPORTS MercatorProjector : ProjectorBase
//{
//    void mapForward(float x, float y, float &u, float &v);
//    void mapBackward(float u, float v, float &x, float &y);
//};


//class CV_EXPORTS MercatorWarper : public RotationWarperBase<MercatorProjector>
//{
//public:
//    MercatorWarper(float scale) { projector_.scale = scale; }
//};


//struct CV_EXPORTS TransverseMercatorProjector : ProjectorBase
//{
//    void mapForward(float x, float y, float &u, float &v);
//    void mapBackward(float u, float v, float &x, float &y);
//};


//class CV_EXPORTS TransverseMercatorWarper : public RotationWarperBase<TransverseMercatorProjector>
//{
//public:
//    TransverseMercatorWarper(float scale) { projector_.scale = scale; }
//};


//class CV_EXPORTS PlaneWarperGpu : public PlaneWarper
//{
//public:
//    PlaneWarperGpu(float scale = 1.f) : PlaneWarper(scale) {}
//
//    Rect buildMaps(Size src_size, InputArray K, InputArray R, OutputArray xmap, OutputArray ymap) CV_OVERRIDE
//    {
//        Rect result = buildMaps(src_size, K, R, d_xmap_, d_ymap_);
//        d_xmap_.download(xmap);
//        d_ymap_.download(ymap);
//        return result;
//    }
//
//    Rect buildMaps(Size src_size, InputArray K, InputArray R, InputArray T, OutputArray xmap, OutputArray ymap) CV_OVERRIDE
//    {
//        Rect result = buildMaps(src_size, K, R, T, d_xmap_, d_ymap_);
//        d_xmap_.download(xmap);
//        d_ymap_.download(ymap);
//        return result;
//    }
//
//    Point warp(InputArray src, InputArray K, InputArray R, int interp_mode, int border_mode,
//               OutputArray dst) CV_OVERRIDE
//    {
//        d_src_.upload(src);
//        Point result = warp(d_src_, K, R, interp_mode, border_mode, d_dst_);
//        d_dst_.download(dst);
//        return result;
//    }
//
//    Point warp(InputArray src, InputArray K, InputArray R, InputArray T, int interp_mode, int border_mode,
//               OutputArray dst) CV_OVERRIDE
//    {
//        d_src_.upload(src);
//        Point result = warp(d_src_, K, R, T, interp_mode, border_mode, d_dst_);
//        d_dst_.download(dst);
//        return result;
//    }
//
//    Rect buildMaps(Size src_size, InputArray K, InputArray R, cuda::GpuMat & xmap, cuda::GpuMat & ymap);
//
//    Rect buildMaps(Size src_size, InputArray K, InputArray R, InputArray T, cuda::GpuMat & xmap, cuda::GpuMat & ymap);
//
//    Point warp(const cuda::GpuMat & src, InputArray K, InputArray R, int interp_mode, int border_mode,
//               cuda::GpuMat & dst);
//
//    Point warp(const cuda::GpuMat & src, InputArray K, InputArray R, InputArray T, int interp_mode, int border_mode,
//               cuda::GpuMat & dst);
//
//private:
//    cuda::GpuMat d_xmap_, d_ymap_, d_src_, d_dst_;
//};


//class CV_EXPORTS SphericalWarperGpu : public SphericalWarper
//{
//public:
//    SphericalWarperGpu(float scale) : SphericalWarper(scale) {}
//
//    Rect buildMaps(Size src_size, InputArray K, InputArray R, OutputArray xmap, OutputArray ymap) CV_OVERRIDE
//    {
//        Rect result = buildMaps(src_size, K, R, d_xmap_, d_ymap_);
//        d_xmap_.download(xmap);
//        d_ymap_.download(ymap);
//        return result;
//    }
//
//    Point warp(InputArray src, InputArray K, InputArray R, int interp_mode, int border_mode,
//               OutputArray dst) CV_OVERRIDE
//    {
//        d_src_.upload(src);
//        Point result = warp(d_src_, K, R, interp_mode, border_mode, d_dst_);
//        d_dst_.download(dst);
//        return result;
//    }
//
//    Rect buildMaps(Size src_size, InputArray K, InputArray R, cuda::GpuMat & xmap, cuda::GpuMat & ymap);
//
//    Point warp(const cuda::GpuMat & src, InputArray K, InputArray R, int interp_mode, int border_mode,
//               cuda::GpuMat & dst);
//
//private:
//    cuda::GpuMat d_xmap_, d_ymap_, d_src_, d_dst_;
//};


//class CV_EXPORTS CylindricalWarperGpu : public CylindricalWarper
//{
//public:
//    CylindricalWarperGpu(float scale) : CylindricalWarper(scale) {}
//
//    Rect buildMaps(Size src_size, InputArray K, InputArray R, OutputArray xmap, OutputArray ymap) CV_OVERRIDE
//    {
//        Rect result = buildMaps(src_size, K, R, d_xmap_, d_ymap_);
//        d_xmap_.download(xmap);
//        d_ymap_.download(ymap);
//        return result;
//    }
//
//    Point warp(InputArray src, InputArray K, InputArray R, int interp_mode, int border_mode,
//               OutputArray dst) CV_OVERRIDE
//    {
//        d_src_.upload(src);
//        Point result = warp(d_src_, K, R, interp_mode, border_mode, d_dst_);
//        d_dst_.download(dst);
//        return result;
//    }
//
//    Rect buildMaps(Size src_size, InputArray K, InputArray R, cuda::GpuMat & xmap, cuda::GpuMat & ymap);
//
//    Point warp(const cuda::GpuMat & src, InputArray K, InputArray R, int interp_mode, int border_mode,
//               cuda::GpuMat & dst);
//
//private:
//    cuda::GpuMat d_xmap_, d_ymap_, d_src_, d_dst_;
//};


//struct CV_EXPORTS SphericalPortraitProjector : ProjectorBase
//{
//    void mapForward(float x, float y, float &u, float &v);
//    void mapBackward(float u, float v, float &x, float &y);
//};


// Projects image onto unit sphere with origin at (0, 0, 0).
// Poles are located NOT at (0, -1, 0) and (0, 1, 0) points, BUT at (1, 0, 0) and (-1, 0, 0) points.
//class CV_EXPORTS SphericalPortraitWarper : public RotationWarperBase<SphericalPortraitProjector>
//{
//public:
//    SphericalPortraitWarper(float scale) { projector_.scale = scale; }
//
//protected:
//    void detectResultRoi(Size src_size, Point &dst_tl, Point &dst_br) CV_OVERRIDE;
//};

//struct CV_EXPORTS CylindricalPortraitProjector : ProjectorBase
//{
//    void mapForward(float x, float y, float &u, float &v);
//    void mapBackward(float u, float v, float &x, float &y);
//};


//class CV_EXPORTS CylindricalPortraitWarper : public RotationWarperBase<CylindricalPortraitProjector>
//{
//public:
//    CylindricalPortraitWarper(float scale) { projector_.scale = scale; }
//
//protected:
//    void detectResultRoi(Size src_size, Point &dst_tl, Point &dst_br) CV_OVERRIDE
//    {
//        RotationWarperBase<CylindricalPortraitProjector>::detectResultRoiByBorder(src_size, dst_tl, dst_br);
//    }
//};

//struct CV_EXPORTS PlanePortraitProjector : ProjectorBase
//{
//    void mapForward(float x, float y, float &u, float &v);
//    void mapBackward(float u, float v, float &x, float &y);
//};


//class CV_EXPORTS PlanePortraitWarper : public RotationWarperBase<PlanePortraitProjector>
//{
//public:
//    PlanePortraitWarper(float scale) { projector_.scale = scale; }
//
//protected:
//    void detectResultRoi(Size src_size, Point &dst_tl, Point &dst_br) CV_OVERRIDE
//    {
//        RotationWarperBase<PlanePortraitProjector>::detectResultRoiByBorder(src_size, dst_tl, dst_br);
//    }
//};

//! @} stitching_warp

//} // namespace detail
//} // namespace cv

{$i 'stitching/detail/warpers_inl.inc'}

{$endif OPENCV_STITCHING_WARPERS_HPP}
