// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_ai_2Dsimulator.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_messages_5fai_5f2Dsimulator_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_messages_5fai_5f2Dsimulator_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "referee.pb.h"
#include "messages_vision_manager.pb.h"
#include "messages_ai_data_manager.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_messages_5fai_5f2Dsimulator_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_messages_5fai_5f2Dsimulator_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_5fai_5f2Dsimulator_2eproto;
class AI2DSimulatorPackage;
class AI2DSimulatorPackageDefaultTypeInternal;
extern AI2DSimulatorPackageDefaultTypeInternal _AI2DSimulatorPackage_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::AI2DSimulatorPackage* Arena::CreateMaybeMessage<::AI2DSimulatorPackage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum AI2DSimulatorPackage_TeamColor : int {
  AI2DSimulatorPackage_TeamColor_Yellow = 0,
  AI2DSimulatorPackage_TeamColor_Blue = 1
};
bool AI2DSimulatorPackage_TeamColor_IsValid(int value);
constexpr AI2DSimulatorPackage_TeamColor AI2DSimulatorPackage_TeamColor_TeamColor_MIN = AI2DSimulatorPackage_TeamColor_Yellow;
constexpr AI2DSimulatorPackage_TeamColor AI2DSimulatorPackage_TeamColor_TeamColor_MAX = AI2DSimulatorPackage_TeamColor_Blue;
constexpr int AI2DSimulatorPackage_TeamColor_TeamColor_ARRAYSIZE = AI2DSimulatorPackage_TeamColor_TeamColor_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* AI2DSimulatorPackage_TeamColor_descriptor();
template<typename T>
inline const std::string& AI2DSimulatorPackage_TeamColor_Name(T enum_t_value) {
  static_assert(::std::is_same<T, AI2DSimulatorPackage_TeamColor>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function AI2DSimulatorPackage_TeamColor_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    AI2DSimulatorPackage_TeamColor_descriptor(), enum_t_value);
}
inline bool AI2DSimulatorPackage_TeamColor_Parse(
    const std::string& name, AI2DSimulatorPackage_TeamColor* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<AI2DSimulatorPackage_TeamColor>(
    AI2DSimulatorPackage_TeamColor_descriptor(), name, value);
}
enum AI2DSimulatorPackage_FieldSide : int {
  AI2DSimulatorPackage_FieldSide_Left = 0,
  AI2DSimulatorPackage_FieldSide_Right = 1
};
bool AI2DSimulatorPackage_FieldSide_IsValid(int value);
constexpr AI2DSimulatorPackage_FieldSide AI2DSimulatorPackage_FieldSide_FieldSide_MIN = AI2DSimulatorPackage_FieldSide_Left;
constexpr AI2DSimulatorPackage_FieldSide AI2DSimulatorPackage_FieldSide_FieldSide_MAX = AI2DSimulatorPackage_FieldSide_Right;
constexpr int AI2DSimulatorPackage_FieldSide_FieldSide_ARRAYSIZE = AI2DSimulatorPackage_FieldSide_FieldSide_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* AI2DSimulatorPackage_FieldSide_descriptor();
template<typename T>
inline const std::string& AI2DSimulatorPackage_FieldSide_Name(T enum_t_value) {
  static_assert(::std::is_same<T, AI2DSimulatorPackage_FieldSide>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function AI2DSimulatorPackage_FieldSide_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    AI2DSimulatorPackage_FieldSide_descriptor(), enum_t_value);
}
inline bool AI2DSimulatorPackage_FieldSide_Parse(
    const std::string& name, AI2DSimulatorPackage_FieldSide* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<AI2DSimulatorPackage_FieldSide>(
    AI2DSimulatorPackage_FieldSide_descriptor(), name, value);
}
// ===================================================================

class AI2DSimulatorPackage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AI2DSimulatorPackage) */ {
 public:
  AI2DSimulatorPackage();
  virtual ~AI2DSimulatorPackage();

  AI2DSimulatorPackage(const AI2DSimulatorPackage& from);
  AI2DSimulatorPackage(AI2DSimulatorPackage&& from) noexcept
    : AI2DSimulatorPackage() {
    *this = ::std::move(from);
  }

