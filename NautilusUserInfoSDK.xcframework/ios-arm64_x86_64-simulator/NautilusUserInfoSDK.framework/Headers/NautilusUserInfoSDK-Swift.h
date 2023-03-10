#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef NAUTILUSUSERINFOSDK_SWIFT_H
#define NAUTILUSUSERINFOSDK_SWIFT_H
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
@import NautilusGeoUtilSDK;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusUserInfoSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)


/// 会員属性
SWIFT_CLASS("_TtC19NautilusUserInfoSDK21NautilusUserAttribute")
@interface NautilusUserAttribute : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum NautilusUserGenderType : NSInteger;
@class NSDateComponents;
@class NSString;
enum NautilusUserOptionalAttributeKey : NSInteger;

/// 会員属性の更新を行うためのクラス
SWIFT_CLASS("_TtC19NautilusUserInfoSDK28NautilusUserAttributeUpdater")
@interface NautilusUserAttributeUpdater : NSObject
/// 性別を設定
/// \param gender NautilusUserGenderType
///
- (void)setGenderWithGender:(enum NautilusUserGenderType)gender;
/// 誕生日を設定
/// \param birthday DateComponents Asia/Tokyo[year, month, day]
///
- (void)setBirthdayWithBirthday:(NSDateComponents * _Nonnull)birthday;
/// 都道府県情報を設定
/// \param prefecture NautilusPrefectureCode
///
- (void)setPrefectureWithPrefecture:(enum NautilusPrefectureCode)prefecture;
/// 市町村コードを設定
/// \param municipalityID 0から始まるのでString
///
- (void)setMunicipalityIDWithMunicipalityID:(NSString * _Nonnull)municipalityID;
/// 郵便番号を設定
/// \param zipCode 0から始まることがあるのでString
///
- (void)setZipCodeWithZipCode:(NSString * _Nonnull)zipCode;
/// ブランドIDを設定
/// \param brandID Int
///
- (void)setBrandIDWithBrandID:(NSInteger)brandID;
/// 顧客管理コードを設定
/// \param manageCode String
///
- (void)setManageCodeWithManageCode:(NSString * _Nonnull)manageCode;
/// 拡張項目を設定
/// \param key NautilusUserOptionalAttributeKey
///
/// \param value String
///
- (void)setOptionsWithKey:(enum NautilusUserOptionalAttributeKey)key value:(NSString * _Nonnull)value;
/// 性別を未設定に戻す
- (void)removeGender;
/// 誕生日を未設定に戻す
- (void)removeBirthday;
/// 都道府県情報を未設定に戻す
- (void)removePrefecture;
/// 市町村コードを未設定に戻す
- (void)removeMunicipalityID;
/// 郵便番号を未設定に戻す
- (void)removeZipCode;
/// ブランドIDを未設定に戻す
- (void)removeBrandID;
/// 顧客管理コードを未設定に戻す
- (void)removeManageCode;
/// 拡張項目を未設定に戻す
- (void)removeOptionsWithKey:(enum NautilusUserOptionalAttributeKey)key;
/// 更新された内容から構成されるNautilusUserAttributeのインスタンスを生成
///
/// returns:
/// NautilusUserAttribute / 更新がなければnull
- (NautilusUserAttribute * _Nullable)build SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// アンケート
SWIFT_CLASS("_TtC19NautilusUserInfoSDK19NautilusUserEnquete")
@interface NautilusUserEnquete : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// アンケート回答
SWIFT_CLASS("_TtC19NautilusUserInfoSDK25NautilusUserEnqueteAnswer")
@interface NautilusUserEnqueteAnswer : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// アンケート回答項目
SWIFT_CLASS("_TtC19NautilusUserInfoSDK29NautilusUserEnqueteAnswerItem")
@interface NautilusUserEnqueteAnswerItem : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// アンケート項目の回答方式
typedef SWIFT_ENUM(NSInteger, NautilusUserEnqueteAnswerType, open) {
/// 単一選択
  NautilusUserEnqueteAnswerTypeSingleSelection = 1,
/// 複数選択
  NautilusUserEnqueteAnswerTypeMultipleSelection = 2,
/// テキスト入力
  NautilusUserEnqueteAnswerTypeFreeText = 3,
/// 不明
  NautilusUserEnqueteAnswerTypeUnknown = -1,
};


