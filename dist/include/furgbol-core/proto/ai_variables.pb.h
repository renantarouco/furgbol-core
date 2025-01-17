// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ai_variables.proto

#ifndef PROTOBUF_ai_5fvariables_2eproto__INCLUDED
#define PROTOBUF_ai_5fvariables_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_ai_5fvariables_2eproto();
void protobuf_AssignDesc_ai_5fvariables_2eproto();
void protobuf_ShutdownFile_ai_5fvariables_2eproto();

class AIVariablesPackage;

// ===================================================================

class AIVariablesPackage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:AIVariablesPackage) */ {
 public:
  AIVariablesPackage();
  virtual ~AIVariablesPackage();

  AIVariablesPackage(const AIVariablesPackage& from);

  inline AIVariablesPackage& operator=(const AIVariablesPackage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AIVariablesPackage& default_instance();

  void Swap(AIVariablesPackage* other);

  // implements Message ----------------------------------------------

  inline AIVariablesPackage* New() const { return New(NULL); }

  AIVariablesPackage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AIVariablesPackage& from);
  void MergeFrom(const AIVariablesPackage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(AIVariablesPackage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string component = 1;
  int component_size() const;
  void clear_component();
  static const int kComponentFieldNumber = 1;
  const ::std::string& component(int index) const;
  ::std::string* mutable_component(int index);
  void set_component(int index, const ::std::string& value);
  void set_component(int index, const char* value);
  void set_component(int index, const char* value, size_t size);
  ::std::string* add_component();
  void add_component(const ::std::string& value);
  void add_component(const char* value);
  void add_component(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& component() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_component();

  // repeated string component_name = 2;
  int component_name_size() const;
  void clear_component_name();
  static const int kComponentNameFieldNumber = 2;
  const ::std::string& component_name(int index) const;
  ::std::string* mutable_component_name(int index);
  void set_component_name(int index, const ::std::string& value);
  void set_component_name(int index, const char* value);
  void set_component_name(int index, const char* value, size_t size);
  ::std::string* add_component_name();
  void add_component_name(const ::std::string& value);
  void add_component_name(const char* value);
  void add_component_name(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& component_name() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_component_name();

  // repeated string component_value = 3;
  int component_value_size() const;
  void clear_component_value();
  static const int kComponentValueFieldNumber = 3;
  const ::std::string& component_value(int index) const;
  ::std::string* mutable_component_value(int index);
  void set_component_value(int index, const ::std::string& value);
  void set_component_value(int index, const char* value);
  void set_component_value(int index, const char* value, size_t size);
  ::std::string* add_component_value();
  void add_component_value(const ::std::string& value);
  void add_component_value(const char* value);
  void add_component_value(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& component_value() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_component_value();

  // @@protoc_insertion_point(class_scope:AIVariablesPackage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> component_;
  ::google::protobuf::RepeatedPtrField< ::std::string> component_name_;
  ::google::protobuf::RepeatedPtrField< ::std::string> component_value_;
  friend void  protobuf_AddDesc_ai_5fvariables_2eproto();
  friend void protobuf_AssignDesc_ai_5fvariables_2eproto();
  friend void protobuf_ShutdownFile_ai_5fvariables_2eproto();

  void InitAsDefaultInstance();
  static AIVariablesPackage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// AIVariablesPackage

// repeated string component = 1;
inline int AIVariablesPackage::component_size() const {
  return component_.size();
}
inline void AIVariablesPackage::clear_component() {
  component_.Clear();
}
inline const ::std::string& AIVariablesPackage::component(int index) const {
  // @@protoc_insertion_point(field_get:AIVariablesPackage.component)
  return component_.Get(index);
}
inline ::std::string* AIVariablesPackage::mutable_component(int index) {
  // @@protoc_insertion_point(field_mutable:AIVariablesPackage.component)
  return component_.Mutable(index);
}
inline void AIVariablesPackage::set_component(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:AIVariablesPackage.component)
  component_.Mutable(index)->assign(value);
}
inline void AIVariablesPackage::set_component(int index, const char* value) {
  component_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:AIVariablesPackage.component)
}
inline void AIVariablesPackage::set_component(int index, const char* value, size_t size) {
  component_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:AIVariablesPackage.component)
}
inline ::std::string* AIVariablesPackage::add_component() {
  // @@protoc_insertion_point(field_add_mutable:AIVariablesPackage.component)
  return component_.Add();
}
inline void AIVariablesPackage::add_component(const ::std::string& value) {
  component_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:AIVariablesPackage.component)
}
inline void AIVariablesPackage::add_component(const char* value) {
  component_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:AIVariablesPackage.component)
}
inline void AIVariablesPackage::add_component(const char* value, size_t size) {
  component_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:AIVariablesPackage.component)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
AIVariablesPackage::component() const {
  // @@protoc_insertion_point(field_list:AIVariablesPackage.component)
  return component_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
AIVariablesPackage::mutable_component() {
  // @@protoc_insertion_point(field_mutable_list:AIVariablesPackage.component)
  return &component_;
}

// repeated string component_name = 2;
inline int AIVariablesPackage::component_name_size() const {
  return component_name_.size();
}
inline void AIVariablesPackage::clear_component_name() {
  component_name_.Clear();
}
inline const ::std::string& AIVariablesPackage::component_name(int index) const {
  // @@protoc_insertion_point(field_get:AIVariablesPackage.component_name)
  return component_name_.Get(index);
}
inline ::std::string* AIVariablesPackage::mutable_component_name(int index) {
  // @@protoc_insertion_point(field_mutable:AIVariablesPackage.component_name)
  return component_name_.Mutable(index);
}
inline void AIVariablesPackage::set_component_name(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:AIVariablesPackage.component_name)
  component_name_.Mutable(index)->assign(value);
}
inline void AIVariablesPackage::set_component_name(int index, const char* value) {
  component_name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:AIVariablesPackage.component_name)
}
inline void AIVariablesPackage::set_component_name(int index, const char* value, size_t size) {
  component_name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:AIVariablesPackage.component_name)
}
inline ::std::string* AIVariablesPackage::add_component_name() {
  // @@protoc_insertion_point(field_add_mutable:AIVariablesPackage.component_name)
  return component_name_.Add();
}
inline void AIVariablesPackage::add_component_name(const ::std::string& value) {
  component_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:AIVariablesPackage.component_name)
}
inline void AIVariablesPackage::add_component_name(const char* value) {
  component_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:AIVariablesPackage.component_name)
}
inline void AIVariablesPackage::add_component_name(const char* value, size_t size) {
  component_name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:AIVariablesPackage.component_name)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
