#import <Foundation/Foundation.h>

@interface SsaiSDK : NSObject
+(SsaiSDK *)getInstance;
-(NSString *)generate:(NSString *)url;
@end