  inline AI2DSimulatorPackage& operator=(const AI2DSimulatorPackage& from) {
    CopyFrom(from);
    return *this;
  }
  inline AI2DSimulatorPackage& operator=(AI2DSimulatorPackage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const AI2DSimulatorPackage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AI2DSimulatorPackage* internal_default_instance() {
    return reinterpret_cast<const AI2DSimulatorPackage*>(
               &_AI2DSimulatorPackage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AI2DSimulatorPackage& a, AI2DSimulatorPackage& b) {
    a.Swap(&b);
  }
  inline void Swap(AI2DSimulatorPackage* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AI2DSimulatorPackage* New() const final {
    return CreateMaybeMessage<AI2DSimulatorPackage>(nullptr);
  }

  AI2DSimulatorPackage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AI2DSimulatorPackage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AI2DSimulatorPackage& from);
  void MergeFrom(const AI2DSimulatorPackage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AI2DSimulatorPackage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AI2DSimulatorPackage";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_messages_5fai_5f2Dsimulator_2eproto);
    return ::descriptor_table_messages_5fai_5f2Dsimulator_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef AI2DSimulatorPackage_TeamColor TeamColor;
  static constexpr TeamColor Yellow =
    AI2DSimulatorPackage_TeamColor_Yellow;
  static constexpr TeamColor Blue =
    AI2DSimulatorPackage_TeamColor_Blue;
  static inline bool TeamColor_IsValid(int value) {
    return AI2DSimulatorPackage_TeamColor_IsValid(value);
  }
  static constexpr TeamColor TeamColor_MIN =
    AI2DSimulatorPackage_TeamColor_TeamColor_MIN;
  static constexpr TeamColor TeamColor_MAX =
    AI2DSimulatorPackage_TeamColor_TeamColor_MAX;
  static constexpr int TeamColor_ARRAYSIZE =
    AI2DSimulatorPackage_TeamColor_TeamColor_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  TeamColor_descriptor() {
    return AI2DSimulatorPackage_TeamColor_descriptor();
  }
  template<typename T>
  static inline const std::string& TeamColor_Name(T enum_t_value) {
    static_assert(::std::is_same<T, TeamColor>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function TeamColor_Name.");
    return AI2DSimulatorPackage_TeamColor_Name(enum_t_value);
  }
  static inline bool TeamColor_Parse(const std::string& name,
      TeamColor* value) {
    return AI2DSimulatorPackage_TeamColor_Parse(name, value);
  }

  typedef AI2DSimulatorPackage_FieldSide FieldSide;
  static constexpr FieldSide Left =
    AI2DSimulatorPackage_FieldSide_Left;
  static constexpr FieldSide Right =
    AI2DSimulatorPackage_FieldSide_Right;
  static inline bool FieldSide_IsValid(int value) {
    return AI2DSimulatorPackage_FieldSide_IsValid(value);
  }
  static constexpr FieldSide FieldSide_MIN =
    AI2DSimulatorPackage_FieldSide_FieldSide_MIN;
  static constexpr FieldSide FieldSide_MAX =
    AI2DSimulatorPackage_FieldSide_FieldSide_MAX;
  static constexpr int FieldSide_ARRAYSIZE =
    AI2DSimulatorPackage_FieldSide_FieldSide_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  FieldSide_descriptor() {
    return AI2DSimulatorPackage_FieldSide_descriptor();
  }
  template<typename T>
  static inline const std::string& FieldSide_Name(T enum_t_value) {
    static_assert(::std::is_same<T, FieldSide>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function FieldSide_Name.");
    return AI2DSimulatorPackage_FieldSide_Name(enum_t_value);
  }
  static inline bool FieldSide_Parse(const std::string& name,
      FieldSide* value) {
    return AI2DSimulatorPackage_FieldSide_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kWorldFactsFieldNumber = 4,
    kTeamFieldNumber = 5,
    kEnemyFieldNumber = 6,
    kPlayFieldNumber = 3,
    kBallFieldNumber = 1,
    kRefereeFieldNumber = 2,
    kTeamColorFieldNumber = 7,
    kFieldSideFieldNumber = 8,
  };
  // repeated string world_facts = 4;
  int world_facts_size() const;
  private:
  int _internal_world_facts_size() const;
  public:
  void clear_world_facts();
  const std::string& world_facts(int index) const;
  std::string* mutable_world_facts(int index);
  void set_world_facts(int index, const std::string& value);
  void set_world_facts(int index, std::string&& value);
  void set_world_facts(int index, const char* value);
  void set_world_facts(int index, const char* value, size_t size);
  std::string* add_world_facts();
  void add_world_facts(const std::string& value);
  void add_world_facts(std::string&& value);
  void add_world_facts(const char* value);
  void add_world_facts(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& world_facts() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_world_facts();
  private:
  const std::string& _internal_world_facts(int index) const;
  std::string* _internal_add_world_facts();
  public:

  // repeated .AIRobotPackage team = 5;
  int team_size() const;
  private:
  int _internal_team_size() const;
  public:
  void clear_team();
  ::AIRobotPackage* mutable_team(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AIRobotPackage >*
      mutable_team();
  private:
  const ::AIRobotPackage& _internal_team(int index) const;
  ::AIRobotPackage* _internal_add_team();
  public:
  const ::AIRobotPackage& team(int index) const;
  ::AIRobotPackage* add_team();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AIRobotPackage >&
      team() const;

  // repeated .RobotPackage enemy = 6;
  int enemy_size() const;
  private:
  int _internal_enemy_size() const;
  public:
  void clear_enemy();
  ::RobotPackage* mutable_enemy(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::RobotPackage >*
      mutable_enemy();
  private:
  const ::RobotPackage& _internal_enemy(int index) const;
  ::RobotPackage* _internal_add_enemy();
  public:
  const ::RobotPackage& enemy(int index) const;
  ::RobotPackage* add_enemy();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::RobotPackage >&
      enemy() const;

  // optional string play = 3;
  bool has_play() const;
  private:
  bool _internal_has_play() const;
  public:
  void clear_play();
  const std::string& play() const;
  void set_play(const std::string& value);
  void set_play(std::string&& value);
  void set_play(const char* value);
  void set_play(const char* value, size_t size);
  std::string* mutable_play();
  std::string* release_play();
  void set_allocated_play(std::string* play);
  private:
  const std::string& _internal_play() const;
  void _internal_set_play(const std::string& value);
  std::string* _internal_mutable_play();
  public:

  // optional .BallPackage ball = 1;
  bool has_ball() const;
  private:
  bool _internal_has_ball() const;
  public:
  void clear_ball();
  const ::BallPackage& ball() const;
  ::BallPackage* release_ball();
  ::BallPackage* mutable_ball();
  void set_allocated_ball(::BallPackage* ball);
  private:
  const ::BallPackage& _internal_ball() const;
  ::BallPackage* _internal_mutable_ball();
  public:

  // optional .SSL_Referee referee = 2;
  bool has_referee() const;
  private:
  bool _internal_has_referee() const;
  public:
  void clear_referee();
  const ::SSL_Referee& referee() const;
  ::SSL_Referee* release_referee();
  ::SSL_Referee* mutable_referee();
  void set_allocated_referee(::SSL_Referee* referee);
  private:
  const ::SSL_Referee& _internal_referee() const;
  ::SSL_Referee* _internal_mutable_referee();
  public:

  // required .AI2DSimulatorPackage.TeamColor team_color = 7;
  bool has_team_color() const;
  private:
  bool _internal_has_team_color() const;
  public:
  void clear_team_color();
  ::AI2DSimulatorPackage_TeamColor team_color() const;
  void set_team_color(::AI2DSimulatorPackage_TeamColor value);
  private:
  ::AI2DSimulatorPackage_TeamColor _internal_team_color() const;
  void _internal_set_team_color(::AI2DSimulatorPackage_TeamColor value);
  public:

  // optional .AI2DSimulatorPackage.FieldSide field_side = 8;
  bool has_field_side() const;
  private:
  bool _internal_has_field_side() const;
  public:
  void clear_field_side();
  ::AI2DSimulatorPackage_FieldSide field_side() const;
  void set_field_side(::AI2DSimulatorPackage_FieldSide value);
  private:
  ::AI2DSimulatorPackage_FieldSide _internal_field_side() const;
  void _internal_set_field_side(::AI2DSimulatorPackage_FieldSide value);
  public:

  // @@protoc_insertion_point(class_scope:AI2DSimulatorPackage)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> world_facts_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AIRobotPackage > team_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::RobotPackage > enemy_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr play_;
  ::BallPackage* ball_;
  ::SSL_Referee* referee_;
  int team_color_;
  int field_side_;
  friend struct ::TableStruct_messages_5fai_5f2Dsimulator_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AI2DSimulatorPackage

// optional .BallPackage ball = 1;
inline bool AI2DSimulatorPackage::_internal_has_ball() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || ball_ != nullptr);
  return value;
}
inline bool AI2DSimulatorPackage::has_ball() const {
  return _internal_has_ball();
}
inline const ::BallPackage& AI2DSimulatorPackage::_internal_ball() const {
  const ::BallPackage* p = ball_;
  return p != nullptr ? *p : *reinterpret_cast<const ::BallPackage*>(
      &::_BallPackage_default_instance_);
}
inline const ::BallPackage& AI2DSimulatorPackage::ball() const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.ball)
  return _internal_ball();
}
inline ::BallPackage* AI2DSimulatorPackage::release_ball() {
  // @@protoc_insertion_point(field_release:AI2DSimulatorPackage.ball)
  _has_bits_[0] &= ~0x00000002u;
  ::BallPackage* temp = ball_;
  ball_ = nullptr;
  return temp;
}
inline ::BallPackage* AI2DSimulatorPackage::_internal_mutable_ball() {
  _has_bits_[0] |= 0x00000002u;
  if (ball_ == nullptr) {
    auto* p = CreateMaybeMessage<::BallPackage>(GetArenaNoVirtual());
    ball_ = p;
  }
  return ball_;
}
inline ::BallPackage* AI2DSimulatorPackage::mutable_ball() {
  // @@protoc_insertion_point(field_mutable:AI2DSimulatorPackage.ball)
  return _internal_mutable_ball();
}
inline void AI2DSimulatorPackage::set_allocated_ball(::BallPackage* ball) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(ball_);
  }
  if (ball) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      ball = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ball, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  ball_ = ball;
  // @@protoc_insertion_point(field_set_allocated:AI2DSimulatorPackage.ball)
}

// optional .SSL_Referee referee = 2;
inline bool AI2DSimulatorPackage::_internal_has_referee() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || referee_ != nullptr);
  return value;
}
inline bool AI2DSimulatorPackage::has_referee() const {
  return _internal_has_referee();
}
inline const ::SSL_Referee& AI2DSimulatorPackage::_internal_referee() const {
  const ::SSL_Referee* p = referee_;
  return p != nullptr ? *p : *reinterpret_cast<const ::SSL_Referee*>(
      &::_SSL_Referee_default_instance_);
}
inline const ::SSL_Referee& AI2DSimulatorPackage::referee() const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.referee)
  return _internal_referee();
}
inline ::SSL_Referee* AI2DSimulatorPackage::release_referee() {
  // @@protoc_insertion_point(field_release:AI2DSimulatorPackage.referee)
  _has_bits_[0] &= ~0x00000004u;
  ::SSL_Referee* temp = referee_;
  referee_ = nullptr;
  return temp;
}
inline ::SSL_Referee* AI2DSimulatorPackage::_internal_mutable_referee() {
  _has_bits_[0] |= 0x00000004u;
  if (referee_ == nullptr) {
    auto* p = CreateMaybeMessage<::SSL_Referee>(GetArenaNoVirtual());
    referee_ = p;
  }
  return referee_;
}
inline ::SSL_Referee* AI2DSimulatorPackage::mutable_referee() {
  // @@protoc_insertion_point(field_mutable:AI2DSimulatorPackage.referee)
  return _internal_mutable_referee();
}
inline void AI2DSimulatorPackage::set_allocated_referee(::SSL_Referee* referee) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(referee_);
  }
  if (referee) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      referee = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, referee, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  referee_ = referee;
  // @@protoc_insertion_point(field_set_allocated:AI2DSimulatorPackage.referee)
}

