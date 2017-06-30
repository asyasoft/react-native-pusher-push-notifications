#import "RCTBridgeModule.h"
#import <React/RCTEventEmitter.h>
#import <Pusher/Pusher.h>

@interface RNPusherPushNotifications : RCTEventEmitter <RCTBridgeModule, PTPusherDelegate>

@property (nonatomic) PTPusher *pusher;

-(void)setDeviceToken:(NSData *)deviceToken;

@end


  