/// アンケート項目
SWIFT_CLASS("_TtC19NautilusUserInfoSDK23NautilusUserEnqueteItem")
@interface NautilusUserEnqueteItem : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// アンケート項目 選択肢
SWIFT_CLASS("_TtC19NautilusUserInfoSDK32NautilusUserEnqueteSelectionItem")
@interface NautilusUserEnqueteSelectionItem : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// アンケートの更新を行うためのクラス
SWIFT_CLASS("_TtC19NautilusUserInfoSDK26NautilusUserEnqueteUpdater")
@interface NautilusUserEnqueteUpdater : NSObject
/// 指定されたselectedOptionsを選択済みにする（単一選択）
- (void)selectItemWithEnqueteItem:(NautilusUserEnqueteItem * _Nonnull)enqueteItem selectedOption:(NSInteger)selectedOption;
/// 指定されたselectedOptionsを選択済みにする（複数選択）
- (void)selectItemsWithEnqueteItem:(NautilusUserEnqueteItem * _Nonnull)enqueteItem selectedOption:(NSArray<NSNumber *> * _Nullable)selectedOption;
/// 指定されたinputTextを入力内容として保持する
- (void)setInputTextWithEnqueteItem:(NautilusUserEnqueteItem * _Nonnull)enqueteItem inputText:(NSString * _Nullable)inputText;
/// 指定されたアンケート項目の選択状態を未選択にする
- (void)deselectItemWithEnqueteItem:(NautilusUserEnqueteItem * _Nonnull)enqueteItem;
/// 指定されたアンケート項目の選択状態を未選択にする
- (void)deselectItemsWithEnqueteItem:(NautilusUserEnqueteItem * _Nonnull)enqueteItem;
/// 指定されたアンケート項目の入力内容を未入力にする
- (void)removeInputTextWithEnqueteItem:(NautilusUserEnqueteItem * _Nonnull)enqueteItem;
/// 更新された内容（同じ回答を含む）から構成されるNautilusUserEnqueteAnswerのインスタンスを返却
- (NautilusUserEnqueteAnswer * _Nullable)build SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// 会員性別
typedef SWIFT_ENUM(NSInteger, NautilusUserGenderType, open) {
/// 男性
  NautilusUserGenderTypeMale = 1,
/// 女性
  NautilusUserGenderTypeFemale = 2,
/// その他
  NautilusUserGenderTypeOther = 3,
};

@class NautilusComponentDependency;
@class NautilusApp;
@class NSError;

/// アプリとのインターフェース
SWIFT_CLASS("_TtC19NautilusUserInfoSDK16NautilusUserInfo")
@interface NautilusUserInfo : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
/// <code>NautilusUserInfoSDK</code>の機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
+ (NautilusUserInfo * _Nonnull)userInfo SWIFT_WARN_UNUSED_RESULT;
+ (NautilusUserInfo * _Nonnull)userInfoAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
/// 会員属性の取得
/// \param completion 成功時は会員属性情報, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)loadUserAttributeWithCompletion:(void (^ _Nonnull)(NautilusUserAttribute * _Nullable, NSError * _Nullable))completion;
/// 会員属性の登録
/// \param userAttribute loadUserAttribute(completion:) メソッドで取得した会員情報
///
/// \param completion 成功時は true, 失敗時は false を受け取るクロージャ
///
- (void)uploadUserAttributeWithUserAttribute:(NautilusUserAttribute * _Nonnull)userAttribute completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// アンケート項目の取得
/// \param completion 成功時はアンケート項目, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)loadUserEnquetesWithCompletion:(void (^ _Nonnull)(NSArray<NautilusUserEnquete *> * _Nullable, NSError * _Nullable))completion;
/// アンケート回答を登録
/// \param enqueteAnswer アンケートの回答
///
/// \param completion 成功時は true, 失敗時は false を受け取るクロージャ
///
- (void)uploadUserEnqueteWithEnqueteAnswer:(NautilusUserEnqueteAnswer * _Nonnull)enqueteAnswer completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// 会員属性 オプション属性
SWIFT_CLASS("_TtC19NautilusUserInfoSDK29NautilusUserOptionalAttribute")
@interface NautilusUserOptionalAttribute : NSObject
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// 会員属性 オプション属性 オプション指定のキー
typedef SWIFT_ENUM(NSInteger, NautilusUserOptionalAttributeKey, open) {
  NautilusUserOptionalAttributeKeyOption1 = 0,
  NautilusUserOptionalAttributeKeyOption2 = 1,
  NautilusUserOptionalAttributeKeyOption3 = 2,
  NautilusUserOptionalAttributeKeyOption4 = 3,
  NautilusUserOptionalAttributeKeyOption5 = 4,
  NautilusUserOptionalAttributeKeyOption6 = 5,
  NautilusUserOptionalAttributeKeyOption7 = 6,
  NautilusUserOptionalAttributeKeyOption8 = 7,
  NautilusUserOptionalAttributeKeyOption9 = 8,
  NautilusUserOptionalAttributeKeyOption10 = 9,
};