// optional string play = 3;
inline bool AI2DSimulatorPackage::_internal_has_play() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AI2DSimulatorPackage::has_play() const {
  return _internal_has_play();
}
inline void AI2DSimulatorPackage::clear_play() {
  play_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& AI2DSimulatorPackage::play() const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.play)
  return _internal_play();
}
inline void AI2DSimulatorPackage::set_play(const std::string& value) {
  _internal_set_play(value);
  // @@protoc_insertion_point(field_set:AI2DSimulatorPackage.play)
}
inline std::string* AI2DSimulatorPackage::mutable_play() {
  // @@protoc_insertion_point(field_mutable:AI2DSimulatorPackage.play)
  return _internal_mutable_play();
}
inline const std::string& AI2DSimulatorPackage::_internal_play() const {
  return play_.GetNoArena();
}
inline void AI2DSimulatorPackage::_internal_set_play(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  play_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void AI2DSimulatorPackage::set_play(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  play_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:AI2DSimulatorPackage.play)
}
inline void AI2DSimulatorPackage::set_play(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  play_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AI2DSimulatorPackage.play)
}
inline void AI2DSimulatorPackage::set_play(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  play_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AI2DSimulatorPackage.play)
}
inline std::string* AI2DSimulatorPackage::_internal_mutable_play() {
  _has_bits_[0] |= 0x00000001u;
  return play_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* AI2DSimulatorPackage::release_play() {
  // @@protoc_insertion_point(field_release:AI2DSimulatorPackage.play)
  if (!has_play()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return play_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void AI2DSimulatorPackage::set_allocated_play(std::string* play) {
  if (play != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  play_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), play);
  // @@protoc_insertion_point(field_set_allocated:AI2DSimulatorPackage.play)
}

// repeated string world_facts = 4;
inline int AI2DSimulatorPackage::_internal_world_facts_size() const {
  return world_facts_.size();
}
inline int AI2DSimulatorPackage::world_facts_size() const {
  return _internal_world_facts_size();
}
inline void AI2DSimulatorPackage::clear_world_facts() {
  world_facts_.Clear();
}
inline std::string* AI2DSimulatorPackage::add_world_facts() {
  // @@protoc_insertion_point(field_add_mutable:AI2DSimulatorPackage.world_facts)
  return _internal_add_world_facts();
}
inline const std::string& AI2DSimulatorPackage::_internal_world_facts(int index) const {
  return world_facts_.Get(index);
}
inline const std::string& AI2DSimulatorPackage::world_facts(int index) const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.world_facts)
  return _internal_world_facts(index);
}
inline std::string* AI2DSimulatorPackage::mutable_world_facts(int index) {
  // @@protoc_insertion_point(field_mutable:AI2DSimulatorPackage.world_facts)
  return world_facts_.Mutable(index);
}
inline void AI2DSimulatorPackage::set_world_facts(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:AI2DSimulatorPackage.world_facts)
  world_facts_.Mutable(index)->assign(value);
}
inline void AI2DSimulatorPackage::set_world_facts(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:AI2DSimulatorPackage.world_facts)
  world_facts_.Mutable(index)->assign(std::move(value));
}
inline void AI2DSimulatorPackage::set_world_facts(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  world_facts_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:AI2DSimulatorPackage.world_facts)
}
inline void AI2DSimulatorPackage::set_world_facts(int index, const char* value, size_t size) {
  world_facts_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:AI2DSimulatorPackage.world_facts)
}
inline std::string* AI2DSimulatorPackage::_internal_add_world_facts() {
  return world_facts_.Add();
}
inline void AI2DSimulatorPackage::add_world_facts(const std::string& value) {
  world_facts_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:AI2DSimulatorPackage.world_facts)
}
inline void AI2DSimulatorPackage::add_world_facts(std::string&& value) {
  world_facts_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:AI2DSimulatorPackage.world_facts)
}
inline void AI2DSimulatorPackage::add_world_facts(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  world_facts_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:AI2DSimulatorPackage.world_facts)
}
inline void AI2DSimulatorPackage::add_world_facts(const char* value, size_t size) {
  world_facts_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:AI2DSimulatorPackage.world_facts)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
