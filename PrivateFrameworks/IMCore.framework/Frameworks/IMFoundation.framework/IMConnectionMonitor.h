/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, <IMConnectionMonitorDelegate>;

@interface IMConnectionMonitor : NSObject {
    <IMConnectionMonitorDelegate> *_delegate;
    NSString *_remoteHost;
}

+ (id)alloc;

- (void)_setup;
- (void)dealloc;
- (id)delegate;
- (void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
- (void)goDisconnected;
- (id)initWithRemoteHost:(id)arg1 delegate:(id)arg2;
- (BOOL)isDataConnectionActive;
- (BOOL)isImmediatelyReachable;
- (BOOL)isReachableAfterModemDial;
- (id)remoteHost;
- (BOOL)requiresDataConnectionActivation;
- (void)setDataConnectionActive:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)startDialUp;

@end