/// UserInfoSDKのエラー
typedef SWIFT_ENUM(NSInteger, UserInfoNetworkServiceError, open) {
/// 不明
  UserInfoNetworkServiceErrorUnknown = 0,
/// 接続エラー
  UserInfoNetworkServiceErrorConnection = 1,
/// API処理エラー
  UserInfoNetworkServiceErrorApiProcessError = 2,
/// HTTP/HTTPS通信エラー
  UserInfoNetworkServiceErrorHttpConnection = 3,
/// レスポンスのパースエラー
  UserInfoNetworkServiceErrorParseFailure = 4,
/// 明示的にユーザーによりキャンセルされた
  UserInfoNetworkServiceErrorUserCancelled = 5,
/// 不正なインスタンス
  UserInfoNetworkServiceErrorInvalidInstance = 6,
/// パラメータ不正
  UserInfoNetworkServiceErrorInvalidParameters = 100,
/// パラメータが不足している
  UserInfoNetworkServiceErrorMissingRequiredParameter = 101,
/// パラメータフォーマット不正
  UserInfoNetworkServiceErrorUnexpectedParameterFormat = 102,
/// サーバ側エラー
  UserInfoNetworkServiceErrorServerError = 200,
/// メンテナンス中
  UserInfoNetworkServiceErrorServiceMaintenance = 901,
/// 指定したAPIが存在しない
  UserInfoNetworkServiceErrorUnknownAPIService = 903,
/// PIDが未登録
  UserInfoNetworkServiceErrorInvalidUserPID = 905,
/// API KEYが不正
  UserInfoNetworkServiceErrorDeveloperError = 906,
/// 未ログインのため利用不可
  UserInfoNetworkServiceErrorRequiresLoginStatus = 907,
};
static NSString * _Nonnull const UserInfoNetworkServiceErrorDomain = @"NautilusUserInfoSDK.UserInfoNetworkServiceError";

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef NAUTILUSUSERINFOSDK_SWIFT_H
#define NAUTILUSUSERINFOSDK_SWIFT_H
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
@import NautilusGeoUtilSDK;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusUserInfoSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)


/// 会員属性
SWIFT_CLASS("_TtC19NautilusUserInfoSDK21NautilusUserAttribute")
@interface NautilusUserAttribute : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum NautilusUserGenderType : NSInteger;
@class NSDateComponents;
@class NSString;
enum NautilusUserOptionalAttributeKey : NSInteger;

