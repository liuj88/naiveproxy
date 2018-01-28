// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/field_mask.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/field_mask.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
class FieldMaskDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<FieldMask> {
} _FieldMask_default_instance_;

namespace protobuf_google_2fprotobuf_2ffield_5fmask_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldMask, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FieldMask, paths_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(FieldMask)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_FieldMask_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/protobuf/field_mask.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _FieldMask_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _FieldMask_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n google/protobuf/field_mask.proto\022\017goog"
      "le.protobuf\"\032\n\tFieldMask\022\r\n\005paths\030\001 \003(\tB"
      "\211\001\n\023com.google.protobufB\016FieldMaskProtoP"
      "\001Z9google.golang.org/genproto/protobuf/f"
      "ield_mask;field_mask\242\002\003GPB\252\002\036Google.Prot"
      "obuf.WellKnownTypesb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 227);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/field_mask.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_google_2fprotobuf_2ffield_5fmask_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FieldMask::kPathsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FieldMask::FieldMask()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fprotobuf_2ffield_5fmask_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.FieldMask)
}
FieldMask::FieldMask(const FieldMask& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      paths_(from.paths_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.FieldMask)
}

void FieldMask::SharedCtor() {
  _cached_size_ = 0;
}

FieldMask::~FieldMask() {
  // @@protoc_insertion_point(destructor:google.protobuf.FieldMask)
  SharedDtor();
}

void FieldMask::SharedDtor() {
}

void FieldMask::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FieldMask::descriptor() {
  protobuf_google_2fprotobuf_2ffield_5fmask_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2ffield_5fmask_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const FieldMask& FieldMask::default_instance() {
  protobuf_google_2fprotobuf_2ffield_5fmask_2eproto::InitDefaults();
  return *internal_default_instance();
}

FieldMask* FieldMask::New(::google::protobuf::Arena* arena) const {
  FieldMask* n = new FieldMask;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FieldMask::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.FieldMask)
  paths_.Clear();
}

bool FieldMask::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.FieldMask)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string paths = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_paths()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->paths(this->paths_size() - 1).data(),
            static_cast<int>(this->paths(this->paths_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.FieldMask.paths"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.FieldMask)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.FieldMask)
  return false;
#undef DO_
}

void FieldMask::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.FieldMask)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string paths = 1;
  for (int i = 0, n = this->paths_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->paths(i).data(), static_cast<int>(this->paths(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.FieldMask.paths");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->paths(i), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.FieldMask)
}

::google::protobuf::uint8* FieldMask::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.FieldMask)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string paths = 1;
  for (int i = 0, n = this->paths_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->paths(i).data(), static_cast<int>(this->paths(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.FieldMask.paths");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->paths(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.FieldMask)
  return target;
}

size_t FieldMask::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.FieldMask)
  size_t total_size = 0;

  // repeated string paths = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->paths_size());
  for (int i = 0, n = this->paths_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->paths(i));
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FieldMask::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.FieldMask)
  GOOGLE_DCHECK_NE(&from, this);
  const FieldMask* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const FieldMask>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.FieldMask)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.FieldMask)
    MergeFrom(*source);
  }
}

void FieldMask::MergeFrom(const FieldMask& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.FieldMask)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  paths_.MergeFrom(from.paths_);
}

void FieldMask::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.FieldMask)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FieldMask::CopyFrom(const FieldMask& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.FieldMask)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FieldMask::IsInitialized() const {
  return true;
}

void FieldMask::Swap(FieldMask* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FieldMask::InternalSwap(FieldMask* other) {
  paths_.InternalSwap(&other->paths_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FieldMask::GetMetadata() const {
  protobuf_google_2fprotobuf_2ffield_5fmask_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2ffield_5fmask_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FieldMask

// repeated string paths = 1;
int FieldMask::paths_size() const {
  return paths_.size();
}
void FieldMask::clear_paths() {
  paths_.Clear();
}
const ::std::string& FieldMask::paths(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldMask.paths)
  return paths_.Get(index);
}
::std::string* FieldMask::mutable_paths(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.FieldMask.paths)
  return paths_.Mutable(index);
}
void FieldMask::set_paths(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.protobuf.FieldMask.paths)
  paths_.Mutable(index)->assign(value);
}
#if LANG_CXX11
void FieldMask::set_paths(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.protobuf.FieldMask.paths)
  paths_.Mutable(index)->assign(std::move(value));
}
#endif
void FieldMask::set_paths(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  paths_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.protobuf.FieldMask.paths)
}
void FieldMask::set_paths(int index, const char* value, size_t size) {
  paths_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FieldMask.paths)
}
::std::string* FieldMask::add_paths() {
  // @@protoc_insertion_point(field_add_mutable:google.protobuf.FieldMask.paths)
  return paths_.Add();
}
void FieldMask::add_paths(const ::std::string& value) {
  paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.protobuf.FieldMask.paths)
}
#if LANG_CXX11
void FieldMask::add_paths(::std::string&& value) {
  paths_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.protobuf.FieldMask.paths)
}
#endif
void FieldMask::add_paths(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.protobuf.FieldMask.paths)
}
void FieldMask::add_paths(const char* value, size_t size) {
  paths_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.protobuf.FieldMask.paths)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
FieldMask::paths() const {
  // @@protoc_insertion_point(field_list:google.protobuf.FieldMask.paths)
  return paths_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
FieldMask::mutable_paths() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.FieldMask.paths)
  return &paths_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
