#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#import <React/RCTViewManager.h>
#else
#import "RCTBridgeModule.h"
#import "RCTViewManager.h"
#endif

@interface AwsIvsPlayerView : RCTViewManager

@end
