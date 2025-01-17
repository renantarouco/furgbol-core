// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_ai_2Dsimulator.proto

#ifndef PROTOBUF_messages_5fai_5f2Dsimulator_2eproto__INCLUDED
#define PROTOBUF_messages_5fai_5f2Dsimulator_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "referee.pb.h"
#include "messages_vision_manager.pb.h"
#include "messages_ai_data_manager.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_messages_5fai_5f2Dsimulator_2eproto();
void protobuf_AssignDesc_messages_5fai_5f2Dsimulator_2eproto();
void protobuf_ShutdownFile_messages_5fai_5f2Dsimulator_2eproto();

class AI2DSimulatorPackage;

enum AI2DSimulatorPackage_TeamColor {
  AI2DSimulatorPackage_TeamColor_Yellow = 0,
  AI2DSimulatorPackage_TeamColor_Blue = 1
};
bool AI2DSimulatorPackage_TeamColor_IsValid(int value);
const AI2DSimulatorPackage_TeamColor AI2DSimulatorPackage_TeamColor_TeamColor_MIN = AI2DSimulatorPackage_TeamColor_Yellow;
const AI2DSimulatorPackage_TeamColor AI2DSimulatorPackage_TeamColor_TeamColor_MAX = AI2DSimulatorPackage_TeamColor_Blue;
const int AI2DSimulatorPackage_TeamColor_TeamColor_ARRAYSIZE = AI2DSimulatorPackage_TeamColor_TeamColor_MAX + 1;

const ::google::protobuf::EnumDescriptor* AI2DSimulatorPackage_TeamColor_descriptor();
inline const ::std::string& AI2DSimulatorPackage_TeamColor_Name(AI2DSimulatorPackage_TeamColor value) {
  return ::google::protobuf::internal::NameOfEnum(
    AI2DSimulatorPackage_TeamColor_descriptor(), value);
}
inline bool AI2DSimulatorPackage_TeamColor_Parse(
    const ::std::string& name, AI2DSimulatorPackage_TeamColor* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AI2DSimulatorPackage_TeamColor>(
    AI2DSimulatorPackage_TeamColor_descriptor(), name, value);
}
enum AI2DSimulatorPackage_FieldSide {
  AI2DSimulatorPackage_FieldSide_Left = 0,
  AI2DSimulatorPackage_FieldSide_Right = 1
};
bool AI2DSimulatorPackage_FieldSide_IsValid(int value);
const AI2DSimulatorPackage_FieldSide AI2DSimulatorPackage_FieldSide_FieldSide_MIN = AI2DSimulatorPackage_FieldSide_Left;
const AI2DSimulatorPackage_FieldSide AI2DSimulatorPackage_FieldSide_FieldSide_MAX = AI2DSimulatorPackage_FieldSide_Right;
const int AI2DSimulatorPackage_FieldSide_FieldSide_ARRAYSIZE = AI2DSimulatorPackage_FieldSide_FieldSide_MAX + 1;

const ::google::protobuf::EnumDescriptor* AI2DSimulatorPackage_FieldSide_descriptor();
inline const ::std::string& AI2DSimulatorPackage_FieldSide_Name(AI2DSimulatorPackage_FieldSide value) {
  return ::google::protobuf::internal::NameOfEnum(
    AI2DSimulatorPackage_FieldSide_descriptor(), value);
}
inline bool AI2DSimulatorPackage_FieldSide_Parse(
    const ::std::string& name, AI2DSimulatorPackage_FieldSide* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AI2DSimulatorPackage_FieldSide>(
    AI2DSimulatorPackage_FieldSide_descriptor(), name, value);
}
// ===================================================================

class AI2DSimulatorPackage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:AI2DSimulatorPackage) */ {
 public:
  AI2DSimulatorPackage();
  virtual ~AI2DSimulatorPackage();

  AI2DSimulatorPackage(const AI2DSimulatorPackage& from);

  inline AI2DSimulatorPackage& operator=(const AI2DSimulatorPackage& from) {
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
  static const AI2DSimulatorPackage& default_instance();

  void Swap(AI2DSimulatorPackage* other);

  // implements Message ----------------------------------------------

  inline AI2DSimulatorPackage* New() const { return New(NULL); }

  AI2DSimulatorPackage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AI2DSimulatorPackage& from);
  void MergeFrom(const AI2DSimulatorPackage& from);
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
  void InternalSwap(AI2DSimulatorPackage* other);
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

