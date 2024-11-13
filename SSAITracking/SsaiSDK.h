#import <Foundation/Foundation.h>

@interface SsaiSDK : NSObject
{
    NSTimeInterval _time2CallForceGround;
}
+(SsaiSDK *)getInstance;
-(NSString *)generate:(NSString *)url;
-(void) setAdsParamsWithUrl:(NSString*)url andParams:(NSString* )adsParams;
-(NSString*) getTrackingData:(NSString* )url ;
-(void) setAdsEndpoint:(NSString* )manifestUrl adsEndpoint:(NSString*)adsEndpoint;
-(void) onEnterForceground;
-(void) onEnterBackground;
@end