AIVariablesPackage::component_name() const {
  // @@protoc_insertion_point(field_list:AIVariablesPackage.component_name)
  return component_name_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
AIVariablesPackage::mutable_component_name() {
  // @@protoc_insertion_point(field_mutable_list:AIVariablesPackage.component_name)
  return &component_name_;
}

// repeated string component_value = 3;
inline int AIVariablesPackage::component_value_size() const {
  return component_value_.size();
}
inline void AIVariablesPackage::clear_component_value() {
  component_value_.Clear();
}
inline const ::std::string& AIVariablesPackage::component_value(int index) const {
  // @@protoc_insertion_point(field_get:AIVariablesPackage.component_value)
  return component_value_.Get(index);
}
inline ::std::string* AIVariablesPackage::mutable_component_value(int index) {
  // @@protoc_insertion_point(field_mutable:AIVariablesPackage.component_value)
  return component_value_.Mutable(index);
}
inline void AIVariablesPackage::set_component_value(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:AIVariablesPackage.component_value)
  component_value_.Mutable(index)->assign(value);
}
inline void AIVariablesPackage::set_component_value(int index, const char* value) {
  component_value_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:AIVariablesPackage.component_value)
}
inline void AIVariablesPackage::set_component_value(int index, const char* value, size_t size) {
  component_value_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:AIVariablesPackage.component_value)
}
inline ::std::string* AIVariablesPackage::add_component_value() {
  // @@protoc_insertion_point(field_add_mutable:AIVariablesPackage.component_value)
  return component_value_.Add();
}
inline void AIVariablesPackage::add_component_value(const ::std::string& value) {
  component_value_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:AIVariablesPackage.component_value)
}
inline void AIVariablesPackage::add_component_value(const char* value) {
  component_value_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:AIVariablesPackage.component_value)
}
inline void AIVariablesPackage::add_component_value(const char* value, size_t size) {
  component_value_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:AIVariablesPackage.component_value)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
AIVariablesPackage::component_value() const {
  // @@protoc_insertion_point(field_list:AIVariablesPackage.component_value)
  return component_value_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
AIVariablesPackage::mutable_component_value() {
  // @@protoc_insertion_point(field_mutable_list:AIVariablesPackage.component_value)
  return &component_value_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ai_5fvariables_2eproto__INCLUDED
