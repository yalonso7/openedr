// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/money.proto

#include "google/type/money.pb.h"

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
namespace google {
namespace type {
class MoneyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Money> _instance;
} _Money_default_instance_;
}  // namespace type
}  // namespace google
static void InitDefaultsscc_info_Money_google_2ftype_2fmoney_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::type::_Money_default_instance_;
    new (ptr) ::google::type::Money();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::type::Money::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Money_google_2ftype_2fmoney_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Money_google_2ftype_2fmoney_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2ftype_2fmoney_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2ftype_2fmoney_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2ftype_2fmoney_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2ftype_2fmoney_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::type::Money, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::type::Money, currency_code_),
  PROTOBUF_FIELD_OFFSET(::google::type::Money, units_),
  PROTOBUF_FIELD_OFFSET(::google::type::Money, nanos_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::type::Money)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::type::_Money_default_instance_),
};

const char descriptor_table_protodef_google_2ftype_2fmoney_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027google/type/money.proto\022\013google.type\"<"
  "\n\005Money\022\025\n\rcurrency_code\030\001 \001(\t\022\r\n\005units\030"
  "\002 \001(\003\022\r\n\005nanos\030\003 \001(\005B`\n\017com.google.typeB"
  "\nMoneyProtoP\001Z6google.golang.org/genprot"
  "o/googleapis/type/money;money\370\001\001\242\002\003GTPb\006"
  "proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2ftype_2fmoney_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2ftype_2fmoney_2eproto_sccs[1] = {
  &scc_info_Money_google_2ftype_2fmoney_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2ftype_2fmoney_2eproto_once;
static bool descriptor_table_google_2ftype_2fmoney_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2ftype_2fmoney_2eproto = {
  &descriptor_table_google_2ftype_2fmoney_2eproto_initialized, descriptor_table_protodef_google_2ftype_2fmoney_2eproto, "google/type/money.proto", 206,
  &descriptor_table_google_2ftype_2fmoney_2eproto_once, descriptor_table_google_2ftype_2fmoney_2eproto_sccs, descriptor_table_google_2ftype_2fmoney_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_google_2ftype_2fmoney_2eproto::offsets,
  file_level_metadata_google_2ftype_2fmoney_2eproto, 1, file_level_enum_descriptors_google_2ftype_2fmoney_2eproto, file_level_service_descriptors_google_2ftype_2fmoney_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2ftype_2fmoney_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2ftype_2fmoney_2eproto), true);
namespace google {
namespace type {

// ===================================================================

void Money::InitAsDefaultInstance() {
}
class Money::_Internal {
 public:
};

Money::Money()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.type.Money)
}
Money::Money(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.type.Money)
}
Money::Money(const Money& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  currency_code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_currency_code().empty()) {
    currency_code_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_currency_code(),
      GetArenaNoVirtual());
  }
  ::memcpy(&units_, &from.units_,
    static_cast<size_t>(reinterpret_cast<char*>(&nanos_) -
    reinterpret_cast<char*>(&units_)) + sizeof(nanos_));
  // @@protoc_insertion_point(copy_constructor:google.type.Money)
}

void Money::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Money_google_2ftype_2fmoney_2eproto.base);
  currency_code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&units_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&nanos_) -
      reinterpret_cast<char*>(&units_)) + sizeof(nanos_));
}

Money::~Money() {
  // @@protoc_insertion_point(destructor:google.type.Money)
  SharedDtor();
}

void Money::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == nullptr);
  currency_code_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Money::ArenaDtor(void* object) {
  Money* _this = reinterpret_cast< Money* >(object);
  (void)_this;
}
void Money::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Money::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Money& Money::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Money_google_2ftype_2fmoney_2eproto.base);
  return *internal_default_instance();
}


void Money::Clear() {
// @@protoc_insertion_point(message_clear_start:google.type.Money)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  currency_code_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  ::memset(&units_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&nanos_) -
      reinterpret_cast<char*>(&units_)) + sizeof(nanos_));
  _internal_metadata_.Clear();
}

const char* Money::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArenaNoVirtual(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string currency_code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_currency_code(), ptr, ctx, "google.type.Money.currency_code");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 units = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          units_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 nanos = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          nanos_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Money::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.type.Money)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string currency_code = 1;
  if (this->currency_code().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_currency_code().data(), static_cast<int>(this->_internal_currency_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.type.Money.currency_code");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_currency_code(), target);
  }

  // int64 units = 2;
  if (this->units() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(2, this->_internal_units(), target);
  }

  // int32 nanos = 3;
  if (this->nanos() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_nanos(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.type.Money)
  return target;
}

size_t Money::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.type.Money)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string currency_code = 1;
  if (this->currency_code().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_currency_code());
  }

  // int64 units = 2;
  if (this->units() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_units());
  }

  // int32 nanos = 3;
  if (this->nanos() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_nanos());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Money::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.type.Money)
  GOOGLE_DCHECK_NE(&from, this);
  const Money* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Money>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.type.Money)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.type.Money)
    MergeFrom(*source);
  }
}

void Money::MergeFrom(const Money& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.type.Money)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.currency_code().size() > 0) {
    _internal_set_currency_code(from._internal_currency_code());
  }
  if (from.units() != 0) {
    _internal_set_units(from._internal_units());
  }
  if (from.nanos() != 0) {
    _internal_set_nanos(from._internal_nanos());
  }
}

void Money::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.type.Money)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Money::CopyFrom(const Money& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.type.Money)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Money::IsInitialized() const {
  return true;
}

void Money::InternalSwap(Money* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  currency_code_.Swap(&other->currency_code_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(units_, other->units_);
  swap(nanos_, other->nanos_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Money::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace type
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::type::Money* Arena::CreateMaybeMessage< ::google::type::Money >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::type::Money >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
