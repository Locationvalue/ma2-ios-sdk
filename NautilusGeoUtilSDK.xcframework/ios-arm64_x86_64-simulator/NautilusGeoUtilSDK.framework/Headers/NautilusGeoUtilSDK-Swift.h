#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef NAUTILUSGEOUTILSDK_SWIFT_H
#define NAUTILUSGEOUTILSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import NautilusContainerSDK;
@import NautilusCoreSDK;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusGeoUtilSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
/// <code>NautilusGeoUtil</code>のエラー定義
typedef SWIFT_ENUM(NSInteger, GeoUtilApiError, open) {
/// 不明
  GeoUtilApiErrorUnknown = 0,
/// 接続エラー
  GeoUtilApiErrorConnection = 1,
/// API処理エラー
  GeoUtilApiErrorApiProcessError = 2,
/// HTTP/HTTPS通信エラー
  GeoUtilApiErrorHttpConnection = 3,
/// レスポンスのパースエラー
  GeoUtilApiErrorParseFailure = 4,
/// 明示的にユーザーによりキャンセルされた
  GeoUtilApiErrorUserCancelled = 5,
/// 不正なパラメータ
  GeoUtilApiErrorInvalidParamater = 6,
/// 不正なインスタンス
  GeoUtilApiErrorInvalidInstance = 7,
};
static NSString * _Nonnull const GeoUtilApiErrorDomain = @"NautilusGeoUtilSDK.GeoUtilApiError";

@class NSString;
@class NautilusApp;
@class NautilusComponentDependency;
enum NautilusPrefectureCode : NSInteger;
@class NautilusMunicipalityCode;
@class NSError;

