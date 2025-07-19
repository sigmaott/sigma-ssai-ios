#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SmLogLevel) {
    SM_LOG_LEVEL_NONE = 0,
    SM_LOG_LEVEL_ERROR,
    SM_LOG_LEVEL_WARNING,
    SM_LOG_LEVEL_INFO,
    SM_LOG_LEVEL_DEBUG
};

@interface SsaiSDK : NSObject
+ (SsaiSDK *)getInstance;
+ (void) setLogLevel:(SmLogLevel) logLevel;
+ (SmLogLevel) getLogLevel;

- (void) setManifestTimeout:(int)manifestTimeout;
- (NSString *)generate:(NSString *)url;
- (void) setUserAgent:(NSString*) userAgent;
- (void) setCustomData:(NSString* )url customDataJsonStr:(NSString*)customDataJsonStr;
- (void) setAdsParamsWithUrl:(NSString*)url andParams:(NSString* )adsParams;
- (void) setAdsEndpointWithUrl:(NSString* )url adsEndpoint:(NSString*)adsEndpoint;
- (void) setExtraParams:(NSString*)url andExtraParams:(NSString* )extraParams;
- (NSString*) getTrackingData:(NSString* )url;
@end
