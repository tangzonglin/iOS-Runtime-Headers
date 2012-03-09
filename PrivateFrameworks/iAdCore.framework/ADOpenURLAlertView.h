/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface ADOpenURLAlertView : ADAlertView <UIAlertViewDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    NSString *_URLString;
}

@property(copy) id completionBlock;
@property(copy) NSString * URLString;

+ (id)openURL:(id)arg1 forAd:(id)arg2 fromClient:(id)arg3 completionBlock:(id)arg4;

- (id)URLString;
- (void)dealloc;
- (id)completionBlock;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)didPresentAlertView:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)setURLString:(id)arg1;

@end