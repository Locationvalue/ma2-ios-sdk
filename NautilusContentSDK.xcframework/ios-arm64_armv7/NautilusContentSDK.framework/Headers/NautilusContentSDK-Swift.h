#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.5.2 (swiftlang-1300.0.47.5 clang-1300.0.29.30)
#ifndef NAUTILUSCONTENTSDK_SWIFT_H
#define NAUTILUSCONTENTSDK_SWIFT_H
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

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

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
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import NautilusContainerSDK;
@import NautilusCoreSDK;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusContentSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



@class NSString;
@class NautilusComponentDependency;
@class NautilusApp;
@class UIViewController;
@class NSNumber;
enum NautilusContentType : NSInteger;
@class NautilusContentSortKey;
@class NSDate;
@class NautilusContentInfo;
@class NSError;
@class NautilusContentCategoryInfo;

/// アプリとのインターフェース
SWIFT_CLASS("_TtC18NautilusContentSDK15NautilusContent")
@interface NautilusContent : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application;
+ (NautilusContent * _Nonnull)content SWIFT_WARN_UNUSED_RESULT;
+ (NautilusContent * _Nonnull)shopAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
/// コンテンツ一覧VCを返す
- (UIViewController * _Nonnull)instantiateContentListViewController SWIFT_WARN_UNUSED_RESULT;
/// お気に入りコンテンツVCを返す
- (UIViewController * _Nonnull)instantiateFavoriteContentListViewController SWIFT_WARN_UNUSED_RESULT;
/// コンテンツ詳細VCを返す
- (UIViewController * _Nonnull)instantiateContentDetailViewControllerWithContentID:(NSInteger)contentID contentType:(enum NautilusContentType)contentType SWIFT_WARN_UNUSED_RESULT;
/// 共通コンテンツ一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getCommonContentListWithOffset:(NSInteger)offset limit:(NSInteger)limit useCache:(BOOL)useCache contentIDs:(NSArray<NSNumber *> * _Nullable)contentIDs categoryIDs:(NSArray<NSNumber *> * _Nullable)categoryIDs sortKeys:(NSArray<NautilusContentSortKey *> * _Nullable)sortKeys checkDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSArray<NautilusContentInfo *> * _Nullable, NSError * _Nullable))completion;
/// 共通コンテンツの件数を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getCommonContentCountWithCheckDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSInteger, NSError * _Nullable))completion;
/// 個人別コンテンツ一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getPrivateContentListWithOffset:(NSInteger)offset limit:(NSInteger)limit useCache:(BOOL)useCache contentIDs:(NSArray<NSNumber *> * _Nullable)contentIDs categoryIDs:(NSArray<NSNumber *> * _Nullable)categoryIDs sortKeys:(NSArray<NautilusContentSortKey *> * _Nullable)sortKeys checkDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSArray<NautilusContentInfo *> * _Nullable, NSError * _Nullable))completion;
/// 個人別コンテンツの件数を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getPrivateContentCountWithCheckDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSInteger, NSError * _Nullable))completion;
/// お気に入り店舗コンテンツ一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getFavoriteShopContentListWithOffset:(NSInteger)offset limit:(NSInteger)limit useCache:(BOOL)useCache contentIDs:(NSArray<NSNumber *> * _Nullable)contentIDs categoryIDs:(NSArray<NSNumber *> * _Nullable)categoryIDs sortKeys:(NSArray<NautilusContentSortKey *> * _Nullable)sortKeys checkDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSArray<NautilusContentInfo *> * _Nullable, NSError * _Nullable))completion;
/// お気に入り店舗コンテンツの件数を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getFavoriteShopContentCountWithCheckDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSInteger, NSError * _Nullable))completion;
/// お気に入りコンテンツ登録、削除を行う
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)updateFavoriteWithAddFavoriteContentIDs:(NSArray<NSNumber *> * _Nullable)addFavoriteContentIDs removeFavoriteContentIDs:(NSArray<NSNumber *> * _Nullable)removeFavoriteContentIDs completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// お気に入りコンテンツの一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getFavoriteContentListWithCompletion:(void (^ _Nonnull)(NSArray<NautilusContentInfo *> * _Nullable, NSError * _Nullable))completion;
/// コンテンツカテゴリー一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getContentCategoryListWithCompletion:(void (^ _Nonnull)(NSArray<NautilusContentCategoryInfo *> * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// コンテンツカテゴリーのデータ
SWIFT_CLASS("_TtC18NautilusContentSDK27NautilusContentCategoryInfo")
@interface NautilusContentCategoryInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, NautilusContentError, open) {
/// 不明
  NautilusContentErrorUnknown = 0,
/// 接続エラー
  NautilusContentErrorConnection = 1,
/// API処理エラー
  NautilusContentErrorApiProcessError = 2,
/// HTTP/HTTPS通信エラー
  NautilusContentErrorHttpConnection = 3,
/// レスポンスのパースエラー
  NautilusContentErrorParseFailure = 4,
/// 明示的にユーザーによりキャンセルされた
  NautilusContentErrorUserCancelled = 5,
  NautilusContentErrorInvalidParamater = 6,
};
static NSString * _Nonnull const NautilusContentErrorDomain = @"NautilusContentSDK.NautilusContentError";


