// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_VERSION_PROTOCOL_H_
#define FLATBUFFERS_GENERATED_VERSION_PROTOCOL_H_

#include "flatbuffers/flatbuffers.h"

namespace protocol {

struct Version;

struct Version FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_MAJOR = 4,
    VT_MINOR = 6
  };
  int32_t major() const {
    return GetField<int32_t>(VT_MAJOR, 0);
  }
  int32_t minor() const {
    return GetField<int32_t>(VT_MINOR, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_MAJOR) &&
           VerifyField<int32_t>(verifier, VT_MINOR) &&
           verifier.EndTable();
  }
};

struct VersionBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_major(int32_t major) {
    fbb_.AddElement<int32_t>(Version::VT_MAJOR, major, 0);
  }
  void add_minor(int32_t minor) {
    fbb_.AddElement<int32_t>(Version::VT_MINOR, minor, 0);
  }
  explicit VersionBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  VersionBuilder &operator=(const VersionBuilder &);
  flatbuffers::Offset<Version> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Version>(end);
    return o;
  }
};

inline flatbuffers::Offset<Version> CreateVersion(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t major = 0,
    int32_t minor = 0) {
  VersionBuilder builder_(_fbb);
  builder_.add_minor(minor);
  builder_.add_major(major);
  return builder_.Finish();
}

inline const protocol::Version *GetVersion(const void *buf) {
  return flatbuffers::GetRoot<protocol::Version>(buf);
}

inline const protocol::Version *GetSizePrefixedVersion(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<protocol::Version>(buf);
}

inline bool VerifyVersionBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<protocol::Version>(nullptr);
}

inline bool VerifySizePrefixedVersionBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<protocol::Version>(nullptr);
}

inline void FinishVersionBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<protocol::Version> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedVersionBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<protocol::Version> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace protocol

#endif  // FLATBUFFERS_GENERATED_VERSION_PROTOCOL_H_