  typedef AI2DSimulatorPackage_TeamColor TeamColor;
  static const TeamColor Yellow =
    AI2DSimulatorPackage_TeamColor_Yellow;
  static const TeamColor Blue =
    AI2DSimulatorPackage_TeamColor_Blue;
  static inline bool TeamColor_IsValid(int value) {
    return AI2DSimulatorPackage_TeamColor_IsValid(value);
  }
  static const TeamColor TeamColor_MIN =
    AI2DSimulatorPackage_TeamColor_TeamColor_MIN;
  static const TeamColor TeamColor_MAX =
    AI2DSimulatorPackage_TeamColor_TeamColor_MAX;
  static const int TeamColor_ARRAYSIZE =
    AI2DSimulatorPackage_TeamColor_TeamColor_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  TeamColor_descriptor() {
    return AI2DSimulatorPackage_TeamColor_descriptor();
  }
  static inline const ::std::string& TeamColor_Name(TeamColor value) {
    return AI2DSimulatorPackage_TeamColor_Name(value);
  }
  static inline bool TeamColor_Parse(const ::std::string& name,
      TeamColor* value) {
    return AI2DSimulatorPackage_TeamColor_Parse(name, value);
  }

  typedef AI2DSimulatorPackage_FieldSide FieldSide;
  static const FieldSide Left =
    AI2DSimulatorPackage_FieldSide_Left;
  static const FieldSide Right =
    AI2DSimulatorPackage_FieldSide_Right;
  static inline bool FieldSide_IsValid(int value) {
    return AI2DSimulatorPackage_FieldSide_IsValid(value);
  }
  static const FieldSide FieldSide_MIN =
    AI2DSimulatorPackage_FieldSide_FieldSide_MIN;
  static const FieldSide FieldSide_MAX =
    AI2DSimulatorPackage_FieldSide_FieldSide_MAX;
  static const int FieldSide_ARRAYSIZE =
    AI2DSimulatorPackage_FieldSide_FieldSide_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  FieldSide_descriptor() {
    return AI2DSimulatorPackage_FieldSide_descriptor();
  }
  static inline const ::std::string& FieldSide_Name(FieldSide value) {
    return AI2DSimulatorPackage_FieldSide_Name(value);
  }
  static inline bool FieldSide_Parse(const ::std::string& name,
      FieldSide* value) {
    return AI2DSimulatorPackage_FieldSide_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .BallPackage ball = 1;
  bool has_ball() const;
  void clear_ball();
  static const int kBallFieldNumber = 1;
  const ::BallPackage& ball() const;
  ::BallPackage* mutable_ball();
  ::BallPackage* release_ball();
  void set_allocated_ball(::BallPackage* ball);

  // optional .SSL_Referee referee = 2;
  bool has_referee() const;
  void clear_referee();
  static const int kRefereeFieldNumber = 2;
  const ::SSL_Referee& referee() const;
  ::SSL_Referee* mutable_referee();
  ::SSL_Referee* release_referee();
  void set_allocated_referee(::SSL_Referee* referee);

  // optional string play = 3;
  bool has_play() const;
  void clear_play();
  static const int kPlayFieldNumber = 3;
  const ::std::string& play() const;
  void set_play(const ::std::string& value);
  void set_play(const char* value);
  void set_play(const char* value, size_t size);
  ::std::string* mutable_play();
  ::std::string* release_play();
  void set_allocated_play(::std::string* play);

  // repeated string world_facts = 4;
  int world_facts_size() const;
  void clear_world_facts();
  static const int kWorldFactsFieldNumber = 4;
  const ::std::string& world_facts(int index) const;
  ::std::string* mutable_world_facts(int index);
  void set_world_facts(int index, const ::std::string& value);
  void set_world_facts(int index, const char* value);
  void set_world_facts(int index, const char* value, size_t size);
  ::std::string* add_world_facts();
  void add_world_facts(const ::std::string& value);
  void add_world_facts(const char* value);
  void add_world_facts(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& world_facts() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_world_facts();

  // repeated .AIRobotPackage team = 5;
  int team_size() const;
  void clear_team();
  static const int kTeamFieldNumber = 5;
  const ::AIRobotPackage& team(int index) const;
  ::AIRobotPackage* mutable_team(int index);
  ::AIRobotPackage* add_team();
  ::google::protobuf::RepeatedPtrField< ::AIRobotPackage >*
      mutable_team();
  const ::google::protobuf::RepeatedPtrField< ::AIRobotPackage >&
      team() const;

  // repeated .RobotPackage enemy = 6;
  int enemy_size() const;
  void clear_enemy();
  static const int kEnemyFieldNumber = 6;
  const ::RobotPackage& enemy(int index) const;
  ::RobotPackage* mutable_enemy(int index);
  ::RobotPackage* add_enemy();
  ::google::protobuf::RepeatedPtrField< ::RobotPackage >*
      mutable_enemy();
  const ::google::protobuf::RepeatedPtrField< ::RobotPackage >&
      enemy() const;

  // required .AI2DSimulatorPackage.TeamColor team_color = 7;
  bool has_team_color() const;
  void clear_team_color();
  static const int kTeamColorFieldNumber = 7;
  ::AI2DSimulatorPackage_TeamColor team_color() const;
  void set_team_color(::AI2DSimulatorPackage_TeamColor value);

  // optional .AI2DSimulatorPackage.FieldSide field_side = 8;
  bool has_field_side() const;
  void clear_field_side();
  static const int kFieldSideFieldNumber = 8;
  ::AI2DSimulatorPackage_FieldSide field_side() const;
  void set_field_side(::AI2DSimulatorPackage_FieldSide value);

  // @@protoc_insertion_point(class_scope:AI2DSimulatorPackage)
 private:
  inline void set_has_ball();
  inline void clear_has_ball();
  inline void set_has_referee();
  inline void clear_has_referee();
  inline void set_has_play();
  inline void clear_has_play();
  inline void set_has_team_color();
  inline void clear_has_team_color();
  inline void set_has_field_side();
  inline void clear_has_field_side();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::BallPackage* ball_;
  ::SSL_Referee* referee_;
  ::google::protobuf::internal::ArenaStringPtr play_;
  ::google::protobuf::RepeatedPtrField< ::std::string> world_facts_;
  ::google::protobuf::RepeatedPtrField< ::AIRobotPackage > team_;
  ::google::protobuf::RepeatedPtrField< ::RobotPackage > enemy_;
  int team_color_;
  int field_side_;
  friend void  protobuf_AddDesc_messages_5fai_5f2Dsimulator_2eproto();
  friend void protobuf_AssignDesc_messages_5fai_5f2Dsimulator_2eproto();
  friend void protobuf_ShutdownFile_messages_5fai_5f2Dsimulator_2eproto();

  void InitAsDefaultInstance();
  static AI2DSimulatorPackage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// AI2DSimulatorPackage

// optional .BallPackage ball = 1;
inline bool AI2DSimulatorPackage::has_ball() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AI2DSimulatorPackage::set_has_ball() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AI2DSimulatorPackage::clear_has_ball() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AI2DSimulatorPackage::clear_ball() {
  if (ball_ != NULL) ball_->::BallPackage::Clear();
  clear_has_ball();
}
inline const ::BallPackage& AI2DSimulatorPackage::ball() const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.ball)
  return ball_ != NULL ? *ball_ : *default_instance_->ball_;
}
inline ::BallPackage* AI2DSimulatorPackage::mutable_ball() {
  set_has_ball();
  if (ball_ == NULL) {
    ball_ = new ::BallPackage;
  }
  // @@protoc_insertion_point(field_mutable:AI2DSimulatorPackage.ball)
  return ball_;
}
inline ::BallPackage* AI2DSimulatorPackage::release_ball() {
  // @@protoc_insertion_point(field_release:AI2DSimulatorPackage.ball)
  clear_has_ball();
  ::BallPackage* temp = ball_;
  ball_ = NULL;
  return temp;
}
inline void AI2DSimulatorPackage::set_allocated_ball(::BallPackage* ball) {
  delete ball_;
  ball_ = ball;
  if (ball) {
    set_has_ball();
  } else {
    clear_has_ball();
  }
  // @@protoc_insertion_point(field_set_allocated:AI2DSimulatorPackage.ball)
}

// optional .SSL_Referee referee = 2;
inline bool AI2DSimulatorPackage::has_referee() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AI2DSimulatorPackage::set_has_referee() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AI2DSimulatorPackage::clear_has_referee() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AI2DSimulatorPackage::clear_referee() {
  if (referee_ != NULL) referee_->::SSL_Referee::Clear();
  clear_has_referee();
}
inline const ::SSL_Referee& AI2DSimulatorPackage::referee() const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.referee)
  return referee_ != NULL ? *referee_ : *default_instance_->referee_;
}
inline ::SSL_Referee* AI2DSimulatorPackage::mutable_referee() {
  set_has_referee();
  if (referee_ == NULL) {
    referee_ = new ::SSL_Referee;
  }
  // @@protoc_insertion_point(field_mutable:AI2DSimulatorPackage.referee)
  return referee_;
}
inline ::SSL_Referee* AI2DSimulatorPackage::release_referee() {
  // @@protoc_insertion_point(field_release:AI2DSimulatorPackage.referee)
  clear_has_referee();
  ::SSL_Referee* temp = referee_;
  referee_ = NULL;
  return temp;
}
inline void AI2DSimulatorPackage::set_allocated_referee(::SSL_Referee* referee) {
  delete referee_;
  referee_ = referee;
  if (referee) {
    set_has_referee();
  } else {
    clear_has_referee();
  }
  // @@protoc_insertion_point(field_set_allocated:AI2DSimulatorPackage.referee)
}