/// コンテンツ画像一覧
SWIFT_CLASS("_TtC18NautilusContentSDK20NautilusContentImage")
@interface NautilusContentImage : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// MA 2.0 コンテンツのデータ
SWIFT_CLASS("_TtC18NautilusContentSDK19NautilusContentInfo")
@interface NautilusContentInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// コンテンツ閲覧APIに引き渡すパラメーター
SWIFT_CLASS("_TtC18NautilusContentSDK18NautilusContentLog")
@interface NautilusContentLog : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// コンテンツ閲覧APIで記録するログ種別
typedef SWIFT_ENUM(NSInteger, NautilusContentLogType, open) {
/// 1:詳細
  NautilusContentLogTypeDetail = 0,
/// 2:URLタップ
  NautilusContentLogTypeUrl = 1,
};


/// APIから取得するコンテンツデータの並び順
SWIFT_CLASS("_TtC18NautilusContentSDK22NautilusContentSortKey")
@interface NautilusContentSortKey : NSObject
/// 引数なし初期化は禁止
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// APIから取得するデータの並び順のキー名
typedef SWIFT_ENUM(NSInteger, NautilusContentSortKeyName, open) {
/// 掲載開始日時
  NautilusContentSortKeyNamePublishStartDateTime = 0,
/// 掲載終了日時
  NautilusContentSortKeyNamePublishEndDateTime = 1,
/// 表示優先順位
  NautilusContentSortKeyNameSortNumber = 2,
};

/// APIから取得するデータの並び順の順序指定
typedef SWIFT_ENUM(NSInteger, NautilusContentSortKeyOrder, open) {
/// 昇順
  NautilusContentSortKeyOrderAscending = 0,
/// 降順
  NautilusContentSortKeyOrderDescending = 1,
};

