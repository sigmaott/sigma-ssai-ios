#import <Foundation/Foundation.h>

@interface SsaiSDK : NSObject
+(SsaiSDK *)getInstance;
-(NSString *)generate:(NSString *)url;
-(void) setAdsParamsWithUrl:(NSString*)url andParams:(NSString* )adsParams;
-(NSString*) getTrackingData:(NSString* )url ;
-(void) setAdsServerUrl:(NSString* )manifestUrl andAdsServerUrl:(NSString*)adsServerUrl;
@end