// optional string play = 3;
inline bool AI2DSimulatorPackage::has_play() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AI2DSimulatorPackage::set_has_play() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AI2DSimulatorPackage::clear_has_play() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AI2DSimulatorPackage::clear_play() {
  play_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_play();
}
inline const ::std::string& AI2DSimulatorPackage::play() const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.play)
  return play_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AI2DSimulatorPackage::set_play(const ::std::string& value) {
  set_has_play();
  play_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AI2DSimulatorPackage.play)
}
inline void AI2DSimulatorPackage::set_play(const char* value) {
  set_has_play();
  play_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AI2DSimulatorPackage.play)
}
inline void AI2DSimulatorPackage::set_play(const char* value, size_t size) {
  set_has_play();
  play_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AI2DSimulatorPackage.play)
}
inline ::std::string* AI2DSimulatorPackage::mutable_play() {
  set_has_play();
  // @@protoc_insertion_point(field_mutable:AI2DSimulatorPackage.play)
  return play_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AI2DSimulatorPackage::release_play() {
  // @@protoc_insertion_point(field_release:AI2DSimulatorPackage.play)
  clear_has_play();
  return play_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AI2DSimulatorPackage::set_allocated_play(::std::string* play) {
  if (play != NULL) {
    set_has_play();
  } else {
    clear_has_play();
  }
  play_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), play);
  // @@protoc_insertion_point(field_set_allocated:AI2DSimulatorPackage.play)
}