AI2DSimulatorPackage::world_facts() const {
  // @@protoc_insertion_point(field_list:AI2DSimulatorPackage.world_facts)
  return world_facts_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
AI2DSimulatorPackage::mutable_world_facts() {
  // @@protoc_insertion_point(field_mutable_list:AI2DSimulatorPackage.world_facts)
  return &world_facts_;
}

// repeated .AIRobotPackage team = 5;
inline int AI2DSimulatorPackage::_internal_team_size() const {
  return team_.size();
}
inline int AI2DSimulatorPackage::team_size() const {
  return _internal_team_size();
}
inline ::AIRobotPackage* AI2DSimulatorPackage::mutable_team(int index) {
  // @@protoc_insertion_point(field_mutable:AI2DSimulatorPackage.team)
  return team_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AIRobotPackage >*
AI2DSimulatorPackage::mutable_team() {
  // @@protoc_insertion_point(field_mutable_list:AI2DSimulatorPackage.team)
  return &team_;
}
inline const ::AIRobotPackage& AI2DSimulatorPackage::_internal_team(int index) const {
  return team_.Get(index);
}
inline const ::AIRobotPackage& AI2DSimulatorPackage::team(int index) const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.team)
  return _internal_team(index);
}
inline ::AIRobotPackage* AI2DSimulatorPackage::_internal_add_team() {
  return team_.Add();
}
inline ::AIRobotPackage* AI2DSimulatorPackage::add_team() {
  // @@protoc_insertion_point(field_add:AI2DSimulatorPackage.team)
  return _internal_add_team();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AIRobotPackage >&
AI2DSimulatorPackage::team() const {
  // @@protoc_insertion_point(field_list:AI2DSimulatorPackage.team)
  return team_;
}

// repeated .RobotPackage enemy = 6;
inline int AI2DSimulatorPackage::_internal_enemy_size() const {
  return enemy_.size();
}
inline int AI2DSimulatorPackage::enemy_size() const {
  return _internal_enemy_size();
}
inline ::RobotPackage* AI2DSimulatorPackage::mutable_enemy(int index) {
  // @@protoc_insertion_point(field_mutable:AI2DSimulatorPackage.enemy)
  return enemy_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::RobotPackage >*
AI2DSimulatorPackage::mutable_enemy() {
  // @@protoc_insertion_point(field_mutable_list:AI2DSimulatorPackage.enemy)
  return &enemy_;
}
inline const ::RobotPackage& AI2DSimulatorPackage::_internal_enemy(int index) const {
  return enemy_.Get(index);
}
inline const ::RobotPackage& AI2DSimulatorPackage::enemy(int index) const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.enemy)
  return _internal_enemy(index);
}
inline ::RobotPackage* AI2DSimulatorPackage::_internal_add_enemy() {
  return enemy_.Add();
}
inline ::RobotPackage* AI2DSimulatorPackage::add_enemy() {
  // @@protoc_insertion_point(field_add:AI2DSimulatorPackage.enemy)
  return _internal_add_enemy();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::RobotPackage >&
AI2DSimulatorPackage::enemy() const {
  // @@protoc_insertion_point(field_list:AI2DSimulatorPackage.enemy)
  return enemy_;
}

// required .AI2DSimulatorPackage.TeamColor team_color = 7;
inline bool AI2DSimulatorPackage::_internal_has_team_color() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool AI2DSimulatorPackage::has_team_color() const {
  return _internal_has_team_color();
}
inline void AI2DSimulatorPackage::clear_team_color() {
  team_color_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::AI2DSimulatorPackage_TeamColor AI2DSimulatorPackage::_internal_team_color() const {
  return static_cast< ::AI2DSimulatorPackage_TeamColor >(team_color_);
}
inline ::AI2DSimulatorPackage_TeamColor AI2DSimulatorPackage::team_color() const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.team_color)
  return _internal_team_color();
}
inline void AI2DSimulatorPackage::_internal_set_team_color(::AI2DSimulatorPackage_TeamColor value) {
  assert(::AI2DSimulatorPackage_TeamColor_IsValid(value));
  _has_bits_[0] |= 0x00000008u;
  team_color_ = value;
}
inline void AI2DSimulatorPackage::set_team_color(::AI2DSimulatorPackage_TeamColor value) {
  _internal_set_team_color(value);
  // @@protoc_insertion_point(field_set:AI2DSimulatorPackage.team_color)
}