/// コンテンツタイプ
/// コンテンツ種別 1:全体 2:個人別 3:店舗別
typedef SWIFT_ENUM(NSInteger, NautilusContentType, open) {
  NautilusContentTypeCommon = 0,
  NautilusContentTypePrivate = 1,
  NautilusContentTypeFavoriteShop = 2,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.5.2 (swiftlang-1300.0.47.5 clang-1300.0.29.30)
#ifndef NAUTILUSCONTENTSDK_SWIFT_H
#define NAUTILUSCONTENTSDK_SWIFT_H
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

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

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
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import NautilusContainerSDK;
@import NautilusCoreSDK;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusContentSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



@class NSString;
@class NautilusComponentDependency;
@class NautilusApp;
@class UIViewController;
@class NSNumber;
enum NautilusContentType : NSInteger;
@class NautilusContentSortKey;
@class NSDate;
@class NautilusContentInfo;
@class NSError;
@class NautilusContentCategoryInfo;

/// アプリとのインターフェース
SWIFT_CLASS("_TtC18NautilusContentSDK15NautilusContent")
@interface NautilusContent : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application;
+ (NautilusContent * _Nonnull)content SWIFT_WARN_UNUSED_RESULT;
+ (NautilusContent * _Nonnull)shopAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
/// コンテンツ一覧VCを返す
- (UIViewController * _Nonnull)instantiateContentListViewController SWIFT_WARN_UNUSED_RESULT;
/// お気に入りコンテンツVCを返す
- (UIViewController * _Nonnull)instantiateFavoriteContentListViewController SWIFT_WARN_UNUSED_RESULT;
/// コンテンツ詳細VCを返す
- (UIViewController * _Nonnull)instantiateContentDetailViewControllerWithContentID:(NSInteger)contentID contentType:(enum NautilusContentType)contentType SWIFT_WARN_UNUSED_RESULT;
/// 共通コンテンツ一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getCommonContentListWithOffset:(NSInteger)offset limit:(NSInteger)limit useCache:(BOOL)useCache contentIDs:(NSArray<NSNumber *> * _Nullable)contentIDs categoryIDs:(NSArray<NSNumber *> * _Nullable)categoryIDs sortKeys:(NSArray<NautilusContentSortKey *> * _Nullable)sortKeys checkDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSArray<NautilusContentInfo *> * _Nullable, NSError * _Nullable))completion;
/// 共通コンテンツの件数を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getCommonContentCountWithCheckDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSInteger, NSError * _Nullable))completion;
/// 個人別コンテンツ一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getPrivateContentListWithOffset:(NSInteger)offset limit:(NSInteger)limit useCache:(BOOL)useCache contentIDs:(NSArray<NSNumber *> * _Nullable)contentIDs categoryIDs:(NSArray<NSNumber *> * _Nullable)categoryIDs sortKeys:(NSArray<NautilusContentSortKey *> * _Nullable)sortKeys checkDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSArray<NautilusContentInfo *> * _Nullable, NSError * _Nullable))completion;
/// 個人別コンテンツの件数を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getPrivateContentCountWithCheckDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSInteger, NSError * _Nullable))completion;
/// お気に入り店舗コンテンツ一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getFavoriteShopContentListWithOffset:(NSInteger)offset limit:(NSInteger)limit useCache:(BOOL)useCache contentIDs:(NSArray<NSNumber *> * _Nullable)contentIDs categoryIDs:(NSArray<NSNumber *> * _Nullable)categoryIDs sortKeys:(NSArray<NautilusContentSortKey *> * _Nullable)sortKeys checkDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSArray<NautilusContentInfo *> * _Nullable, NSError * _Nullable))completion;
/// お気に入り店舗コンテンツの件数を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getFavoriteShopContentCountWithCheckDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSInteger, NSError * _Nullable))completion;
/// お気に入りコンテンツ登録、削除を行う
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)updateFavoriteWithAddFavoriteContentIDs:(NSArray<NSNumber *> * _Nullable)addFavoriteContentIDs removeFavoriteContentIDs:(NSArray<NSNumber *> * _Nullable)removeFavoriteContentIDs completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// お気に入りコンテンツの一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getFavoriteContentListWithCompletion:(void (^ _Nonnull)(NSArray<NautilusContentInfo *> * _Nullable, NSError * _Nullable))completion;
/// コンテンツカテゴリー一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getContentCategoryListWithCompletion:(void (^ _Nonnull)(NSArray<NautilusContentCategoryInfo *> * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// コンテンツカテゴリーのデータ
SWIFT_CLASS("_TtC18NautilusContentSDK27NautilusContentCategoryInfo")
@interface NautilusContentCategoryInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, NautilusContentError, open) {
/// 不明
  NautilusContentErrorUnknown = 0,
/// 接続エラー
  NautilusContentErrorConnection = 1,
/// API処理エラー
  NautilusContentErrorApiProcessError = 2,
/// HTTP/HTTPS通信エラー
  NautilusContentErrorHttpConnection = 3,
/// レスポンスのパースエラー
  NautilusContentErrorParseFailure = 4,
/// 明示的にユーザーによりキャンセルされた
  NautilusContentErrorUserCancelled = 5,
  NautilusContentErrorInvalidParamater = 6,
};
static NSString * _Nonnull const NautilusContentErrorDomain = @"NautilusContentSDK.NautilusContentError";


/// コンテンツ画像一覧
SWIFT_CLASS("_TtC18NautilusContentSDK20NautilusContentImage")
@interface NautilusContentImage : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// MA 2.0 コンテンツのデータ
SWIFT_CLASS("_TtC18NautilusContentSDK19NautilusContentInfo")
@interface NautilusContentInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// コンテンツ閲覧APIに引き渡すパラメーター
SWIFT_CLASS("_TtC18NautilusContentSDK18NautilusContentLog")
@interface NautilusContentLog : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// コンテンツ閲覧APIで記録するログ種別
typedef SWIFT_ENUM(NSInteger, NautilusContentLogType, open) {
/// 1:詳細
  NautilusContentLogTypeDetail = 0,
/// 2:URLタップ
  NautilusContentLogTypeUrl = 1,
};


/// APIから取得するコンテンツデータの並び順
SWIFT_CLASS("_TtC18NautilusContentSDK22NautilusContentSortKey")
@interface NautilusContentSortKey : NSObject
/// 引数なし初期化は禁止
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// APIから取得するデータの並び順のキー名
typedef SWIFT_ENUM(NSInteger, NautilusContentSortKeyName, open) {
/// 掲載開始日時
  NautilusContentSortKeyNamePublishStartDateTime = 0,
/// 掲載終了日時
  NautilusContentSortKeyNamePublishEndDateTime = 1,
/// 表示優先順位
  NautilusContentSortKeyNameSortNumber = 2,
};

/// APIから取得するデータの並び順の順序指定
typedef SWIFT_ENUM(NSInteger, NautilusContentSortKeyOrder, open) {
/// 昇順
  NautilusContentSortKeyOrderAscending = 0,
/// 降順
  NautilusContentSortKeyOrderDescending = 1,
};

/// コンテンツタイプ
/// コンテンツ種別 1:全体 2:個人別 3:店舗別
typedef SWIFT_ENUM(NSInteger, NautilusContentType, open) {
  NautilusContentTypeCommon = 0,
  NautilusContentTypePrivate = 1,
  NautilusContentTypeFavoriteShop = 2,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