// repeated string world_facts = 4;
inline int AI2DSimulatorPackage::world_facts_size() const {
  return world_facts_.size();
}
inline void AI2DSimulatorPackage::clear_world_facts() {
  world_facts_.Clear();
}
inline const ::std::string& AI2DSimulatorPackage::world_facts(int index) const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.world_facts)
  return world_facts_.Get(index);
}
inline ::std::string* AI2DSimulatorPackage::mutable_world_facts(int index) {
  // @@protoc_insertion_point(field_mutable:AI2DSimulatorPackage.world_facts)
  return world_facts_.Mutable(index);
}
inline void AI2DSimulatorPackage::set_world_facts(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:AI2DSimulatorPackage.world_facts)
  world_facts_.Mutable(index)->assign(value);
}
inline void AI2DSimulatorPackage::set_world_facts(int index, const char* value) {
  world_facts_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:AI2DSimulatorPackage.world_facts)
}
inline void AI2DSimulatorPackage::set_world_facts(int index, const char* value, size_t size) {
  world_facts_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:AI2DSimulatorPackage.world_facts)
}
inline ::std::string* AI2DSimulatorPackage::add_world_facts() {
  // @@protoc_insertion_point(field_add_mutable:AI2DSimulatorPackage.world_facts)
  return world_facts_.Add();
}
inline void AI2DSimulatorPackage::add_world_facts(const ::std::string& value) {
  world_facts_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:AI2DSimulatorPackage.world_facts)
}
inline void AI2DSimulatorPackage::add_world_facts(const char* value) {
  world_facts_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:AI2DSimulatorPackage.world_facts)
}
inline void AI2DSimulatorPackage::add_world_facts(const char* value, size_t size) {
  world_facts_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:AI2DSimulatorPackage.world_facts)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