/// 会員属性の更新を行うためのクラス
SWIFT_CLASS("_TtC19NautilusUserInfoSDK28NautilusUserAttributeUpdater")
@interface NautilusUserAttributeUpdater : NSObject
/// 性別を設定
/// \param gender NautilusUserGenderType
///
- (void)setGenderWithGender:(enum NautilusUserGenderType)gender;
/// 誕生日を設定
/// \param birthday DateComponents Asia/Tokyo[year, month, day]
///
- (void)setBirthdayWithBirthday:(NSDateComponents * _Nonnull)birthday;
/// 都道府県情報を設定
/// \param prefecture NautilusPrefectureCode
///
- (void)setPrefectureWithPrefecture:(enum NautilusPrefectureCode)prefecture;
/// 市町村コードを設定
/// \param municipalityID 0から始まるのでString
///
- (void)setMunicipalityIDWithMunicipalityID:(NSString * _Nonnull)municipalityID;
/// 郵便番号を設定
/// \param zipCode 0から始まることがあるのでString
///
- (void)setZipCodeWithZipCode:(NSString * _Nonnull)zipCode;
/// ブランドIDを設定
/// \param brandID Int
///
- (void)setBrandIDWithBrandID:(NSInteger)brandID;
/// 顧客管理コードを設定
/// \param manageCode String
///
- (void)setManageCodeWithManageCode:(NSString * _Nonnull)manageCode;
/// 拡張項目を設定
/// \param key NautilusUserOptionalAttributeKey
///
/// \param value String
///
- (void)setOptionsWithKey:(enum NautilusUserOptionalAttributeKey)key value:(NSString * _Nonnull)value;
/// 性別を未設定に戻す
- (void)removeGender;
/// 誕生日を未設定に戻す
- (void)removeBirthday;
/// 都道府県情報を未設定に戻す
- (void)removePrefecture;
/// 市町村コードを未設定に戻す
- (void)removeMunicipalityID;
/// 郵便番号を未設定に戻す
- (void)removeZipCode;
/// ブランドIDを未設定に戻す
- (void)removeBrandID;
/// 顧客管理コードを未設定に戻す
- (void)removeManageCode;
/// 拡張項目を未設定に戻す
- (void)removeOptionsWithKey:(enum NautilusUserOptionalAttributeKey)key;
/// 更新された内容から構成されるNautilusUserAttributeのインスタンスを生成
///
/// returns:
/// NautilusUserAttribute / 更新がなければnull
- (NautilusUserAttribute * _Nullable)build SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// アンケート
SWIFT_CLASS("_TtC19NautilusUserInfoSDK19NautilusUserEnquete")
@interface NautilusUserEnquete : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// アンケート回答
SWIFT_CLASS("_TtC19NautilusUserInfoSDK25NautilusUserEnqueteAnswer")
@interface NautilusUserEnqueteAnswer : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// アンケート回答項目
SWIFT_CLASS("_TtC19NautilusUserInfoSDK29NautilusUserEnqueteAnswerItem")
@interface NautilusUserEnqueteAnswerItem : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// アンケート項目の回答方式
typedef SWIFT_ENUM(NSInteger, NautilusUserEnqueteAnswerType, open) {
/// 単一選択
  NautilusUserEnqueteAnswerTypeSingleSelection = 1,
/// 複数選択
  NautilusUserEnqueteAnswerTypeMultipleSelection = 2,
/// テキスト入力
  NautilusUserEnqueteAnswerTypeFreeText = 3,
/// 不明
  NautilusUserEnqueteAnswerTypeUnknown = -1,
};


/// アンケート項目
SWIFT_CLASS("_TtC19NautilusUserInfoSDK23NautilusUserEnqueteItem")
@interface NautilusUserEnqueteItem : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// アンケート項目 選択肢
SWIFT_CLASS("_TtC19NautilusUserInfoSDK32NautilusUserEnqueteSelectionItem")
@interface NautilusUserEnqueteSelectionItem : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// アンケートの更新を行うためのクラス
SWIFT_CLASS("_TtC19NautilusUserInfoSDK26NautilusUserEnqueteUpdater")
@interface NautilusUserEnqueteUpdater : NSObject
/// 指定されたselectedOptionsを選択済みにする（単一選択）
- (void)selectItemWithEnqueteItem:(NautilusUserEnqueteItem * _Nonnull)enqueteItem selectedOption:(NSInteger)selectedOption;
/// 指定されたselectedOptionsを選択済みにする（複数選択）
- (void)selectItemsWithEnqueteItem:(NautilusUserEnqueteItem * _Nonnull)enqueteItem selectedOption:(NSArray<NSNumber *> * _Nullable)selectedOption;
/// 指定されたinputTextを入力内容として保持する
- (void)setInputTextWithEnqueteItem:(NautilusUserEnqueteItem * _Nonnull)enqueteItem inputText:(NSString * _Nullable)inputText;
/// 指定されたアンケート項目の選択状態を未選択にする
- (void)deselectItemWithEnqueteItem:(NautilusUserEnqueteItem * _Nonnull)enqueteItem;
/// 指定されたアンケート項目の選択状態を未選択にする
- (void)deselectItemsWithEnqueteItem:(NautilusUserEnqueteItem * _Nonnull)enqueteItem;
/// 指定されたアンケート項目の入力内容を未入力にする
- (void)removeInputTextWithEnqueteItem:(NautilusUserEnqueteItem * _Nonnull)enqueteItem;
/// 更新された内容（同じ回答を含む）から構成されるNautilusUserEnqueteAnswerのインスタンスを返却
- (NautilusUserEnqueteAnswer * _Nullable)build SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// 会員性別
typedef SWIFT_ENUM(NSInteger, NautilusUserGenderType, open) {
/// 男性
  NautilusUserGenderTypeMale = 1,
/// 女性
  NautilusUserGenderTypeFemale = 2,
/// その他
  NautilusUserGenderTypeOther = 3,
};

@class NautilusComponentDependency;
@class NautilusApp;
@class NSError;

