// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#include "test.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace test {
PROTOBUF_CONSTEXPR Test::Test(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.a_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.c_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.b_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct TestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TestDefaultTypeInternal() {}
  union {
    Test _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TestDefaultTypeInternal _Test_default_instance_;
}  // namespace test
static ::_pb::Metadata file_level_metadata_test_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_test_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_test_2eproto = nullptr;

const uint32_t TableStruct_test_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::test::Test, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::test::Test, _impl_.a_),
  PROTOBUF_FIELD_OFFSET(::test::Test, _impl_.b_),
  PROTOBUF_FIELD_OFFSET(::test::Test, _impl_.c_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::test::Test)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::test::_Test_default_instance_._instance,
};

const char descriptor_table_protodef_test_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\ntest.proto\022\004test\032 google/protobuf/desc"
  "riptor.proto\"S\n\004Test\022\026\n\001a\030\001 \001(\tB\013\202\265\030\007Fie"
  "ld a\022\026\n\001b\030\002 \001(\005B\013\202\265\030\007Field b\022\t\n\001c\030\003 \001(\t:"
  "\020\212\265\030\014Message Test:5\n\014field_option\022\035.goog"
  "le.protobuf.FieldOptions\030\320\206\003 \001(\t:9\n\016mess"
  "age_option\022\037.google.protobuf.MessageOpti"
  "ons\030\321\206\003 \001(\tb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_test_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::_pbi::once_flag descriptor_table_test_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_test_2eproto = {
    false, false, 259, descriptor_table_protodef_test_2eproto,
    "test.proto",
    &descriptor_table_test_2eproto_once, descriptor_table_test_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_test_2eproto::offsets,
    file_level_metadata_test_2eproto, file_level_enum_descriptors_test_2eproto,
    file_level_service_descriptors_test_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_test_2eproto_getter() {
  return &descriptor_table_test_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_test_2eproto(&descriptor_table_test_2eproto);
namespace test {

// ===================================================================

class Test::_Internal {
 public:
};

Test::Test(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:test.Test)
}
Test::Test(const Test& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Test* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.a_){}
    , decltype(_impl_.c_){}
    , decltype(_impl_.b_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.a_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.a_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_a().empty()) {
    _this->_impl_.a_.Set(from._internal_a(), 
      _this->GetArenaForAllocation());
  }
  _impl_.c_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.c_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_c().empty()) {
    _this->_impl_.c_.Set(from._internal_c(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.b_ = from._impl_.b_;
  // @@protoc_insertion_point(copy_constructor:test.Test)
}

inline void Test::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.a_){}
    , decltype(_impl_.c_){}
    , decltype(_impl_.b_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.a_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.a_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.c_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.c_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Test::~Test() {
  // @@protoc_insertion_point(destructor:test.Test)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Test::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.a_.Destroy();
  _impl_.c_.Destroy();
}

void Test::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Test::Clear() {
// @@protoc_insertion_point(message_clear_start:test.Test)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.a_.ClearToEmpty();
  _impl_.c_.ClearToEmpty();
  _impl_.b_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Test::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string a = 1 [(.test.field_option) = "Field a"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_a();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "test.Test.a"));
        } else
          goto handle_unusual;
        continue;
      // int32 b = 2 [(.test.field_option) = "Field b"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.b_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string c = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_c();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "test.Test.c"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Test::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:test.Test)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string a = 1 [(.test.field_option) = "Field a"];
  if (!this->_internal_a().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_a().data(), static_cast<int>(this->_internal_a().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "test.Test.a");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_a(), target);
  }

  // int32 b = 2 [(.test.field_option) = "Field b"];
  if (this->_internal_b() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_b(), target);
  }

  // string c = 3;
  if (!this->_internal_c().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_c().data(), static_cast<int>(this->_internal_c().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "test.Test.c");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_c(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:test.Test)
  return target;
}

size_t Test::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:test.Test)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string a = 1 [(.test.field_option) = "Field a"];
  if (!this->_internal_a().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_a());
  }

  // string c = 3;
  if (!this->_internal_c().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_c());
  }

  // int32 b = 2 [(.test.field_option) = "Field b"];
  if (this->_internal_b() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_b());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Test::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Test::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Test::GetClassData() const { return &_class_data_; }


void Test::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Test*>(&to_msg);
  auto& from = static_cast<const Test&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:test.Test)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_a().empty()) {
    _this->_internal_set_a(from._internal_a());
  }
  if (!from._internal_c().empty()) {
    _this->_internal_set_c(from._internal_c());
  }
  if (from._internal_b() != 0) {
    _this->_internal_set_b(from._internal_b());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Test::CopyFrom(const Test& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:test.Test)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Test::IsInitialized() const {
  return true;
}

void Test::InternalSwap(Test* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.a_, lhs_arena,
      &other->_impl_.a_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.c_, lhs_arena,
      &other->_impl_.c_, rhs_arena
  );
  swap(_impl_.b_, other->_impl_.b_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Test::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_test_2eproto_getter, &descriptor_table_test_2eproto_once,
      file_level_metadata_test_2eproto[0]);
}
const std::string field_option_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false>
  field_option(kFieldOptionFieldNumber, field_option_default, nullptr);
const std::string message_option_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false>
  message_option(kMessageOptionFieldNumber, message_option_default, nullptr);

// @@protoc_insertion_point(namespace_scope)
}  // namespace test
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::test::Test*
Arena::CreateMaybeMessage< ::test::Test >(Arena* arena) {
  return Arena::CreateMessageInternal< ::test::Test >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
