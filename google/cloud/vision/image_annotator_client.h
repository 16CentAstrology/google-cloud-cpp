// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/vision/v1/image_annotator.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_IMAGE_ANNOTATOR_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_IMAGE_ANNOTATOR_CLIENT_H

#include "google/cloud/vision/image_annotator_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace vision {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service that performs Google Cloud Vision API detection tasks over client
/// images, such as face, landmark, logo, label, and text detection. The
/// ImageAnnotator service returns detected entities from the images.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class ImageAnnotatorClient {
 public:
  explicit ImageAnnotatorClient(
      std::shared_ptr<ImageAnnotatorConnection> connection, Options opts = {});
  ~ImageAnnotatorClient();

  ///@{
  // @name Copy and move support
  ImageAnnotatorClient(ImageAnnotatorClient const&) = default;
  ImageAnnotatorClient& operator=(ImageAnnotatorClient const&) = default;
  ImageAnnotatorClient(ImageAnnotatorClient&&) = default;
  ImageAnnotatorClient& operator=(ImageAnnotatorClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(ImageAnnotatorClient const& a,
                         ImageAnnotatorClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ImageAnnotatorClient const& a,
                         ImageAnnotatorClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Run image detection and annotation for a batch of images.
  ///
  /// @param requests  Required. Individual image annotation requests for this
  /// batch.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::vision::v1::BatchAnnotateImagesResponse,google/cloud/vision/v1/image_annotator.proto#L788}
  ///
  /// [google.cloud.vision.v1.BatchAnnotateImagesRequest]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L768}
  /// [google.cloud.vision.v1.BatchAnnotateImagesResponse]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L788}
  ///
  StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>
  BatchAnnotateImages(
      std::vector<google::cloud::vision::v1::AnnotateImageRequest> const&
          requests,
      Options opts = {});

  ///
  /// Run image detection and annotation for a batch of images.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::vision::v1::BatchAnnotateImagesRequest,google/cloud/vision/v1/image_annotator.proto#L768}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::vision::v1::BatchAnnotateImagesResponse,google/cloud/vision/v1/image_annotator.proto#L788}
  ///
  /// [google.cloud.vision.v1.BatchAnnotateImagesRequest]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L768}
  /// [google.cloud.vision.v1.BatchAnnotateImagesResponse]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L788}
  ///
  StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>
  BatchAnnotateImages(
      google::cloud::vision::v1::BatchAnnotateImagesRequest const& request,
      Options opts = {});

  ///
  /// Service that performs image detection and annotation for a batch of files.
  /// Now only "application/pdf", "image/tiff" and "image/gif" are supported.
  ///
  /// This service will extract at most 5 (customers can specify which 5 in
  /// AnnotateFileRequest.pages) frames (gif) or pages (pdf or tiff) from each
  /// file provided and perform detection and annotation for each image
  /// extracted.
  ///
  /// @param requests  Required. The list of file annotation requests. Right now
  /// we support only one
  ///  AnnotateFileRequest in BatchAnnotateFilesRequest.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::vision::v1::BatchAnnotateFilesResponse,google/cloud/vision/v1/image_annotator.proto#L861}
  ///
  /// [google.cloud.vision.v1.BatchAnnotateFilesRequest]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L840}
  /// [google.cloud.vision.v1.BatchAnnotateFilesResponse]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L861}
  ///
  StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>
  BatchAnnotateFiles(
      std::vector<google::cloud::vision::v1::AnnotateFileRequest> const&
          requests,
      Options opts = {});

  ///
  /// Service that performs image detection and annotation for a batch of files.
  /// Now only "application/pdf", "image/tiff" and "image/gif" are supported.
  ///
  /// This service will extract at most 5 (customers can specify which 5 in
  /// AnnotateFileRequest.pages) frames (gif) or pages (pdf or tiff) from each
  /// file provided and perform detection and annotation for each image
  /// extracted.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::vision::v1::BatchAnnotateFilesRequest,google/cloud/vision/v1/image_annotator.proto#L840}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::vision::v1::BatchAnnotateFilesResponse,google/cloud/vision/v1/image_annotator.proto#L861}
  ///
  /// [google.cloud.vision.v1.BatchAnnotateFilesRequest]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L840}
  /// [google.cloud.vision.v1.BatchAnnotateFilesResponse]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L861}
  ///
  StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>
  BatchAnnotateFiles(
      google::cloud::vision::v1::BatchAnnotateFilesRequest const& request,
      Options opts = {});

  ///
  /// Run asynchronous image detection and annotation for a list of images.
  ///
  /// Progress and results can be retrieved through the
  /// `google.longrunning.Operations` interface.
  /// `Operation.metadata` contains `OperationMetadata` (metadata).
  /// `Operation.response` contains `AsyncBatchAnnotateImagesResponse`
  /// (results).
  ///
  /// This service will write image annotation outputs to json files in customer
  /// GCS bucket, each json file containing BatchAnnotateImagesResponse proto.
  ///
  /// @param requests  Required. Individual image annotation requests for this
  /// batch.
  /// @param output_config  Required. The desired output location and metadata
  /// (e.g. format).
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::vision::v1::AsyncBatchAnnotateImagesResponse,google/cloud/vision/v1/image_annotator.proto#L912}
  ///
  /// [google.cloud.vision.v1.AsyncBatchAnnotateImagesRequest]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L889}
  /// [google.cloud.vision.v1.AsyncBatchAnnotateImagesResponse]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L912}
  ///
  future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateImagesResponse>>
  AsyncBatchAnnotateImages(
      std::vector<google::cloud::vision::v1::AnnotateImageRequest> const&
          requests,
      google::cloud::vision::v1::OutputConfig const& output_config,
      Options opts = {});

  ///
  /// Run asynchronous image detection and annotation for a list of images.
  ///
  /// Progress and results can be retrieved through the
  /// `google.longrunning.Operations` interface.
  /// `Operation.metadata` contains `OperationMetadata` (metadata).
  /// `Operation.response` contains `AsyncBatchAnnotateImagesResponse`
  /// (results).
  ///
  /// This service will write image annotation outputs to json files in customer
  /// GCS bucket, each json file containing BatchAnnotateImagesResponse proto.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest,google/cloud/vision/v1/image_annotator.proto#L889}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::vision::v1::AsyncBatchAnnotateImagesResponse,google/cloud/vision/v1/image_annotator.proto#L912}
  ///
  /// [google.cloud.vision.v1.AsyncBatchAnnotateImagesRequest]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L889}
  /// [google.cloud.vision.v1.AsyncBatchAnnotateImagesResponse]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L912}
  ///
  future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateImagesResponse>>
  AsyncBatchAnnotateImages(
      google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const& request,
      Options opts = {});

  ///
  /// Run asynchronous image detection and annotation for a list of generic
  /// files, such as PDF files, which may contain multiple pages and multiple
  /// images per page. Progress and results can be retrieved through the
  /// `google.longrunning.Operations` interface.
  /// `Operation.metadata` contains `OperationMetadata` (metadata).
  /// `Operation.response` contains `AsyncBatchAnnotateFilesResponse` (results).
  ///
  /// @param requests  Required. Individual async file annotation requests for
  /// this batch.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::vision::v1::AsyncBatchAnnotateFilesResponse,google/cloud/vision/v1/image_annotator.proto#L939}
  ///
  /// [google.cloud.vision.v1.AsyncBatchAnnotateFilesRequest]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L919}
  /// [google.cloud.vision.v1.AsyncBatchAnnotateFilesResponse]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L939}
  ///
  future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateFilesResponse>>
  AsyncBatchAnnotateFiles(
      std::vector<google::cloud::vision::v1::AsyncAnnotateFileRequest> const&
          requests,
      Options opts = {});

  ///
  /// Run asynchronous image detection and annotation for a list of generic
  /// files, such as PDF files, which may contain multiple pages and multiple
  /// images per page. Progress and results can be retrieved through the
  /// `google.longrunning.Operations` interface.
  /// `Operation.metadata` contains `OperationMetadata` (metadata).
  /// `Operation.response` contains `AsyncBatchAnnotateFilesResponse` (results).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest,google/cloud/vision/v1/image_annotator.proto#L919}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::vision::v1::AsyncBatchAnnotateFilesResponse,google/cloud/vision/v1/image_annotator.proto#L939}
  ///
  /// [google.cloud.vision.v1.AsyncBatchAnnotateFilesRequest]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L919}
  /// [google.cloud.vision.v1.AsyncBatchAnnotateFilesResponse]:
  /// @googleapis_reference_link{google/cloud/vision/v1/image_annotator.proto#L939}
  ///
  future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateFilesResponse>>
  AsyncBatchAnnotateFiles(
      google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ImageAnnotatorConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_IMAGE_ANNOTATOR_CLIENT_H
