#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class UAKMMOSDCLFKeyVault, UAKMMOSDCLFIosAnalyticsManagerAmplitudeCompanion, Amplitude;

@protocol UAKMMOSDCLFPlatform, UAKMMOSDCLFAmplitudeAnalyticsManager, UAKMMOSDCLFDataDogAnalyticsManager;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface UAKMMOSDCLFBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface UAKMMOSDCLFBase (UAKMMOSDCLFBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface UAKMMOSDCLFMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface UAKMMOSDCLFMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorUAKMMOSDCLFKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface UAKMMOSDCLFNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface UAKMMOSDCLFByte : UAKMMOSDCLFNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface UAKMMOSDCLFUByte : UAKMMOSDCLFNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface UAKMMOSDCLFShort : UAKMMOSDCLFNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface UAKMMOSDCLFUShort : UAKMMOSDCLFNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface UAKMMOSDCLFInt : UAKMMOSDCLFNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface UAKMMOSDCLFUInt : UAKMMOSDCLFNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface UAKMMOSDCLFLong : UAKMMOSDCLFNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface UAKMMOSDCLFULong : UAKMMOSDCLFNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface UAKMMOSDCLFFloat : UAKMMOSDCLFNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface UAKMMOSDCLFDouble : UAKMMOSDCLFNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface UAKMMOSDCLFBoolean : UAKMMOSDCLFNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Calculator")))
@interface UAKMMOSDCLFCalculator : UAKMMOSDCLFBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)absX:(int32_t)x __attribute__((swift_name("abs(x:)")));
- (int32_t)addNum1:(int32_t)num1 num2:(int32_t)num2 __attribute__((swift_name("add(num1:num2:)")));
- (int32_t)subNum1:(int32_t)num1 num2:(int32_t)num2 __attribute__((swift_name("sub(num1:num2:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface UAKMMOSDCLFGreeting : UAKMMOSDCLFBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol UAKMMOSDCLFPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface UAKMMOSDCLFIOSPlatform : UAKMMOSDCLFBase <UAKMMOSDCLFPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeyVault")))
@interface UAKMMOSDCLFKeyVault : UAKMMOSDCLFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)keyVault __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UAKMMOSDCLFKeyVault *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *amplitude_api_key __attribute__((swift_name("amplitude_api_key")));
@property (readonly) NSString *amplitude_deviceId_iOS __attribute__((swift_name("amplitude_deviceId_iOS")));
@property (readonly) int32_t amplitude_flushIntervalMillis_android __attribute__((swift_name("amplitude_flushIntervalMillis_android")));
@property (readonly) int32_t amplitude_flushQueueSize_android __attribute__((swift_name("amplitude_flushQueueSize_android")));
@property (readonly) NSString *amplitude_userId_iOS __attribute__((swift_name("amplitude_userId_iOS")));
@property (readonly) NSString *datadog_appVariantName_android __attribute__((swift_name("datadog_appVariantName_android")));
@property (readonly) NSString *datadog_application_id_android __attribute__((swift_name("datadog_application_id_android")));
@property (readonly) NSString *datadog_application_id_iOS __attribute__((swift_name("datadog_application_id_iOS")));
@property (readonly) NSString *datadog_client_token_android __attribute__((swift_name("datadog_client_token_android")));
@property (readonly) NSString *datadog_client_token_iOS __attribute__((swift_name("datadog_client_token_iOS")));
@property (readonly) NSString *datadog_environmentName_android __attribute__((swift_name("datadog_environmentName_android")));
@property (readonly) NSString *datadog_environmentName_iOS __attribute__((swift_name("datadog_environmentName_iOS")));
@property (readonly) NSString *datadog_logger_name_android __attribute__((swift_name("datadog_logger_name_android")));
@property (readonly) NSString *datadog_logger_name_iOS __attribute__((swift_name("datadog_logger_name_iOS")));
@property (readonly) int64_t datadog_longTaskThreshold_android __attribute__((swift_name("datadog_longTaskThreshold_android")));
@property (readonly) float datadog_remoteSampleRate_android __attribute__((swift_name("datadog_remoteSampleRate_android")));
@property (readonly) float datadog_sample_rate_iOS __attribute__((swift_name("datadog_sample_rate_iOS")));
@property (readonly) NSString *datadog_service_iOS __attribute__((swift_name("datadog_service_iOS")));
@property (readonly) NSString *datadog_service_log_config_iOS __attribute__((swift_name("datadog_service_log_config_iOS")));
@end

