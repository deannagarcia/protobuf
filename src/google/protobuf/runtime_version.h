#ifndef GOOGLE_PROTOBUF_RUNTIME_VERSION_H__
#define GOOGLE_PROTOBUF_RUNTIME_VERSION_H__

#ifdef PROTOBUF_VERSION
#error PROTOBUF_VERSION was previously defined
#endif  // PROTOBUF_VERSION

#ifdef PROTOBUF_VERSION_SUFFIX
#error PROTOBUF_VERSION_SUFFIX was previously defined
#endif  // PROTOBUF_VERSION_SUFFIX

#ifdef PROTOBUF_OSS_VERSION
#error PROTOBUF_OSS_VERSION was previously defined
#endif  // PROTOBUF_OSS_VERSION

#ifdef PROTOBUF_OSS_VERSION_SUFFIX
#error PROTOBUF_OSS_VERSION_SUFFIX was previously defined
#endif  // PROTOBUF_OSS_VERSION_SUFFIX

// The OSS versions are not stripped to avoid merging conflicts.
#define PROTOBUF_OSS_VERSION 6030000
#define PROTOBUF_OSS_VERSION_SUFFIX "-rc2"

#define PROTOBUF_VERSION PROTOBUF_OSS_VERSION
#define PROTOBUF_VERSION_SUFFIX PROTOBUF_OSS_VERSION_SUFFIX

#endif  // GOOGLE_PROTOBUF_RUNTIME_VERSION_H__