// optional .AI2DSimulatorPackage.FieldSide field_side = 8;
inline bool AI2DSimulatorPackage::_internal_has_field_side() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool AI2DSimulatorPackage::has_field_side() const {
  return _internal_has_field_side();
}
inline void AI2DSimulatorPackage::clear_field_side() {
  field_side_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::AI2DSimulatorPackage_FieldSide AI2DSimulatorPackage::_internal_field_side() const {
  return static_cast< ::AI2DSimulatorPackage_FieldSide >(field_side_);
}
inline ::AI2DSimulatorPackage_FieldSide AI2DSimulatorPackage::field_side() const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.field_side)
  return _internal_field_side();
}
inline void AI2DSimulatorPackage::_internal_set_field_side(::AI2DSimulatorPackage_FieldSide value) {
  assert(::AI2DSimulatorPackage_FieldSide_IsValid(value));
  _has_bits_[0] |= 0x00000010u;
  field_side_ = value;
}
inline void AI2DSimulatorPackage::set_field_side(::AI2DSimulatorPackage_FieldSide value) {
  _internal_set_field_side(value);
  // @@protoc_insertion_point(field_set:AI2DSimulatorPackage.field_side)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AI2DSimulatorPackage_TeamColor> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AI2DSimulatorPackage_TeamColor>() {
  return ::AI2DSimulatorPackage_TeamColor_descriptor();
}
template <> struct is_proto_enum< ::AI2DSimulatorPackage_FieldSide> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AI2DSimulatorPackage_FieldSide>() {
  return ::AI2DSimulatorPackage_FieldSide_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_messages_5fai_5f2Dsimulator_2eproto
