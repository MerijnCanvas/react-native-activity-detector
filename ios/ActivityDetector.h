
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNActivityDetectorSpec.h"

@interface ActivityDetector : NSObject <NativeActivityDetectorSpec>
#else
#import <React/RCTBridgeModule.h>

@interface ActivityDetector : NSObject <RCTBridgeModule>
#endif

@end
