// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/common/v2/whisper_types.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "api/common/v2/whisper_types.pb.h"

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
namespace whisper {
namespace v2 {

namespace {

const ::google::protobuf::Descriptor* Whisper_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Whisper_reflection_ = NULL;
const ::google::protobuf::Descriptor* WhisperView_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WhisperView_reflection_ = NULL;
const ::google::protobuf::Descriptor* SendWhisperOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SendWhisperOptions_reflection_ = NULL;

}  // namespace

void protobuf_AssignDesc_api_2fcommon_2fv2_2fwhisper_5ftypes_2eproto() {
  protobuf_AddDesc_api_2fcommon_2fv2_2fwhisper_5ftypes_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "api/common/v2/whisper_types.proto");
  GOOGLE_CHECK(file != NULL);
  Whisper_descriptor_ = file->message_type(0);
  static const int Whisper_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Whisper, whisper_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Whisper, sender_account_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Whisper, receiver_account_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Whisper, title_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Whisper, content_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Whisper, embeds_),
  };
  Whisper_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Whisper_descriptor_,
      Whisper::default_instance_,
      Whisper_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Whisper, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Whisper, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Whisper));
  WhisperView_descriptor_ = file->message_type(1);
  static const int WhisperView_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhisperView, target_account_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhisperView, view_marker_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhisperView, target_battle_tag_),
  };
  WhisperView_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      WhisperView_descriptor_,
      WhisperView::default_instance_,
      WhisperView_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhisperView, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhisperView, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(WhisperView));
  SendWhisperOptions_descriptor_ = file->message_type(2);
  static const int SendWhisperOptions_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SendWhisperOptions, content_),
  };
  SendWhisperOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SendWhisperOptions_descriptor_,
      SendWhisperOptions::default_instance_,
      SendWhisperOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SendWhisperOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SendWhisperOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SendWhisperOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_api_2fcommon_2fv2_2fwhisper_5ftypes_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Whisper_descriptor_, &Whisper::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    WhisperView_descriptor_, &WhisperView::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SendWhisperOptions_descriptor_, &SendWhisperOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_api_2fcommon_2fv2_2fwhisper_5ftypes_2eproto() {
  delete Whisper::default_instance_;
  delete Whisper_reflection_;
  delete WhisperView::default_instance_;
  delete WhisperView_reflection_;
  delete SendWhisperOptions::default_instance_;
  delete SendWhisperOptions_reflection_;
}

void protobuf_AddDesc_api_2fcommon_2fv2_2fwhisper_5ftypes_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::bgs::protocol::protobuf_AddDesc_api_2fcommon_2fv1_2fembed_5ftypes_2eproto();
  ::bgs::protocol::protobuf_AddDesc_api_2fcommon_2fv1_2fevent_5fview_5ftypes_2eproto();
  ::bgs::protocol::protobuf_AddDesc_api_2fcommon_2fv1_2fmessage_5ftypes_2eproto();
  ::bgs::protocol::protobuf_AddDesc_rpc_5ftypes_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n!api/common/v2/whisper_types.proto\022\027bgs"
    ".protocol.whisper.v2\032\037api/common/v1/embe"
    "d_types.proto\032$api/common/v1/event_view_"
    "types.proto\032!api/common/v1/message_types"
    ".proto\032\017rpc_types.proto\"\272\001\n\007Whisper\022+\n\nw"
    "hisper_id\030\001 \001(\0132\027.bgs.protocol.MessageId"
    "\022\031\n\021sender_account_id\030\002 \001(\004\022\033\n\023receiver_"
    "account_id\030\003 \001(\004\022\020\n\010title_id\030\004 \001(\r\022\017\n\007co"
    "ntent\030\005 \001(\t\022\'\n\006embeds\030\006 \003(\0132\027.bgs.protoc"
    "ol.EmbedInfo\"z\n\013WhisperView\022\031\n\021target_ac"
    "count_id\030\001 \001(\004\022-\n\013view_marker\030\002 \001(\0132\030.bg"
    "s.protocol.ViewMarker\022!\n\021target_battle_t"
    "ag\030\003 \001(\tB\006\202\371+\002\010\001\"%\n\022SendWhisperOptions\022\017"
    "\n\007content\030\001 \001(\tB\002H\002", 539);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "api/common/v2/whisper_types.proto", &protobuf_RegisterTypes);
  Whisper::default_instance_ = new Whisper();
  WhisperView::default_instance_ = new WhisperView();
  SendWhisperOptions::default_instance_ = new SendWhisperOptions();
  Whisper::default_instance_->InitAsDefaultInstance();
  WhisperView::default_instance_->InitAsDefaultInstance();
  SendWhisperOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_api_2fcommon_2fv2_2fwhisper_5ftypes_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_api_2fcommon_2fv2_2fwhisper_5ftypes_2eproto {
  StaticDescriptorInitializer_api_2fcommon_2fv2_2fwhisper_5ftypes_2eproto() {
    protobuf_AddDesc_api_2fcommon_2fv2_2fwhisper_5ftypes_2eproto();
  }
} static_descriptor_initializer_api_2fcommon_2fv2_2fwhisper_5ftypes_2eproto_;
// ===================================================================