/// アプリとのインターフェース
SWIFT_CLASS("_TtC19NautilusUserInfoSDK16NautilusUserInfo")
@interface NautilusUserInfo : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
/// <code>NautilusUserInfoSDK</code>の機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
+ (NautilusUserInfo * _Nonnull)userInfo SWIFT_WARN_UNUSED_RESULT;
+ (NautilusUserInfo * _Nonnull)userInfoAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
/// 会員属性の取得
/// \param completion 成功時は会員属性情報, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)loadUserAttributeWithCompletion:(void (^ _Nonnull)(NautilusUserAttribute * _Nullable, NSError * _Nullable))completion;
/// 会員属性の登録
/// \param userAttribute loadUserAttribute(completion:) メソッドで取得した会員情報
///
/// \param completion 成功時は true, 失敗時は false を受け取るクロージャ
///
- (void)uploadUserAttributeWithUserAttribute:(NautilusUserAttribute * _Nonnull)userAttribute completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// アンケート項目の取得
/// \param completion 成功時はアンケート項目, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)loadUserEnquetesWithCompletion:(void (^ _Nonnull)(NSArray<NautilusUserEnquete *> * _Nullable, NSError * _Nullable))completion;
/// アンケート回答を登録
/// \param enqueteAnswer アンケートの回答
///
/// \param completion 成功時は true, 失敗時は false を受け取るクロージャ
///
- (void)uploadUserEnqueteWithEnqueteAnswer:(NautilusUserEnqueteAnswer * _Nonnull)enqueteAnswer completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// 会員属性 オプション属性
SWIFT_CLASS("_TtC19NautilusUserInfoSDK29NautilusUserOptionalAttribute")
@interface NautilusUserOptionalAttribute : NSObject
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// 会員属性 オプション属性 オプション指定のキー
typedef SWIFT_ENUM(NSInteger, NautilusUserOptionalAttributeKey, open) {
  NautilusUserOptionalAttributeKeyOption1 = 0,
  NautilusUserOptionalAttributeKeyOption2 = 1,
  NautilusUserOptionalAttributeKeyOption3 = 2,
  NautilusUserOptionalAttributeKeyOption4 = 3,
  NautilusUserOptionalAttributeKeyOption5 = 4,
  NautilusUserOptionalAttributeKeyOption6 = 5,
  NautilusUserOptionalAttributeKeyOption7 = 6,
  NautilusUserOptionalAttributeKeyOption8 = 7,
  NautilusUserOptionalAttributeKeyOption9 = 8,
  NautilusUserOptionalAttributeKeyOption10 = 9,
};

/// UserInfoSDKのエラー
typedef SWIFT_ENUM(NSInteger, UserInfoNetworkServiceError, open) {
/// 不明
  UserInfoNetworkServiceErrorUnknown = 0,
/// 接続エラー
  UserInfoNetworkServiceErrorConnection = 1,
/// API処理エラー
  UserInfoNetworkServiceErrorApiProcessError = 2,
/// HTTP/HTTPS通信エラー
  UserInfoNetworkServiceErrorHttpConnection = 3,
/// レスポンスのパースエラー
  UserInfoNetworkServiceErrorParseFailure = 4,
/// 明示的にユーザーによりキャンセルされた
  UserInfoNetworkServiceErrorUserCancelled = 5,
/// 不正なインスタンス
  UserInfoNetworkServiceErrorInvalidInstance = 6,
/// パラメータ不正
  UserInfoNetworkServiceErrorInvalidParameters = 100,
/// パラメータが不足している
  UserInfoNetworkServiceErrorMissingRequiredParameter = 101,
/// パラメータフォーマット不正
  UserInfoNetworkServiceErrorUnexpectedParameterFormat = 102,
/// サーバ側エラー
  UserInfoNetworkServiceErrorServerError = 200,
/// メンテナンス中
  UserInfoNetworkServiceErrorServiceMaintenance = 901,
/// 指定したAPIが存在しない
  UserInfoNetworkServiceErrorUnknownAPIService = 903,
/// PIDが未登録
  UserInfoNetworkServiceErrorInvalidUserPID = 905,
/// API KEYが不正
  UserInfoNetworkServiceErrorDeveloperError = 906,
/// 未ログインのため利用不可
  UserInfoNetworkServiceErrorRequiresLoginStatus = 907,
};
static NSString * _Nonnull const UserInfoNetworkServiceErrorDomain = @"NautilusUserInfoSDK.UserInfoNetworkServiceError";

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