/// アプリとのインターフェースクラス：都道府県、市区町村情報
SWIFT_CLASS("_TtC18NautilusGeoUtilSDK15NautilusGeoUtil")
@interface NautilusGeoUtil : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) NautilusApp * _Nonnull app;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, copy) NSString * _Nullable name;
/// <code>NautilusGeoUtilSDK</code>の機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application;
+ (NautilusGeoUtil * _Nonnull)geoUtil SWIFT_WARN_UNUSED_RESULT;
+ (NautilusGeoUtil * _Nonnull)geoUtilAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
/// 市区町村データを取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param prefectureCode データを取得する都道府県
///
/// \param completion 市区町村データまたはエラー情報
///
- (void)getMunicipalityListWithPrefectureCode:(enum NautilusPrefectureCode)prefectureCode completion:(void (^ _Nonnull)(NSArray<NautilusMunicipalityCode *> * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// 市区町村データ
SWIFT_CLASS("_TtC18NautilusGeoUtilSDK24NautilusMunicipalityCode")
@interface NautilusMunicipalityCode : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// 都道府県情報の定義
/// 以下のものを定義した定数
/// <ul>
///   <li>
///     JIS X 0401で定義された都道府県コード
///   </li>
///   <li>
///     都道府県名
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, NautilusPrefectureCode, open) {
/// 北海道
  NautilusPrefectureCodeHokkaido = 0,
/// 青森県
  NautilusPrefectureCodeAomori = 1,
/// 岩手県
  NautilusPrefectureCodeIwate = 2,
/// 宮城県
  NautilusPrefectureCodeMiyagi = 3,
/// 秋田県
  NautilusPrefectureCodeAkita = 4,
/// 山形県
  NautilusPrefectureCodeYamagata = 5,
/// 福島県
  NautilusPrefectureCodeFukushima = 6,
/// 茨城県
  NautilusPrefectureCodeIbaraki = 7,
/// 栃木県
  NautilusPrefectureCodeTochigi = 8,
/// 群馬県
  NautilusPrefectureCodeGunma = 9,
/// 埼玉県
  NautilusPrefectureCodeSaitama = 10,
/// 千葉県
  NautilusPrefectureCodeChiba = 11,
/// 東京都
  NautilusPrefectureCodeTokyo = 12,
/// 神奈川県
  NautilusPrefectureCodeKanagawa = 13,
/// 新潟県
  NautilusPrefectureCodeNiigata = 14,
/// 富山県
  NautilusPrefectureCodeToyama = 15,
/// 石川県
  NautilusPrefectureCodeIshikawa = 16,
/// 福井県
  NautilusPrefectureCodeFukui = 17,
/// 山梨県
  NautilusPrefectureCodeYamanashi = 18,
/// 長野県
  NautilusPrefectureCodeNagano = 19,
/// 岐阜県
  NautilusPrefectureCodeGifu = 20,
/// 静岡県
  NautilusPrefectureCodeShizuoka = 21,
/// 愛知県
  NautilusPrefectureCodeAichi = 22,
/// 三重県
  NautilusPrefectureCodeMie = 23,
/// 滋賀県
  NautilusPrefectureCodeShiga = 24,
/// 京都府
  NautilusPrefectureCodeKyoto = 25,
/// 大阪府
  NautilusPrefectureCodeOsaka = 26,
/// 兵庫県
  NautilusPrefectureCodeHyogo = 27,
/// 奈良県
  NautilusPrefectureCodeNara = 28,
/// 和歌山県
  NautilusPrefectureCodeWakayama = 29,
/// 鳥取県
  NautilusPrefectureCodeTottori = 30,
/// 島根県
  NautilusPrefectureCodeShimane = 31,
/// 岡山県
  NautilusPrefectureCodeOkayama = 32,
/// 広島県
  NautilusPrefectureCodeHiroshima = 33,
/// 山口県
  NautilusPrefectureCodeYamaguchi = 34,
/// 徳島県
  NautilusPrefectureCodeTokushima = 35,
/// 香川県
  NautilusPrefectureCodeKagawa = 36,
/// 愛媛県
  NautilusPrefectureCodeEhime = 37,
/// 高知県
  NautilusPrefectureCodeKochi = 38,
/// 福岡県
  NautilusPrefectureCodeFukuoka = 39,
/// 佐賀県
  NautilusPrefectureCodeSaga = 40,
/// 長崎県
  NautilusPrefectureCodeNagasaki = 41,
/// 熊本県
  NautilusPrefectureCodeKumamoto = 42,
/// 大分県
  NautilusPrefectureCodeOita = 43,
/// 宮崎県
  NautilusPrefectureCodeMiyazaki = 44,
/// 鹿児島県
  NautilusPrefectureCodeKagoshima = 45,
/// 沖縄県
  NautilusPrefectureCodeOkinawa = 46,
/// その他
/// 「その他」は、JIS X 0401で定義されていないが、運用などで必要になる場合があるため定義している
  NautilusPrefectureCodeOther = 47,
};

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef NAUTILUSGEOUTILSDK_SWIFT_H
#define NAUTILUSGEOUTILSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import NautilusContainerSDK;
@import NautilusCoreSDK;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusGeoUtilSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
/// <code>NautilusGeoUtil</code>のエラー定義
typedef SWIFT_ENUM(NSInteger, GeoUtilApiError, open) {
/// 不明
  GeoUtilApiErrorUnknown = 0,
/// 接続エラー
  GeoUtilApiErrorConnection = 1,
/// API処理エラー
  GeoUtilApiErrorApiProcessError = 2,
/// HTTP/HTTPS通信エラー
  GeoUtilApiErrorHttpConnection = 3,
/// レスポンスのパースエラー
  GeoUtilApiErrorParseFailure = 4,
/// 明示的にユーザーによりキャンセルされた
  GeoUtilApiErrorUserCancelled = 5,
/// 不正なパラメータ
  GeoUtilApiErrorInvalidParamater = 6,
/// 不正なインスタンス
  GeoUtilApiErrorInvalidInstance = 7,
};
static NSString * _Nonnull const GeoUtilApiErrorDomain = @"NautilusGeoUtilSDK.GeoUtilApiError";

@class NSString;
@class NautilusApp;
@class NautilusComponentDependency;
enum NautilusPrefectureCode : NSInteger;
@class NautilusMunicipalityCode;
@class NSError;

/// アプリとのインターフェースクラス：都道府県、市区町村情報
SWIFT_CLASS("_TtC18NautilusGeoUtilSDK15NautilusGeoUtil")
@interface NautilusGeoUtil : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) NautilusApp * _Nonnull app;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, copy) NSString * _Nullable name;
/// <code>NautilusGeoUtilSDK</code>の機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application;
+ (NautilusGeoUtil * _Nonnull)geoUtil SWIFT_WARN_UNUSED_RESULT;
+ (NautilusGeoUtil * _Nonnull)geoUtilAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
/// 市区町村データを取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param prefectureCode データを取得する都道府県
///
/// \param completion 市区町村データまたはエラー情報
///
- (void)getMunicipalityListWithPrefectureCode:(enum NautilusPrefectureCode)prefectureCode completion:(void (^ _Nonnull)(NSArray<NautilusMunicipalityCode *> * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// 市区町村データ
SWIFT_CLASS("_TtC18NautilusGeoUtilSDK24NautilusMunicipalityCode")
@interface NautilusMunicipalityCode : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// 都道府県情報の定義
/// 以下のものを定義した定数
/// <ul>
///   <li>
///     JIS X 0401で定義された都道府県コード
///   </li>
///   <li>
///     都道府県名
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, NautilusPrefectureCode, open) {
/// 北海道
  NautilusPrefectureCodeHokkaido = 0,
/// 青森県
  NautilusPrefectureCodeAomori = 1,
/// 岩手県
  NautilusPrefectureCodeIwate = 2,
/// 宮城県
  NautilusPrefectureCodeMiyagi = 3,
/// 秋田県
  NautilusPrefectureCodeAkita = 4,
/// 山形県
  NautilusPrefectureCodeYamagata = 5,
/// 福島県
  NautilusPrefectureCodeFukushima = 6,
/// 茨城県
  NautilusPrefectureCodeIbaraki = 7,
/// 栃木県
  NautilusPrefectureCodeTochigi = 8,
/// 群馬県
  NautilusPrefectureCodeGunma = 9,
/// 埼玉県
  NautilusPrefectureCodeSaitama = 10,
/// 千葉県
  NautilusPrefectureCodeChiba = 11,
/// 東京都
  NautilusPrefectureCodeTokyo = 12,
/// 神奈川県
  NautilusPrefectureCodeKanagawa = 13,
/// 新潟県
  NautilusPrefectureCodeNiigata = 14,
/// 富山県
  NautilusPrefectureCodeToyama = 15,
/// 石川県
  NautilusPrefectureCodeIshikawa = 16,
/// 福井県
  NautilusPrefectureCodeFukui = 17,
/// 山梨県
  NautilusPrefectureCodeYamanashi = 18,
/// 長野県
  NautilusPrefectureCodeNagano = 19,
/// 岐阜県
  NautilusPrefectureCodeGifu = 20,
/// 静岡県
  NautilusPrefectureCodeShizuoka = 21,
/// 愛知県
  NautilusPrefectureCodeAichi = 22,
/// 三重県
  NautilusPrefectureCodeMie = 23,
/// 滋賀県
  NautilusPrefectureCodeShiga = 24,
/// 京都府
  NautilusPrefectureCodeKyoto = 25,
/// 大阪府
  NautilusPrefectureCodeOsaka = 26,
/// 兵庫県
  NautilusPrefectureCodeHyogo = 27,
/// 奈良県
  NautilusPrefectureCodeNara = 28,
/// 和歌山県
  NautilusPrefectureCodeWakayama = 29,
/// 鳥取県
  NautilusPrefectureCodeTottori = 30,
/// 島根県
  NautilusPrefectureCodeShimane = 31,
/// 岡山県
  NautilusPrefectureCodeOkayama = 32,
/// 広島県
  NautilusPrefectureCodeHiroshima = 33,
/// 山口県
  NautilusPrefectureCodeYamaguchi = 34,
/// 徳島県
  NautilusPrefectureCodeTokushima = 35,
/// 香川県
  NautilusPrefectureCodeKagawa = 36,
/// 愛媛県
  NautilusPrefectureCodeEhime = 37,
/// 高知県
  NautilusPrefectureCodeKochi = 38,
/// 福岡県
  NautilusPrefectureCodeFukuoka = 39,
/// 佐賀県
  NautilusPrefectureCodeSaga = 40,
/// 長崎県
  NautilusPrefectureCodeNagasaki = 41,
/// 熊本県
  NautilusPrefectureCodeKumamoto = 42,
/// 大分県
  NautilusPrefectureCodeOita = 43,
/// 宮崎県
  NautilusPrefectureCodeMiyazaki = 44,
/// 鹿児島県
  NautilusPrefectureCodeKagoshima = 45,
/// 沖縄県
  NautilusPrefectureCodeOkinawa = 46,
/// その他
/// 「その他」は、JIS X 0401で定義されていないが、運用などで必要になる場合があるため定義している
  NautilusPrefectureCodeOther = 47,
};

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
