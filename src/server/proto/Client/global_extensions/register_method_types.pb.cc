// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: global_extensions/register_method_types.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "global_extensions/register_method_types.pb.h"

#include <utility>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {

namespace {

const ::google::protobuf::EnumDescriptor* ClientRegisterMethodType_descriptor_ = NULL;

}  // namespace

void protobuf_AssignDesc_global_5fextensions_2fregister_5fmethod_5ftypes_2eproto() {
  protobuf_AddDesc_global_5fextensions_2fregister_5fmethod_5ftypes_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "global_extensions/register_method_types.proto");
  GOOGLE_CHECK(file != NULL);
  ClientRegisterMethodType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_global_5fextensions_2fregister_5fmethod_5ftypes_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_global_5fextensions_2fregister_5fmethod_5ftypes_2eproto() {
}

void protobuf_AddDesc_global_5fextensions_2fregister_5fmethod_5ftypes_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n-global_extensions/register_method_type"
    "s.proto\022\014bgs.protocol*\245\001\n\030ClientRegister"
    "MethodType\022\030\n\024REGISTER_CLIENT_NONE\020\000\022\036\n\032"
    "REGISTER_CLIENT_REGISTERED\020\001\022 \n\034REGISTER"
    "_CLIENT_UNREGISTERED\020\002\022-\n)REGISTER_CLIEN"
    "T_UNREGISTERED_NOTIFICATION\020\003B\002H\002", 233);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "global_extensions/register_method_types.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_global_5fextensions_2fregister_5fmethod_5ftypes_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_global_5fextensions_2fregister_5fmethod_5ftypes_2eproto {
  StaticDescriptorInitializer_global_5fextensions_2fregister_5fmethod_5ftypes_2eproto() {
    protobuf_AddDesc_global_5fextensions_2fregister_5fmethod_5ftypes_2eproto();
  }
} static_descriptor_initializer_global_5fextensions_2fregister_5fmethod_5ftypes_2eproto_;
const ::google::protobuf::EnumDescriptor* ClientRegisterMethodType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ClientRegisterMethodType_descriptor_;
}
bool ClientRegisterMethodType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol
}  // namespace bgs

// @@protoc_insertion_point(global_scope)