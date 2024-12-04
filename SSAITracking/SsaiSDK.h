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

- (NSString *)generate:(NSString *)url;
- (void) setAdsParamsWithUrl:(NSString*)url andParams:(NSString* )adsParams;
- (void) setExtraParams:(NSString*)url andExtraParams:(NSString* )extraParams;
- (void) setAdsEndpointWithUrl:(NSString* )url adsEndpoint:(NSString*)adsEndpoint;
- (void) setAdsEndpoint:(NSString *)url adsEndpoint:(NSString *)adsEndpoint __attribute__((deprecated("This method is deprecated. Use setAdsEndpointWithUrl instead.")));
- (NSString*) getTrackingData:(NSString* )url;

@end
