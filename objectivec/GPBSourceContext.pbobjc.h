// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// clang-format off
// source: google/protobuf/source_context.proto

#import "GPBDescriptor.h"
#import "GPBMessage.h"
#import "GPBRootObject.h"

#if GOOGLE_PROTOBUF_OBJC_VERSION < 40311
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 40311 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - GPBSourceContextRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
GPB_FINAL @interface GPBSourceContextRoot : GPBRootObject
@end

#pragma mark - GPBSourceContext

typedef GPB_ENUM(GPBSourceContext_FieldNumber) {
  GPBSourceContext_FieldNumber_FileName = 1,
};

/**
 * `SourceContext` represents information about the source of a
 * protobuf element, like the file in which it is defined.
 **/
GPB_FINAL @interface GPBSourceContext : GPBMessage

/**
 * The path-qualified name of the .proto file that contained the associated
 * protobuf element.  For example: `"google/protobuf/source_context.proto"`.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *fileName;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)

// clang-format on