__attribute__((swift_name("AmplitudeAnalyticsManager")))
@protocol UAKMMOSDCLFAmplitudeAnalyticsManager
@required
- (void)initialize __attribute__((swift_name("initialize()")));
- (void)logEventAmplitudeEventName:(NSString *)eventName __attribute__((swift_name("logEventAmplitude(eventName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsManager")))
@interface UAKMMOSDCLFAnalyticsManager : UAKMMOSDCLFBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)doInitAmplitude __attribute__((swift_name("doInitAmplitude()")));
- (void)logEventEventName:(NSString *)eventName __attribute__((swift_name("logEvent(eventName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosAnalyticsManagerAmplitude")))
@interface UAKMMOSDCLFIosAnalyticsManagerAmplitude : UAKMMOSDCLFBase <UAKMMOSDCLFAmplitudeAnalyticsManager>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) UAKMMOSDCLFIosAnalyticsManagerAmplitudeCompanion *companion __attribute__((swift_name("companion")));
- (void)initialize __attribute__((swift_name("initialize()")));
- (void)logEventAmplitudeEventName:(NSString *)eventName __attribute__((swift_name("logEventAmplitude(eventName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosAnalyticsManagerAmplitude.Companion")))
@interface UAKMMOSDCLFIosAnalyticsManagerAmplitudeCompanion : UAKMMOSDCLFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UAKMMOSDCLFIosAnalyticsManagerAmplitudeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) Amplitude *amplitude __attribute__((swift_name("amplitude")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DDManager")))
@interface UAKMMOSDCLFDDManager : UAKMMOSDCLFBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)doInitDatadog __attribute__((swift_name("doInitDatadog()")));
- (void)logEventEventName:(NSString *)eventName __attribute__((swift_name("logEvent(eventName:)")));
@end

__attribute__((swift_name("DataDogAnalyticsManager")))
@protocol UAKMMOSDCLFDataDogAnalyticsManager
@required
- (void)initializeDataDog __attribute__((swift_name("initializeDataDog()")));
- (void)logEventDataDogEventName:(NSString *)eventName __attribute__((swift_name("logEventDataDog(eventName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosAnalyticsManagerDD")))
@interface UAKMMOSDCLFIosAnalyticsManagerDD : UAKMMOSDCLFBase <UAKMMOSDCLFDataDogAnalyticsManager>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)initializeDataDog __attribute__((swift_name("initializeDataDog()")));
- (void)logEventDataDogEventName:(NSString *)eventName __attribute__((swift_name("logEventDataDog(eventName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataDogAnalyticsManager_iosKt")))
@interface UAKMMOSDCLFDataDogAnalyticsManager_iosKt : UAKMMOSDCLFBase
+ (id<UAKMMOSDCLFDataDogAnalyticsManager>)getDataDogAnalyticsManager __attribute__((swift_name("getDataDogAnalyticsManager()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosAnalyticsManagerAmplitude_iosKt")))
@interface UAKMMOSDCLFIosAnalyticsManagerAmplitude_iosKt : UAKMMOSDCLFBase
+ (id<UAKMMOSDCLFAmplitudeAnalyticsManager>)getAmplitudeAnalyticsManager __attribute__((swift_name("getAmplitudeAnalyticsManager()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface UAKMMOSDCLFPlatform_iosKt : UAKMMOSDCLFBase
+ (id<UAKMMOSDCLFPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