#ifndef _MSC_VER
const int Whisper::kWhisperIdFieldNumber;
const int Whisper::kSenderAccountIdFieldNumber;
const int Whisper::kReceiverAccountIdFieldNumber;
const int Whisper::kTitleIdFieldNumber;
const int Whisper::kContentFieldNumber;
const int Whisper::kEmbedsFieldNumber;
#endif  // !_MSC_VER

Whisper::Whisper()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:bgs.protocol.whisper.v2.Whisper)
}

void Whisper::InitAsDefaultInstance() {
  whisper_id_ = const_cast< ::bgs::protocol::MessageId*>(&::bgs::protocol::MessageId::default_instance());
}

Whisper::Whisper(const Whisper& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bgs.protocol.whisper.v2.Whisper)
}

void Whisper::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  whisper_id_ = NULL;
  sender_account_id_ = GOOGLE_ULONGLONG(0);
  receiver_account_id_ = GOOGLE_ULONGLONG(0);
  title_id_ = 0u;
  content_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Whisper::~Whisper() {
  // @@protoc_insertion_point(destructor:bgs.protocol.whisper.v2.Whisper)
  SharedDtor();
}

void Whisper::SharedDtor() {
  if (content_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete content_;
  }
  if (this != default_instance_) {
    delete whisper_id_;
  }
}

void Whisper::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Whisper::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Whisper_descriptor_;
}

const Whisper& Whisper::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_api_2fcommon_2fv2_2fwhisper_5ftypes_2eproto();
  return *default_instance_;
}

Whisper* Whisper::default_instance_ = NULL;

Whisper* Whisper::New() const {
  return new Whisper;
}

void Whisper::Swap(Whisper* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata Whisper::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Whisper_descriptor_;
  metadata.reflection = Whisper_reflection_;
  return metadata;
}

// ===================================================================

#ifndef _MSC_VER
const int WhisperView::kTargetAccountIdFieldNumber;
const int WhisperView::kViewMarkerFieldNumber;
const int WhisperView::kTargetBattleTagFieldNumber;
#endif  // !_MSC_VER

WhisperView::WhisperView()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:bgs.protocol.whisper.v2.WhisperView)
}

void WhisperView::InitAsDefaultInstance() {
  view_marker_ = const_cast< ::bgs::protocol::ViewMarker*>(&::bgs::protocol::ViewMarker::default_instance());
}

WhisperView::WhisperView(const WhisperView& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bgs.protocol.whisper.v2.WhisperView)
}

void WhisperView::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  target_account_id_ = GOOGLE_ULONGLONG(0);
  view_marker_ = NULL;
  target_battle_tag_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WhisperView::~WhisperView() {
  // @@protoc_insertion_point(destructor:bgs.protocol.whisper.v2.WhisperView)
  SharedDtor();
}

void WhisperView::SharedDtor() {
  if (target_battle_tag_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete target_battle_tag_;
  }
  if (this != default_instance_) {
    delete view_marker_;
  }
}

void WhisperView::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WhisperView::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WhisperView_descriptor_;
}

const WhisperView& WhisperView::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_api_2fcommon_2fv2_2fwhisper_5ftypes_2eproto();
  return *default_instance_;
}

WhisperView* WhisperView::default_instance_ = NULL;

WhisperView* WhisperView::New() const {
  return new WhisperView;
}

void WhisperView::Swap(WhisperView* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata WhisperView::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WhisperView_descriptor_;
  metadata.reflection = WhisperView_reflection_;
  return metadata;
}

// ===================================================================

#ifndef _MSC_VER
const int SendWhisperOptions::kContentFieldNumber;
#endif  // !_MSC_VER

SendWhisperOptions::SendWhisperOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:bgs.protocol.whisper.v2.SendWhisperOptions)
}

void SendWhisperOptions::InitAsDefaultInstance() {
}

SendWhisperOptions::SendWhisperOptions(const SendWhisperOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bgs.protocol.whisper.v2.SendWhisperOptions)
}

void SendWhisperOptions::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  content_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SendWhisperOptions::~SendWhisperOptions() {
  // @@protoc_insertion_point(destructor:bgs.protocol.whisper.v2.SendWhisperOptions)
  SharedDtor();
}

void SendWhisperOptions::SharedDtor() {
  if (content_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete content_;
  }
  if (this != default_instance_) {
  }
}

void SendWhisperOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SendWhisperOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SendWhisperOptions_descriptor_;
}

const SendWhisperOptions& SendWhisperOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_api_2fcommon_2fv2_2fwhisper_5ftypes_2eproto();
  return *default_instance_;
}

SendWhisperOptions* SendWhisperOptions::default_instance_ = NULL;

SendWhisperOptions* SendWhisperOptions::New() const {
  return new SendWhisperOptions;
}

void SendWhisperOptions::Swap(SendWhisperOptions* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata SendWhisperOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SendWhisperOptions_descriptor_;
  metadata.reflection = SendWhisperOptions_reflection_;
  return metadata;
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace v2
}  // namespace whisper
}  // namespace protocol
}  // namespace bgs

// @@protoc_insertion_point(global_scope)