AI2DSimulatorPackage::world_facts() const {
  // @@protoc_insertion_point(field_list:AI2DSimulatorPackage.world_facts)
  return world_facts_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
AI2DSimulatorPackage::mutable_world_facts() {
  // @@protoc_insertion_point(field_mutable_list:AI2DSimulatorPackage.world_facts)
  return &world_facts_;
}

// repeated .AIRobotPackage team = 5;
inline int AI2DSimulatorPackage::team_size() const {
  return team_.size();
}
inline void AI2DSimulatorPackage::clear_team() {
  team_.Clear();
}
inline const ::AIRobotPackage& AI2DSimulatorPackage::team(int index) const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.team)
  return team_.Get(index);
}
inline ::AIRobotPackage* AI2DSimulatorPackage::mutable_team(int index) {
  // @@protoc_insertion_point(field_mutable:AI2DSimulatorPackage.team)
  return team_.Mutable(index);
}
inline ::AIRobotPackage* AI2DSimulatorPackage::add_team() {
  // @@protoc_insertion_point(field_add:AI2DSimulatorPackage.team)
  return team_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::AIRobotPackage >*
AI2DSimulatorPackage::mutable_team() {
  // @@protoc_insertion_point(field_mutable_list:AI2DSimulatorPackage.team)
  return &team_;
}
inline const ::google::protobuf::RepeatedPtrField< ::AIRobotPackage >&
AI2DSimulatorPackage::team() const {
  // @@protoc_insertion_point(field_list:AI2DSimulatorPackage.team)
  return team_;
}

// repeated .RobotPackage enemy = 6;
inline int AI2DSimulatorPackage::enemy_size() const {
  return enemy_.size();
}
inline void AI2DSimulatorPackage::clear_enemy() {
  enemy_.Clear();
}
inline const ::RobotPackage& AI2DSimulatorPackage::enemy(int index) const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.enemy)
  return enemy_.Get(index);
}
inline ::RobotPackage* AI2DSimulatorPackage::mutable_enemy(int index) {
  // @@protoc_insertion_point(field_mutable:AI2DSimulatorPackage.enemy)
  return enemy_.Mutable(index);
}
inline ::RobotPackage* AI2DSimulatorPackage::add_enemy() {
  // @@protoc_insertion_point(field_add:AI2DSimulatorPackage.enemy)
  return enemy_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::RobotPackage >*
AI2DSimulatorPackage::mutable_enemy() {
  // @@protoc_insertion_point(field_mutable_list:AI2DSimulatorPackage.enemy)
  return &enemy_;
}
inline const ::google::protobuf::RepeatedPtrField< ::RobotPackage >&
AI2DSimulatorPackage::enemy() const {
  // @@protoc_insertion_point(field_list:AI2DSimulatorPackage.enemy)
  return enemy_;
}

// required .AI2DSimulatorPackage.TeamColor team_color = 7;
inline bool AI2DSimulatorPackage::has_team_color() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void AI2DSimulatorPackage::set_has_team_color() {
  _has_bits_[0] |= 0x00000040u;
}
inline void AI2DSimulatorPackage::clear_has_team_color() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void AI2DSimulatorPackage::clear_team_color() {
  team_color_ = 0;
  clear_has_team_color();
}
inline ::AI2DSimulatorPackage_TeamColor AI2DSimulatorPackage::team_color() const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.team_color)
  return static_cast< ::AI2DSimulatorPackage_TeamColor >(team_color_);
}
inline void AI2DSimulatorPackage::set_team_color(::AI2DSimulatorPackage_TeamColor value) {
  assert(::AI2DSimulatorPackage_TeamColor_IsValid(value));
  set_has_team_color();
  team_color_ = value;
  // @@protoc_insertion_point(field_set:AI2DSimulatorPackage.team_color)
}

// optional .AI2DSimulatorPackage.FieldSide field_side = 8;
inline bool AI2DSimulatorPackage::has_field_side() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void AI2DSimulatorPackage::set_has_field_side() {
  _has_bits_[0] |= 0x00000080u;
}
inline void AI2DSimulatorPackage::clear_has_field_side() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void AI2DSimulatorPackage::clear_field_side() {
  field_side_ = 0;
  clear_has_field_side();
}
inline ::AI2DSimulatorPackage_FieldSide AI2DSimulatorPackage::field_side() const {
  // @@protoc_insertion_point(field_get:AI2DSimulatorPackage.field_side)
  return static_cast< ::AI2DSimulatorPackage_FieldSide >(field_side_);
}
inline void AI2DSimulatorPackage::set_field_side(::AI2DSimulatorPackage_FieldSide value) {
  assert(::AI2DSimulatorPackage_FieldSide_IsValid(value));
  set_has_field_side();
  field_side_ = value;
  // @@protoc_insertion_point(field_set:AI2DSimulatorPackage.field_side)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::AI2DSimulatorPackage_TeamColor> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AI2DSimulatorPackage_TeamColor>() {
  return ::AI2DSimulatorPackage_TeamColor_descriptor();
}
template <> struct is_proto_enum< ::AI2DSimulatorPackage_FieldSide> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AI2DSimulatorPackage_FieldSide>() {
  return ::AI2DSimulatorPackage_FieldSide_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_messages_5fai_5f2Dsimulator_2eproto__INCLUDED
